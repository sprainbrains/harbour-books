/*
 * Copyright (C) 2015 Jolla Ltd.
 * Contact: Slava Monich <slava.monich@jolla.com>
 *
 * You may use this file under the terms of the BSD license as follows:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Nemo Mobile nor the names of its contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <expat.h>
#include <stdlib.h>
#include <dlfcn.h>

#define EXPAT_FUNCTIONS(f) \
    f(XML_Parser, XML_ExternalEntityParserCreate, \
     (XML_Parser parser, const XML_Char* context, const XML_Char* encoding), \
     (parser, context, encoding), NULL) \
    f(XML_Bool, XML_ParserReset,\
     (XML_Parser parser, const XML_Char* encoding), \
     (parser, encoding), XML_FALSE) \
    f(void, XML_SetUserData, \
     (XML_Parser parser, void* userData), \
     (parser, userData), (void)0) \
    f(void, XML_SetUnknownEncodingHandler, \
     (XML_Parser parser, XML_UnknownEncodingHandler handler, void* data), \
     (parser, handler, data), (void)0) \
    f(void, XML_SetCharacterDataHandler, \
     (XML_Parser parser, XML_CharacterDataHandler handler), \
     (parser, handler), (void)0) \
    f(enum XML_Error, XML_UseForeignDTD, \
     (XML_Parser parser, XML_Bool useDTD), \
     (parser, useDTD), XML_ERROR_UNEXPECTED_STATE) \
    f(enum XML_Status, XML_SetEncoding, \
     (XML_Parser parser, const XML_Char* encoding), \
     (parser, encoding), XML_STATUS_ERROR) \
    f(void, XML_SetStartElementHandler, \
     (XML_Parser parser, XML_StartElementHandler handler), \
     (parser, handler), (void)0) \
    f(void, XML_SetEndElementHandler, \
     (XML_Parser parser, XML_EndElementHandler handler), \
     (parser, handler), (void)0) \
    f(void, XML_ParserFree, \
     (XML_Parser parser), \
     (parser), (void)0) \
    f(enum XML_Status, XML_Parse, \
     (XML_Parser parser, const char* s, int len, int isFinal), \
     (parser, s, len, isFinal), XML_STATUS_ERROR)

static struct {
    void* handle;
    union {
        struct expat_proc {
            XML_Parser (*XML_ParserCreate)(const XML_Char* encoding);
            #define FN_POINTER(type,name,params,args,fail) type (* name) params;
            EXPAT_FUNCTIONS(FN_POINTER)
        } expat;
        void* entry[1];
    } fn;
} expat;

static const char* expat_names[] = {
    "XML_ParserCreate",
    #define FN_NAME(type,name,params,args,fail) #name,
    EXPAT_FUNCTIONS(FN_NAME)
};

#define EXPAT_NUM_FUNCTIONS (sizeof(expat_names)/sizeof(expat_names[0]))
#define EXPAT_NO_HANDLE     ((void*)-1)
#define EXPAT_SO            "/usr/lib/libexpat.so.1"

/* XML_ParserCreate() is the special function where we load the library */
XML_Parser
XML_ParserCreate(
    const XML_Char* encoding)
{
    if (!expat.handle) {
        expat.handle = dlopen(EXPAT_SO, RTLD_LAZY);
        if (expat.handle) {
            unsigned int i;
            for (i=0; i<EXPAT_NUM_FUNCTIONS; i++) {
                expat.fn.entry[i] = dlsym(expat.handle, expat_names[i]);
            }
        } else {
            expat.handle = EXPAT_NO_HANDLE;
        }
    }
    return expat.fn.expat.XML_ParserCreate ?
        expat.fn.expat.XML_ParserCreate(encoding) :
        NULL;
}

/* All other wrappers are generated by the preprocessor */
#define FN_IMPL(type,name,params,args,fail) type name params \
  { return expat.fn.expat.name ? expat.fn.expat.name args : fail; }
EXPAT_FUNCTIONS(FN_IMPL)
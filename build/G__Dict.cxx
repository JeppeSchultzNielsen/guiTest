// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "include/TGMainFrameExample.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TGMainFrameExample(void *p);
   static void deleteArray_TGMainFrameExample(void *p);
   static void destruct_TGMainFrameExample(void *p);
   static void streamer_TGMainFrameExample(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGMainFrameExample*)
   {
      ::TGMainFrameExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGMainFrameExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGMainFrameExample", ::TGMainFrameExample::Class_Version(), "TGMainFrameExample.hh", 15,
                  typeid(::TGMainFrameExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGMainFrameExample::Dictionary, isa_proxy, 16,
                  sizeof(::TGMainFrameExample) );
      instance.SetDelete(&delete_TGMainFrameExample);
      instance.SetDeleteArray(&deleteArray_TGMainFrameExample);
      instance.SetDestructor(&destruct_TGMainFrameExample);
      instance.SetStreamerFunc(&streamer_TGMainFrameExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGMainFrameExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGMainFrameExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGMainFrameExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGMainFrameExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGMainFrameExample::Class_Name()
{
   return "TGMainFrameExample";
}

//______________________________________________________________________________
const char *TGMainFrameExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrameExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGMainFrameExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrameExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGMainFrameExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrameExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGMainFrameExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGMainFrameExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGMainFrameExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGMainFrameExample.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGMainFrameExample(void *p) {
      delete (static_cast<::TGMainFrameExample*>(p));
   }
   static void deleteArray_TGMainFrameExample(void *p) {
      delete [] (static_cast<::TGMainFrameExample*>(p));
   }
   static void destruct_TGMainFrameExample(void *p) {
      typedef ::TGMainFrameExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGMainFrameExample(TBuffer &buf, void *obj) {
      ((::TGMainFrameExample*)obj)->::TGMainFrameExample::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGMainFrameExample

namespace {
  void TriggerDictionaryInitialization_libguiLib_Impl() {
    static const char* headers[] = {
"/home/jeppe/devel/projects/guiTest/TGMainFrameExample.hh",
nullptr
    };
    static const char* includePaths[] = {
"/home/jeppe/devel/projects/guiTest",
"/home/jeppe/devel/projects/guiTest",
"/usr/local/include",
"/usr/include",
"/usr/include/x86_64-linux-gnu",
"/usr/local/include/",
"/home/jeppe/devel/projects/guiTest/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libguiLib dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/jeppe/devel/projects/guiTest/TGMainFrameExample.hh")))  TGMainFrameExample;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libguiLib dictionary payload"

#ifndef HAVE_GSL
  #define HAVE_GSL 1
#endif
#ifndef AUSA_HAS_LIBCURL
  #define AUSA_HAS_LIBCURL 1
#endif
#ifndef AUSA_HAS_CURL
  #define AUSA_HAS_CURL 1
#endif
#ifndef FMT_SHARED
  #define FMT_SHARED 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/jeppe/devel/projects/guiTest/TGMainFrameExample.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TGMainFrameExample", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libguiLib",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libguiLib_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libguiLib_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libguiLib() {
  TriggerDictionaryInitialization_libguiLib_Impl();
}

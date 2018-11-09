#include <napi.h>

#include "callgrind.h"

void callgrindStartInstrumentation(const Napi::CallbackInfo& info) {
  CALLGRIND_START_INSTRUMENTATION;
}

void callgrindStopInstrumentation(const Napi::CallbackInfo& info) {
  CALLGRIND_STOP_INSTRUMENTATION;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(
    Napi::String::New(env, "callgrindStartInstrumentation"),
    Napi::Function::New(env, callgrindStartInstrumentation)
  );
  exports.Set(
    Napi::String::New(env, "callgrindStopInstrumentation"),
    Napi::Function::New(env, callgrindStopInstrumentation)
  );
  return exports;
}

NODE_API_MODULE(valgrind_client_request, Init)

#include <napi.h>
#include <string>
#include "headers/replaceInterface.h"

Napi::String ReplaceString(const Napi::CallbackInfo& info){
    Napi::Env Env = info.Env();
    std::string Input = (std::string) info[0].ToString();
    std::string Find = (std::string) info[1].ToString();
    std::string Replace = (std::string) info[2].ToString();
    std::string result = findAndReplace(Input, Find, Replace);

    return Napi::String::New(Env, result);
}

Napi::Object Init(Napi::Env Env, Napi::Object exports){
    exports.Set(Napi::String::New(Env, "ReplaceString"), Napi::Function::New(Env, ReplaceString));
    return exports;
}

NODE_API_MODULE(ReplaceStringCpp, Init);
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from hellodjinni.djinni

#pragma once

#include "djinni_support.hpp"
#include "hello_djinni.hpp"

namespace djinni_generated {

class NativeHelloDjinni final : ::djinni::JniInterface<::hellodjinni::HelloDjinni, NativeHelloDjinni> {
public:
    using CppType = std::shared_ptr<::hellodjinni::HelloDjinni>;
    using CppOptType = std::shared_ptr<::hellodjinni::HelloDjinni>;
    using JniType = jobject;

    using Boxed = NativeHelloDjinni;

    ~NativeHelloDjinni();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeHelloDjinni>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeHelloDjinni>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeHelloDjinni();
    friend ::djinni::JniClass<NativeHelloDjinni>;
    friend ::djinni::JniInterface<::hellodjinni::HelloDjinni, NativeHelloDjinni>;

};

}  // namespace djinni_generated

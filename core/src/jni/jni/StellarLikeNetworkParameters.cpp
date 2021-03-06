// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#include "StellarLikeNetworkParameters.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

StellarLikeNetworkParameters::StellarLikeNetworkParameters() = default;

StellarLikeNetworkParameters::~StellarLikeNetworkParameters() = default;

auto StellarLikeNetworkParameters::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<StellarLikeNetworkParameters>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.Identifier)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.Version)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.BaseReserve)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.BaseFee)),
                                                           ::djinni::get(::djinni::List<::djinni::String>::fromCpp(jniEnv, c.AdditionalSEPs)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.NetworkPassphrase)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto StellarLikeNetworkParameters::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 7);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<StellarLikeNetworkParameters>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_Identifier)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_Version)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_BaseReserve)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_BaseFee)),
            ::djinni::List<::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_AdditionalSEPs)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_NetworkPassphrase))};
}

}  // namespace djinni_generated

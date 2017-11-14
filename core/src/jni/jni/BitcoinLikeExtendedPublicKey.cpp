// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "BitcoinLikeExtendedPublicKey.hpp"  // my header
#include "BitcoinLikeAddress.hpp"
#include "BitcoinLikeNetworkParameters.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeExtendedPublicKey::BitcoinLikeExtendedPublicKey() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeExtendedPublicKey, BitcoinLikeExtendedPublicKey>("co/ledger/core/BitcoinLikeExtendedPublicKey$CppProxy") {}

BitcoinLikeExtendedPublicKey::~BitcoinLikeExtendedPublicKey() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeExtendedPublicKey_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeExtendedPublicKey>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_BitcoinLikeExtendedPublicKey_00024CppProxy_native_1derive(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_path)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeExtendedPublicKey>(nativeRef);
        auto r = ref->derive(::djinni::String::toCpp(jniEnv, j_path));
        return ::djinni::release(::djinni_generated::BitcoinLikeAddress::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_BitcoinLikeExtendedPublicKey_00024CppProxy_native_1toBase58(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeExtendedPublicKey>(nativeRef);
        auto r = ref->toBase58();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_BitcoinLikeExtendedPublicKey_00024CppProxy_native_1getRootPath(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeExtendedPublicKey>(nativeRef);
        auto r = ref->getRootPath();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_BitcoinLikeExtendedPublicKey_fromBase58(JNIEnv* jniEnv, jobject /*this*/, jobject j_params, jstring j_address, jstring j_path)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::BitcoinLikeExtendedPublicKey::fromBase58(::djinni_generated::BitcoinLikeNetworkParameters::toCpp(jniEnv, j_params),
                                                                               ::djinni::String::toCpp(jniEnv, j_address),
                                                                               ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(jniEnv, j_path));
        return ::djinni::release(::djinni_generated::BitcoinLikeExtendedPublicKey::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated

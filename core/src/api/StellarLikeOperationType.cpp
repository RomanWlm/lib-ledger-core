// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from stellar_like_wallet.djinni

#include "StellarLikeOperationType.hpp"  // my header
#include "enum_from_string.hpp"

namespace ledger { namespace core { namespace api {

std::string to_string(const StellarLikeOperationType& stellarLikeOperationType) {
    switch (stellarLikeOperationType) {
        case StellarLikeOperationType::CREATE_ACCOUNT: return "CREATE_ACCOUNT";
        case StellarLikeOperationType::PAYMENT: return "PAYMENT";
        case StellarLikeOperationType::PATH_PAYMENT: return "PATH_PAYMENT";
        case StellarLikeOperationType::MANAGE_OFFER: return "MANAGE_OFFER";
        case StellarLikeOperationType::CREATE_PASSIVE_OFFER: return "CREATE_PASSIVE_OFFER";
        case StellarLikeOperationType::SET_OPTIONS: return "SET_OPTIONS";
        case StellarLikeOperationType::CHANGE_TRUST: return "CHANGE_TRUST";
        case StellarLikeOperationType::ALLOW_TRUST: return "ALLOW_TRUST";
        case StellarLikeOperationType::ACCOUNT_MERGE: return "ACCOUNT_MERGE";
        case StellarLikeOperationType::INFLATION: return "INFLATION";
        case StellarLikeOperationType::MANAGE_DATA: return "MANAGE_DATA";
        case StellarLikeOperationType::BUMP_SEQUENCE: return "BUMP_SEQUENCE";
        case StellarLikeOperationType::MANAGE_BUY_OFFER: return "MANAGE_BUY_OFFER";
    };
};
template <>
StellarLikeOperationType from_string(const std::string& stellarLikeOperationType) {
    if (stellarLikeOperationType == "CREATE_ACCOUNT") return StellarLikeOperationType::CREATE_ACCOUNT;
    else if (stellarLikeOperationType == "PAYMENT") return StellarLikeOperationType::PAYMENT;
    else if (stellarLikeOperationType == "PATH_PAYMENT") return StellarLikeOperationType::PATH_PAYMENT;
    else if (stellarLikeOperationType == "MANAGE_OFFER") return StellarLikeOperationType::MANAGE_OFFER;
    else if (stellarLikeOperationType == "CREATE_PASSIVE_OFFER") return StellarLikeOperationType::CREATE_PASSIVE_OFFER;
    else if (stellarLikeOperationType == "SET_OPTIONS") return StellarLikeOperationType::SET_OPTIONS;
    else if (stellarLikeOperationType == "CHANGE_TRUST") return StellarLikeOperationType::CHANGE_TRUST;
    else if (stellarLikeOperationType == "ALLOW_TRUST") return StellarLikeOperationType::ALLOW_TRUST;
    else if (stellarLikeOperationType == "ACCOUNT_MERGE") return StellarLikeOperationType::ACCOUNT_MERGE;
    else if (stellarLikeOperationType == "INFLATION") return StellarLikeOperationType::INFLATION;
    else if (stellarLikeOperationType == "MANAGE_DATA") return StellarLikeOperationType::MANAGE_DATA;
    else if (stellarLikeOperationType == "BUMP_SEQUENCE") return StellarLikeOperationType::BUMP_SEQUENCE;
    else return StellarLikeOperationType::MANAGE_BUY_OFFER;
};

std::ostream &operator<<(std::ostream &os, const StellarLikeOperationType &o)
{
    switch (o) {
        case StellarLikeOperationType::CREATE_ACCOUNT:  return os << "CREATE_ACCOUNT";
        case StellarLikeOperationType::PAYMENT:  return os << "PAYMENT";
        case StellarLikeOperationType::PATH_PAYMENT:  return os << "PATH_PAYMENT";
        case StellarLikeOperationType::MANAGE_OFFER:  return os << "MANAGE_OFFER";
        case StellarLikeOperationType::CREATE_PASSIVE_OFFER:  return os << "CREATE_PASSIVE_OFFER";
        case StellarLikeOperationType::SET_OPTIONS:  return os << "SET_OPTIONS";
        case StellarLikeOperationType::CHANGE_TRUST:  return os << "CHANGE_TRUST";
        case StellarLikeOperationType::ALLOW_TRUST:  return os << "ALLOW_TRUST";
        case StellarLikeOperationType::ACCOUNT_MERGE:  return os << "ACCOUNT_MERGE";
        case StellarLikeOperationType::INFLATION:  return os << "INFLATION";
        case StellarLikeOperationType::MANAGE_DATA:  return os << "MANAGE_DATA";
        case StellarLikeOperationType::BUMP_SEQUENCE:  return os << "BUMP_SEQUENCE";
        case StellarLikeOperationType::MANAGE_BUY_OFFER:  return os << "MANAGE_BUY_OFFER";
    }
}

} } }  // namespace ledger::core::api

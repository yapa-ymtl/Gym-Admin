#ifndef UTILITY_H
#define UTILITY_H

#include <QString>
#include <optional>

namespace Utility {

enum class Gender{
    Male,
    Female,
    Other
};

inline QString genderToString(Gender gender) {
    switch (gender) {
    case Gender::Male: return "Male";
    case Gender::Female: return "Female";
    case Gender::Other: return "Other";
    default: return "Unknown";
    }
}

std::optional<Gender> stringToGender(const QString& genderStr_);
}

#endif // UTILITY_H

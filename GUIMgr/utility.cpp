#include "utility.h"


namespace Utility {
std::optional<Gender> stringToGender(const QString& genderStr_)
{
    if(genderStr_.toLower() == "male") return Gender::Male;
    else if(genderStr_.toLower() == "female") return Gender::Female;
    else if(genderStr_.toLower() == "other") return Gender::Other;
    else return std::nullopt;

}

}


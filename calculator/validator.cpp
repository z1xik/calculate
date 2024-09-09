#include "validator.h"
#include <cctype>


std::string calculator::validator::validate(const std::string &input)
{
    std::string result;

    for (char c : input) {
        if (!std::isspace(static_cast<unsigned char>(c))) {
            result += c;
        }
    }

    return result;
}

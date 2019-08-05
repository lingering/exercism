#ifndef LIBARARY_REVERSE_STRING_H
#define LIBARARY_REVERSE_STRING_H

#include "reverse_string.h"
#endif
namespace reverse_string{
    std::string reverse_string(std::string input){
        std::reverse(input.begin(),input.end());
        return input;
    }
}
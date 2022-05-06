#if !defined(LUHN_H)
#define LUHN_H

#include <string>
#include <algorithm>
#include <ctype.h>

namespace luhn {
    bool valid(std::string a);
    bool isNumeric(char c);
}  // namespace luhn

#endif // LUHN_H
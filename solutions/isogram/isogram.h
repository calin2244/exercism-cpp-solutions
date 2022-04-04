#if !defined(ISOGRAM_H)
#define ISOGRAM_H

#include <string>
#include <cstring>
#include <map>
using std::string;

namespace isogram {
    bool isLetter(char c);
    bool is_isogram(string a);
}  // namespace isogram

#endif // ISOGRAM_H
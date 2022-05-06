#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>
using ul = unsigned long long int;

namespace hamming {
    using std::string;
    ul compute(string a, string b);
}  // namespace hamming

#endif // HAMMING_H
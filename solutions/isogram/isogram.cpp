#include "isogram.h"
#include <string>
#include <cstring>
#include <map>

using std::string;

namespace isogram 
{
    bool isLetter(char c)
    {
        return tolower(c) >='a' && tolower(c) <= 'z' ? true : false;
    }

    bool is_isogram(string a)
    {
         std::map<char, int> fr;
        for(long unsigned int i = 0; i< a.length(); ++i)
        {
            if(isLetter(a[i]))
            {
                if(fr.find(tolower(a[i])) == fr.end())
                {
                fr[tolower(a[i])] = 1;
                }
                else fr[tolower(a[i])]++;
            }
        }

        std::map<char, int>::iterator i;
        for(i = fr.begin(); i != fr.end(); ++i)
        {
            if(i->second > 1)
                return false;
        }
        return true;
    }
    
}  // namespace isogram

#include "luhn.h"

#include <algorithm>

namespace luhn 
{
    bool isNumeric(char c)
    {
        return c >= '0' && c <='9' ? true : false;
    }

    bool valid(std::string a)
    {
        int sum = 0, cnt = 0, num_of_letters = 0;
        std::string b;
        for(unsigned int i = 0; i < a.length(); ++i)
            if(isNumeric(a[i]))
                b.push_back(a[i]);
            else if(!isNumeric(a[i]) && a[i] != ' ')
                num_of_letters++;

        if(b.length() <= 1)
            return false;
        if(num_of_letters > 0)
            return false;
        
        for(int i = b.length() -1; i>=0; --i)
        {
            if(cnt % 2 !=0)
            {
                int c = b[i] - '0';
                if(c * 2 > 9)
                    sum = sum + c * 2 - 9;
                else sum = sum + c * 2;
            }
            else sum = sum + b[i] - '0';

            cnt++;
        }

        return sum % 10 == 0 ? true : false;
    }
}  // namespace luhn

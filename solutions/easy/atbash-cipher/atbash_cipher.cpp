#include "atbash_cipher.h"
#include <iostream>
#include <map>

namespace atbash_cipher {
    const std::map<char, char> table = {
    {'a', 'z'}, {'b', 'y'}, {'c', 'x'}, {'d', 'w'}, {'e', 'v'}, {'f', 'u'},          
    {'g', 't'}, {'h', 's'}, {'i', 'r'}, {'j', 'q'}, {'k', 'p'}, {'l', 'o'},                  
    {'m', 'n'}, {'n', 'm'}, {'o', 'l'}, {'p', 'k'}, {'q', 'j'}, {'r', 'i'},                  
    {'s', 'h'}, {'t', 'g'}, {'u', 'f'}, {'v', 'e'}, {'w', 'd'}, {'x', 'c'},        
    {'y', 'b'}, {'z', 'a'}, {'0', '0'}, {'1', '1'}, {'2', '2'}, {'3', '3'}, 
    {'4', '4'}, {'5', '5'}, {'6', '6'}, {'7', '7'}, {'8', '8'}, {'9', '9'}
    };

    std::string encode(const std::string &s){
        int count = 0;
        std::string a;
        for(char c: s){
            auto it = table.find(std::tolower(c));
            if(it != table.end())
            {
                if(count > 0 && count % 5 == 0)
                    a.push_back(' ');
                a.push_back(it->second);
                count++;   
            }     
        }
        return a;
    }

    std::string decode(const std::string &s){
        std::string a;
        for(char x : s){
            auto it = table.find(std::tolower(x));
            if(it != table.end())
            {
                a.push_back(it->second);
            }
        }
        return a;
    }
    
}  // namespace atbash_cipher
#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <algorithm>

namespace phone_number {

    using std::string;
    
    class phone_number{

        std::string phone_num;
        std::string area_code_num;

        public:
            std::string number(){
                return phone_num;
            }

            std::string area_code(){
                return area_code_num;
            }

            operator string() const{
                return "(" + area_code_num + ") " + string(phone_num, 3, 3) + "-" + string(phone_num, 6, 4);
            }

            phone_number(std::string ph){
                int count = 0;

                for(int i = ph.length()-1; i>=0; i--){
                    if((ph[i] >= '0' && ph[i] <= '9'))
                    {
                        if(count < 10)
                            phone_num.push_back(ph[i]);
                        if(count > 6 && count < 10)
                            area_code_num.push_back(ph[i]);
                        count++;
                    }
                }   
                
                std::reverse(phone_num.begin(), phone_num.end());
                std::reverse(area_code_num.begin(), area_code_num.end());

                if(phone_num[3] == '0' || phone_num[3] == '1')
                    throw std::domain_error("Invalid, exchange code can't start                                                                        with 0/1");  
                if(area_code_num[0] == '0' || area_code_num[0] == '1')
                    throw std::domain_error("Area code can't start with 0 or 1");
                
                if(count == 9 || count < 10 || count > 11)
                    throw std::domain_error("Invalid");

                if(count == 11){
                    char ch;
                    for(unsigned int i = 0; i < ph.length(); ++i){
                        if(ph[i] >='0' && ph[i] <= '9'){
                            ch = ph[i];
                            break;
                        }
                    }
                    if(ch != '1')
                        throw std::domain_error("Can't start with other digit");
                }
            }

            phone_number() = default;
    };
}  // namespace phone_number

#endif // PHONE_NUMBER_H
#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <random>
#include <vector>

namespace robot_name {
    class robot
    {
        public:
            //robot() = default; // robot();

            robot() 
            {
                current_name = makeName();                
            }

            std::string name() const
            {
                return current_name;
            }

            void reset()    
            {
                //current_name.clear(); //Why wasn't the program working with this line of code?? I don't understand:(
                current_name = makeName();
            }

            std::string makeName(void) 
            {
                std::string name = "";
                std::random_device seed;
                std::mt19937 eng(seed());
                std::uniform_int_distribution<> rand_letters('A', 'Z');
                name.push_back(rand_letters(eng));
                name.push_back(rand_letters(eng));

                std::uniform_int_distribution<> rand_nums('0', '9');
                name.push_back(rand_nums(eng));
                name.push_back(rand_nums(eng));
                name.push_back(rand_nums(eng));

                return name;
            }

        private:
            std::string current_name;
    };
}  // namespace robot_name

#endif // ROBOT_NAME_H
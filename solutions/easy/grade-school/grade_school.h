#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <vector>
#include <string>
#include <algorithm>

namespace grade_school {

    using std::string;
    using std::map;
    using std::vector;

    class school
    {
        map<int, vector<string>> _roster;
        public:
            school() = default;

            map<int, vector<string>> roster() const
            {
                return _roster;
            }

            vector<string> grade(int gr) const
            {
                auto _find = _roster.find(gr);
                if(_find == _roster.end())
                    return vector<string>();
                return _find->second;
            }
            
            void add(string name, int grade) 
            {
                _roster[grade].push_back(name);
                std::sort(_roster[grade].begin(), _roster[grade].end());
            }
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
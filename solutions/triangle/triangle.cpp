#include "triangle.h"
#include <vector>
#include <algorithm>

namespace triangle 
{
    using std::vector;
    flavor kind(double x, double b, double c)
    {
        vector<double> a = {x, b, c};
        sort(a.begin(), a.end());

        if(a[0] <= 0)
            throw std::domain_error("no");

        if(a[0] + a[1] < a[2])
            throw std::domain_error("no");
        
        if(a[0] == a[2])
            return flavor::equilateral;
        if(a[0] == a[1] || a[1] == a[2])
            return flavor::isosceles;
        
        return flavor::scalene;
    }
}  // namespace triangle

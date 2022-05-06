#include "difference_of_squares.h"

namespace difference_of_squares 
{
    int square_of_sum(int x)
    {
        int sum = (x*(x+1))/2;
        return sum*sum;
    }

    int sum_of_squares(int x)
    {
        int sum = 0;
        for(int i = 1; i < x+1; i++)
        {
            sum += i*i;
        }
        return sum;
    }

    int difference(int x)
    {
        return square_of_sum(x) - sum_of_squares(x);
    }
}  // namespace difference_of_squares

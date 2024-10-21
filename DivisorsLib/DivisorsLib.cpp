#include <vector>
#include <cmath>
#include <algorithm>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    if (number == 0) return result; 

    for (unsigned long long i = 1; i <= static_cast<unsigned long long>(std::sqrt(number)); ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i); 
            if (i != number / i) 
            {
                result.push_back(number / i); 
            }
        }
    }

    std::sort(result.begin(), result.end()); 
    return result;
}

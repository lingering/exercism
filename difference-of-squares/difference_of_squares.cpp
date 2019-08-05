#include "difference_of_squares.h"
namespace squares{
uint32_t square_of_sum(uint32_t num){
    uint32_t result=0;
    for(uint32_t i=1;i<=num;i++)
        {result+=i;
        }
        return result*result;
}
u_int32_t sum_of_squares(uint32_t num){
    u_int32_t result=0;
    for(uint32_t i=1;i<=num;i++)
    {
        result+=(i*i);
    }
    return result;
}
uint32_t difference(u_int32_t num){
    return square_of_sum(num)-sum_of_squares(num);
}
}
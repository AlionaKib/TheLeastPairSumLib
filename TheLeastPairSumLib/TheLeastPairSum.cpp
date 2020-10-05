#include "pch.h"
#include "TheLeastPairSumLib.h"
#include <vector>

int comp(const int* i, const int* j)
{
    return *i - *j;
}

THELEASTPAIRSUMLIB_API int TheLeastPairSum(int* vect, int n)
{
    qsort(&vect[0], n, sizeof(int), (int(*) (const void*, const void*)) comp);
    return vect[0] + vect[1];
}
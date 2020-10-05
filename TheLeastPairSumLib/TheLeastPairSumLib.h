#pragma once

#ifdef THELEASTPAIRSUMLIB_EXPORTS
#define THELEASTPAIRSUMLIB_API __declspec(dllexport)
#else
#define THELEASTPAIRSUMLIB_API __declspec(dllimport)
#endif

extern "C" THELEASTPAIRSUMLIB_API int TheLeastPairSum(int* vect, int n);

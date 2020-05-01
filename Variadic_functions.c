/*
Variadic functions are functions which take a variable number of arguments. 
In C programming, a variadic function will contribute to the flexibility of the program that you are developing.

In this problem, you will implement three variadic functions named sum() , min()
and max() to calculate sums, minima, maxima of a variable number of arguments. 
The first argument passed to the variadic function is the count of the number of arguments, 
which is followed by the arguments themselves.
*/

#include <stdarg.h>   // standard arguments library to use Variadic functions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    for(int i=0; i<count; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

int min(int count,...) {
    int new_arg;
    va_list args;
    va_start(args, count);
    int min = va_arg(args, int);

    for(int i=0; i<count-1; i++)
    {
        new_arg = va_arg(args, int);
        if(min > new_arg) min = new_arg;
    }
    va_end(args);

    return min;

}

int max(int count,...) {
    int new_arg;
    va_list args;
    va_start(args, count);
    int max = va_arg(args, int);

    for(int i=0; i<count-1; i++)
    {
        new_arg = va_arg(args, int);
        if(max < new_arg) max = new_arg;
    }
    va_end(args);

    return max;

}

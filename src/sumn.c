#include "sumn.h"

#include<stdio.h>

int sumn (int n)

//this is a recursive funktion to calculate the sum of the first n odd numbers.

{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*2-1 + sumn(n-1);
    }
}
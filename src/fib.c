/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)

//This is a tail recursive funktion for the n'th fibonacci number, where the 0th fibonacci number is 0.
//In our funktion we have two basecases n=0 and n=1
//The recursive step in this funktion iscomposed of (n-1)+(n-2)
//This tailrecursive funktion needs two help integers p and pp. they are counting n-1 and n-2
//When the funktion runs p becomes pp, pp becomes p+pp. 

{
    assert(n>=0);

    if (n==0)
    {
        return p;
    }
    else if (n==1)
    {
        return pp;
    }
    else
    {
        return (fib (n-1,pp,pp+p));
    }
    return 0;
}

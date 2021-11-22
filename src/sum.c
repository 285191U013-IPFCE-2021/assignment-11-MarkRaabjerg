#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)

//Tn this funktion we use a 2nd integer to make a tail recursive funktion.
//The 2nd integer "total" is counting the total so we dont have to fill our memorry.

{
  if (n==1)
  {
    return n+total;
  }
  else
  {
    return sumtail(n-1, n+total);
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)

//This is the sum of n integers starting from 1.
//Im using two help integers to calculate the sum because i count up from 1.
//If you count down from n you can use a single teporerry integer.

{
  int t=1;
  int p=0;

  while (t<=n)
  {
    p=p+t;
    t++;
  }
  
  return p;
}
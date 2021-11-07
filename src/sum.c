#include "sum.h"
#include<assert.h>

int sum(int a[], int n){
assert(n>=0); //precondition

//recurtion
if (n==0)
  return n;
else
  return (a[n-1]+sum(a,n-1));
}
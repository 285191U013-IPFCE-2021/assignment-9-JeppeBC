#include "search.h"
#include <stdbool.h>
#include <assert.h>

bool search(int a[], int n, int x){
assert(n>=0); //precondition

//recurtion
  if(n==0)
    return false;
  else if(a[n-1]==x && n>0)
    return true;
  else
    return search(a,n-1,x);
}
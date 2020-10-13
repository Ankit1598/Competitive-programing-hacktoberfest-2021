//Link To The Problem
//https://www.codechef.com/APRIL19B/problems/MAXREM/

#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
void func();
int main() 
{
  func(); 
  return 0;
}
void func()
{
  long long int a[100001], n, i, flag;
  scanf("%lld", &n);
  for(i = 0; i < n; i++)
    scanf("%lld", &a[i]);
  qsort(a, n, sizeof(long long int), cmpfunc);
  flag = a[n - 1];
  i = n - 2;
  while(flag == a[n - 1] && i >= 0)
  {
    if(flag != a[i])
      flag = a[i];
    i--;
  }
  if(flag == a[n - 1])
    flag = 0;
  printf("%lld\n", flag);
}

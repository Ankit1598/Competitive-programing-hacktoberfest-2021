//Link To The Problem
//https://www.codechef.com/SEPT18B/problems/MAGICHF/

#include <stdio.h>
void func();
int main() 
{
  int a;
  scanf("%d", &a);
  while(a > 0)
  {
    func();
    a--;
  }
  return 0;
}
void func()
{
  long int n, s, x, a, b, arr[100000], i, j;
  scanf("%ld", &n);
  scanf("%ld", &x);
  scanf("%ld", &s);
  while(s > 0)
  {
    scanf("%ld", &a);
    scanf("%ld", &b);
    if(a == x)
    {
      x = b;
      s--;
    }
    else if( b == x)
    {
      x = a;
      s--;
    }
    else
      s--;
  }
  printf("%ld\n",x);
}

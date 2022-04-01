#include<stdio.h>
void input(int *n, int *r)
{
  printf("Enter a number n\n");
  scanf("%d",n);
  printf("Enter a number r\n");
  scanf("%d",r); 
}
int fact(int n)
{
  int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int ncr(int n, int r)
{
  int x;
  x=fact(n)/(fact(r)*fact(n-r));
  return x;
}
void output(int n, int r, int x)
{
   printf("Value of %dC%d = %d\n",n,r,x);
}
int main()
{
  int n,r,x;
  input(&n,&r);
  x=ncr(n,r);
  output(n,r,x);
  return 0;
}
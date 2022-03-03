#include<stdio.h>
void input(int *n)
{
  printf("Enter the number\n");
  scanf("%d",n);
}
int is_prime(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
{
  if(n%i==0)
  count++;
}
return count;
}
void output(int count)
{
  if(count==2)
  printf("it is prime");
  else
  printf("it is Composite");
}
int main()
{
  int n,count;
  input(&n);
  count=is_prime(n);
  output(count);
  return 0;
}


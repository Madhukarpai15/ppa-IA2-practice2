#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}

int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count+=1;
    }

  }
  return count;
}

void output(int n, int composite)
{
  if(composite==2)
  {
    printf("%d is not a composite number",n);
  }
  else
  {
    printf("%d is a composite number",n);
  }
}

int main()
{
  int num,composite;
  num=input();
  composite=is_composite(num);
  output(num,composite);
  return 0;
}
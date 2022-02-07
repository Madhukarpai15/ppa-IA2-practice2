#include<stdio.h>

int input_side()
{
  int a;
  printf("Enter the side of the triangle: ");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a, int b, int c)
{
  int r;
  if(a!=b && b!=c && c!=a)
  {
    r=1;
    return r;
  }
  else
  {
    r=0;
    return r;
  }
}

void output(int a, int b, int c, int isscalene)
{
  if (isscalene==1)
  {
    printf("The triangle with sides %d, %d, %d is scalene",a,b,c);
  }
  else
  {
    printf("The triangle with sides %d, %d, %d is not scalene",a,b,c);
  }
}

int main()
{
  int s1,s2,s3,isscalene;
  s1=input_side();
  s2=input_side();
  s3=input_side();
  isscalene=check_scalene(s1,s2,s3);
  output(s1,s2,s3,isscalene);
  return 0;
}

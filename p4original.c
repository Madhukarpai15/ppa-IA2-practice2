#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number of elements in the array: ");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n])
{
  int i=1;
  for(i=1;i<=n;i++)
  {
    printf("Enter the element: ");
    scanf("%d",&a[i]);
  }
}

int sum_composite_number(int n, int a[n])
{
  int i=1,result,count=0;
  int ele;
  for(i=1;i<=n;i++)
  {
    ele=a[i];
    for(i=1;i<=ele;i++)
    {
      if(ele%i==0)
      {
        count+=1;
      }
    }
    if(count>2)
    {
      result+=ele;
    }
  }
  
  return result;
}

void output(int result)
{
  printf("The sum of composite numbers is: %d",result);
}

int main()
{
  int n,a[n],sum;
  n=input();
  input_array(n,a);
  sum=sum_composite_number(n,a);
  output(sum);
  return 0;
}
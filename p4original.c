#include<stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the number of values to add\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  printf("Enter values to add\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0,i=0;
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}

void out_put(int n, int a[n], int sum)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%d + ",a[i]);
  }
  printf("%d is %d",a[i],sum);
}

int main()
{
  int n,sum; 
  n=input_array_size();
  int s[n];
  input_array(n,s);
  sum=sum_n_arrays(n,s);
  out_put(n,s,sum);
}

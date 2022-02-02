#include<stdio.h>
typedef struct _complex
{ 
  float real,imaginary;
}Complex;
int get_n()
{ 
  int n;
  printf("Enter number of values to add\n");
  scanf("%d",&n);
  return n;
}

void input_n_complex(int n,Complex c[n])
{ 
   for(int i=0;i<n;i++)
     {
        printf("enter the values\n");
        scanf("%f%f",&c[i].real,&c[i].imaginary);
     }
}
Complex add_n_complex(int n,Complex c[n])
{ 
  Complex a;
  a.real=0;a.imaginary=0;
  for(int i=0;i<n;i++)
   { 
     a.real+=c[i].real;
     a.imaginary+=c[i].imaginary;
   }
  return a;
}
void output(int n,Complex c[n],Complex result)
{
  int i;
    for(i=0;i<n-1;i++)
    {
      printf("%0.1f+%0.1fi +",c[i].real,c[i].imaginary);
    }
    printf(" %0.1f+%0.1fi",c[i].real,c[i].imaginary);
    printf(" is %0.1f+%0.1fi\n",result.real,result.imaginary);
}    
int main()
{
  Complex h[15];
  int x;
  x=get_n();
  input_n_complex(x,h);
  output(x,h,add_n_complex(x,h));
  return 0;
}

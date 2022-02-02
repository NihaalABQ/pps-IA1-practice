#include<stdio.h>//0
typedef struct _complex
{
  int real,imaginary;
}Complex;

Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary values respectively\n");
  scanf("%d %d",&c.real,&c.imaginary);
  return c;
}

Complex add(Complex a,Complex b)
{ 
    Complex c;
    c.real=a.real+b.real;
    c.imaginary=a.imaginary+b.imaginary;
    return c;
}

void output(Complex a,Complex b,Complex c)
{
  printf("%d+%di + %d+%di = %d+%di\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  struct _complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}

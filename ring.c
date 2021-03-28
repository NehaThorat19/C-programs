#include<stdio.h>
int main()
{
       float a,b,p,A;
       printf("Enter inner radius of ring :");
       scanf("%f",&b);
       printf("Enter outer radius of ring :");
       scanf("%f",&a);
       p=2*3.14*(a+b);
       A=3.14*((a*a)-(b*b));
       printf("Perimeter of ring :%f",p);
       printf("\nArea of ring :%f",A);
       return 0;
}

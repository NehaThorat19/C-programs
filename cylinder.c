#include<stdio.h>
int main()
{
       float r,h,A,V;
       printf("Enter the value of radius and height of cylinder :");
       scanf("%f%f",&r,&h);
       
       A=2*3.14*r*(r+h);
       V=3.14*r*r*h;
      
       printf("Surface area of cylinder is : %3f",A);
       printf("\nVolume of cylinder is %3f",V);
       return 0;
}

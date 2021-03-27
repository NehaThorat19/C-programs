#include <stdio.h>
int main()
{
int a;
printf("Enter amount \n");
scanf("%d",&a);
printf("Number of notes of 10 = %d\n",a/10);
a = a%10;
printf("Number of notes of 5  = %d\n",a/5);
printf("Number of notes of 1  = %d\n",a%5);
}

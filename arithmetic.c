#include<stdio.h>
int main()
{
       int a,b,Total,sub,multi,div,rem;
       float div1;

	printf("Enter the values of a and b :");
	scanf("%d%d",&a,&b);

        Total=a+b;
        sub=a-b;
        multi=a*b;
        div1=(float)a/b;
        rem=a%b;
        printf("Total :%d\n",Total);
        printf("Difference :%d\n",sub);
        printf("Multiplication :%d\n",multi);
        printf("Division :%f\n",div1);
        printf("Remainder :%d\n",rem);       
     return 0;
}		

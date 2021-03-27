#include<stdio.h>
int main()
{
       char ch;
       printf("Enter the character:");
       scanf("%c",&ch);
       printf("Previous character of %c is %c",ch,ch-1);
       printf("\nNext character of %c is %c",ch,ch+1);
       return 0;
}

#include <stdio.h>

int main()
{
int num1,num2,num3,max;
printf("Please enter the first number \n");
scanf("%d",&num1);
max = num1;
printf("Please enter the second number \n");
scanf("%d",&num2);
if (num2 > max) {
    max = num2;
}
printf("Please enter the third number \n");
scanf("%d",&num3);
if (num3 > max) {
    max = num3;
}
printf("The Biggest number is : %d",max);
return 0;
}

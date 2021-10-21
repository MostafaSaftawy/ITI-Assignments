#include <stdio.h>

int main()
{
int x1,x2;
printf("Please enter number 1 \n");
scanf("%d",&x1);
printf("Please enter number 2 \n");
scanf("%d",&x2);
printf(" a + b = %d \n a - b = %d \n a & b = %d \n a | b = %d \n a ^ b  = %d \n ",x1+x2,x1-x2,x1&x2,x1|x2,x1^x2);

    return 0;
}

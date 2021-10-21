#include <stdio.h>

int Get_Max(int num1,int num2,int num3, int num4){
int max = num1;
if(num2>num1){
    max=num2;
}
if(num3>num2){
   max=num3;
}
if(num4>num3){
   max=num4;
}
return max;
}

int Get_Min(int num1,int num2,int num3, int num4){
int min = num1;
if(num2<num1){
    min=num2;
}
if(num3<num2){
   min=num3;
}
if(num4<num3){
   min=num4;
}
return min;
}
int main()
{
    int x1,x2,x3,x4;
    printf("Please enter number 1 \n");
    scanf("%d",&x1);
    printf("Please enter number 2 \n");
    scanf("%d",&x2);
    printf("Please enter number 3 \n");
    scanf("%d",&x3);
    printf("Please enter number 4 \n");
    scanf("%d",&x4);

    printf("Max number is : %d \n Min number is %d",Get_Max(x1,x2,x3,x4),Get_Min(x1,x2,x3,x4));

    return 0;
}

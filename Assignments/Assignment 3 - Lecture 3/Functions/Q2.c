#include <stdio.h>
int add(int x1, int x2){
return x1+x2;
}
int sub(int x1, int x2){
return x1-x2;
}
int mul(int x1, int x2){
return x1*x2;
}
float div(int x1, int x2){
return (float)x1/x2;
}
char and(int x1, int x2){
return x1&x2;
}
char not(int x1){
return ~x1;
}
char or(int x1, int x2){
return x1|x2;
}
char xor(int x1, int x2){
return x1^x2;
}
char rem(int x1, int x2){
return x1%x2;
}
char inc(int x1){
return x1+1;
}
char dec(int x1){
return x1-1;
}

void calculator(void){
printf("Choose your options \n1 Add \t 2 subtract \t 3 multiply \t 4 division \n");
printf("5 And \t 6 Or \t 7 Not \t 8 Xor \n");
printf("9 Reminder \t 10 Increment \t 11 Decrement \n");
int ID=0;
scanf("%d",&ID);
int x1=0,x2=0;
if(ID==1){
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d + %d = %d",x1,x2,add(x1,x2));
}
else if(ID==2) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d - %d = %d",x1,x2,sub(x1,x2));
}
else if(ID==3) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d * %d = %d",x1,x2,mul(x1,x2));
}
else if(ID==4) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d / %d = %d",x1,x2,div(x1,x2));
}
else if(ID==5) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d & %d = %d",x1,x2,and(x1,x2));
}
else if(ID==6) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d | %d = %d",x1,x2,or(x1,x2));
}
else if(ID==7) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf(" ~ %d = %d",x1,not(x1));
}
else if(ID==8) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d ^ %d = %d",x1,x2,xor(x1,x2));
}
else if(ID==9) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("Please enter the Second operand \n");
    scanf("%d",&x2);
    printf("%d % %d = %d",x1,x2,rem(x1,x2));
}
else if(ID==10) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("%d + 1 = %d",x1,inc(x1));
}
else if(ID==11) {
    printf("Please enter the First operand \n");
    scanf("%d",&x1);
    printf("%d - 1 = %d",x1,dec(x1));
}
else {
    printf("You choosed wrong option \n");
}



}


int main()
{
  calculator();
    return 0;
}

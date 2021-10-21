#include <stdio.h>

int main()
{
int id1=1701433,id,pw1=1234,pw;
printf("Please enter your ID \n");
scanf("%d",&id);

if(id == id1){
printf("Please enter your PassWord \n");
scanf("%d",&pw);
    if (pw == pw1){
        printf("Welcome!");
    }
    else {
        printf("Wrong Passowrd!");
    }
}
else {
    printf("Wrong ID!");
}
    return 0;
}

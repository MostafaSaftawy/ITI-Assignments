#include <stdio.h>

int main()
{
    int id1=1234,id2=5678,id3=9870;
    int pw1=7788,pw2=5566,pw3=1122;
    int id,pw;

    printf("Enter your ID \n");
    scanf("%d",&id);
     int i=0;
    if ( id ==id1 | id==id2 | id==id3){

    do {
        printf("Enter your PassWord \n");
        scanf("%d",&pw);

        switch(pw){
        case 7788:
            printf("Welcome Ahmed! \n");
            break;
        case 5566:
            printf("Welcome Amr! \n");
            break;
        case 1122:
            printf("Welcome Wael! \n");
            break;
        default:
            printf("Wrong Password try agian \n");
            }
        i++;
    }
    while (3>i);

         }

    else {
         printf("You are not registered! \n");
    }
    return 0;
}

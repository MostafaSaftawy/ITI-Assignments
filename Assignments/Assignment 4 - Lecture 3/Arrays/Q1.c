#include <stdio.h>

void fillArray(int x[10]){
	for(int i=0; i<10; i++){
	printf("Please enter number %d : \n",i);
	scanf("%d",&x[i]);
}
}

void Find_Max_Min(int x[10]){
int min=x[0],max=x[0];
for(int i=0; i<10;i++){
    if(x[i]>max){
        max=x[i];
    }
    if(x[i]<min){
       min = x[i];
    }
}
printf("Minimum is %d and Maximum is %d",min,max);
}
int main()
{
    int arr[10];
    printf("Fill the array \n");
    fillArray(arr);
    Find_Max_Min(arr);


    return 0;
}

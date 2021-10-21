#include <stdio.h>

void fillArray(int arr[10]){
	for(int i=0; i<10; i++){
	printf("Please enter number %d : \n",i);
	scanf("%d",&arr[i]);
}
}
void printArray(int x[10]){
	for(int i=0; i<10; i++){
	printf ("%d \n",x[i]);
}
}
void Sorting(int arr[10]){
int temp;
fillArray(arr);
for(int i=0;i<=9;i++){
	for(int j=0; j<=9;j++){
        if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
	}
}
printArray(arr);
}


int main()
{
int arr[10];
Sorting(arr);
    return 0;
}

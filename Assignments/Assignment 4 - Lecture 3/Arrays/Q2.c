#include <stdio.h>

int Passed_Students=0,Failed_Students=0,Highest_grade=0,Lowest_grade=0,sum=0;
float Average_grades=0;

void fillArray(int x[10]){
	for(int i=0; i<10; i++){
	printf("Please enter Grade of student number %d : \n",i+1);
	scanf("%d",&x[i]);
}
}
void Count(int arr[10]){
for(int i=0;i<10;i++){
    if(arr[i]>Highest_grade){
        Highest_grade=arr[i];
    }
    if(arr[i]<Lowest_grade){
        Lowest_grade=arr[i];
    }
    if(arr[i]>=50){
        Passed_Students ++;
    }
    if(arr[i]<50){
        Failed_Students ++;
    }
    sum += arr[i];
}
Average_grades = (float) sum/30.0;
}
void Management_System(int arr1[10],int arr2[10],int arr3[10]){
Count(arr1);
Count(arr2);
Count(arr3);
printf("Number of passed students is %d \n",Passed_Students);
printf("Number of failed students is %d \n",Failed_Students);
printf("Highest grade is %d \n",Highest_grade);
printf("Lowest grade is %d \n",Lowest_grade);
printf("Average is %d \n",Average_grades);
}

int main()
{
int arr1[10],arr2[10],arr3[10];
printf("Please enter grades of first class \n");
fillArray(arr1);
printf("Please enter grades of second class \n");
fillArray(arr2);
printf("Please enter grades of third class \n");
fillArray(arr3);
Management_System(arr1,arr2,arr3);
    return 0;
}

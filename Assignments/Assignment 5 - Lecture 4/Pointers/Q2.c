#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z;
int *p,*q,*r;
p=&x;
q=&y;
r=&r;
printf("%d %d %d %d %d %d \n",x,y,z,*p,*q,*r);
printf("Swapping pointers \n");
r=p;
p=q;
q=r;
printf("%d %d %d %d %d %d",x,y,z,*p,*q,*r);


    return 0;
}

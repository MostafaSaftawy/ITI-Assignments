#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

u32 ListLength=0;

typedef struct node{
	u32 data;
	struct node* next;
}node_t;

void add_Node(node_t * head,u32 val){
	node_t * ptr = head;
	
	if(ListLength == 0){
		head->data=val;
		head->next=NULL;
		ListLength ++;
	}
	else {
		node_t * new = (node_t*)malloc(sizeof(node_t));
		
		new->data=val;
		new->next=NULL;
		while(ptr->next != NULL){
			ptr = ptr-> next;
		}
		ptr->next = new;
	}
	printf("Node has been added \n");
}
void deleteNode(node_t * head,u32 val)
{
	node_t * ptr;

    if ( head->data == val) {
		ptr = head;
		head = head-> next;
		free(ptr); 
    }
	else {
		node_t * current = head;
		while( current -> next != NULL ) {
			if(current->next->data == val){
				ptr = current-> next;
				current->next=current->next->next;
				free(ptr);
				break;
			}
			else {
				current = current -> next;
			}
		}
	}
}

void printList(node_t * head){

    node_t *temp = head;
	
    while(temp != NULL){
        if(temp->next == NULL){
            printf("%d", temp->data);
        }
        else{
            printf("%d, ", temp->data);
        }
        temp = temp->next;
}
}
int main()
{
node_t* head = (node_t*)malloc(sizeof(node_t));

u32 menu;
u32 exit;
u32 val;
while(  exit != 3){
printf("To add a node enter 0 \n");
printf("To print the linked list enter 1 \n");
printf("To delete the list enter 2\n");
printf("To exit enter 3\n");
scanf("%d",&menu);
if(menu==0){
printf("Please enter the number to add in the list \n ");
scanf("%d",&val);
add_Node(head,val);
}
else if (menu == 1){
	printf("Node in linked lis is \t ");
	printList(head);
	printf("\n");

}
else if (menu ==2) {
	printf("Node has been deleted \n");
	deleteNode(head,30);
	printf("Node in linked lis is \t ");
	printList(head);
	printf("\n");
}
else {
	printf("Thank you for using the program \n");
	exit =3;
}
}


    return 0;
}


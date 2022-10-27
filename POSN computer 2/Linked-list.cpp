#include<stdio.h>
#include<stdlib.h>

struct Node{
	int value;
	struct Node*next;
};typedef struct Node ListNode;

ListNode *tail,*head;
int amount=0;

void insertHead(int v){
	ListNode *pt;
	if(head==NULL){
		head=(ListNode*)malloc(sizeof(ListNode));
		head->value=v;
		head->next=NULL;
		tail=head;
		amount++;
	}
	else{
		pt=(ListNode*)malloc(sizeof(ListNode));
		pt->value=v;
		pt->next=head;
		head=pt;
		amount++;
	}
}
void printList(ListNode*head) 
{ 
  while (head != NULL) 
  { 
     printf(" %d \n", head->value); 
     head = head->next; 
  } 
}
main(){
	printf("List 1:\n");
	insertHead(1);
	insertHead(5);
	insertHead(2);
	printList(head);
	printf("Amount = %d\n",amount);
}

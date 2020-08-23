#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
}*head;
int  linkedlistTraversal(struct Node*head);
int main()
{
  
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eighth;
    struct Node *nineth;
    struct Node *tenth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));
    eighth = (struct Node *)malloc(sizeof(struct Node));
    nineth = (struct Node *)malloc(sizeof(struct Node));
    tenth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 9;
    head->next = second;

    
    second->data = 0;
    second->next = third;

    
    third->data = 4;
    third->next = fourth;

    
    fourth->data = 5;
    fourth->next = fifth;
    
    fifth->data =6;
    fifth->next=sixth;
    
    sixth->data =7;
    sixth->next =seventh;
    
    
    seventh->data =0;
    seventh->next=eighth;
    
    
    eighth->data =0;
    eighth->next=nineth;
    
    
    nineth->data =6;
    nineth->next=tenth;
    
    
    tenth->data =4;
    tenth->next=head;

    linkedlistTraversal(head);	
}
int  linkedlistTraversal(struct Node*head)
{
	struct Node*ptr=head;
	do{
		printf("element is %d\n",ptr->data);
		ptr=ptr->next;
	}
	while(ptr!=head);
}

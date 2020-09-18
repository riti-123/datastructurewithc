#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node * prev;
    struct Node * next;
}*head, *last;

void displayList();


int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    
     head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    
    
    head->data = 7;
    head->next = second;
    head->prev= NULL;

    
    second->data = 11;
    second->next = third;
    second->prev= head;

    
    third->data = 41;
    third->next = fourth;
    third->prev = second;

    
    fourth->data = 66;
    fourth->next = fifth;
    fourth->prev = third;
    
    fifth->data =98;
    fifth->next=sixth;
    fifth->prev =fourth;
    
    sixth->data =118;
    sixth->next =NULL;
    sixth->prev =fifth;
    
    displayList();
}



void displayList()
{
    struct Node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;

            /* Move the current pointer to next node */
            temp = temp->next;
        }
    }
}


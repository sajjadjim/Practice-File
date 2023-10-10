#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next ;
};
typedef struct node node ;
node *head;

void create_node(int n)
{
     node *newnode, *temp;
    int i;
    head= (node*)malloc(sizeof(node));
    printf("\n Enter data for Node 1: ");
    scanf("%d", &head->data);
    head->next=NULL;
    temp=head;
    for(i=2; i<=n; i++)
    {
        newnode=  (node*)malloc(sizeof(node));
        printf("\n Enter data for Node %d: ",i);
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}

void display()
{
    node *temp;
 temp = head;
 printf("\n\n Linklist Display :\n");
 while(temp != NULL)
 {
    printf("%d->> ",temp->data);
    temp = temp->next;
 }
}
int main()
{
    int n;
    printf("Enter the number of list list node number :");
    scanf("%d",&n);
    create_node(n);
    display();
}

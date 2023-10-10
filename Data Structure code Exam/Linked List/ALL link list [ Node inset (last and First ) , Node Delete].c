#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head;
void createnode(int n);
void display();
//Insert Function Prototype
void insert_beg();
void insert_end();
void insert_middle();
//Delete Function Prototype
void delete_first();
void delete_middle();
void delete_last();

void createnode(int n)
{
    node *newnode, *temp;
    int i;
    head= (node*)malloc(sizeof(node));
    head->next=NULL;
    printf("\n Enter data for Node 1: ");
    scanf("%d", &head->data);
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
void countnodes(){
int count=0;
node*temp=NULL;
temp=head;
while(temp!=NULL){
    count++;
    temp=temp->next;
}
printf("%d",count);
}


void display()
{
    node *temp;
    temp=head;
    printf("\n You have Successfully created the following linkedlist : \n");
    while(temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp=temp->next;
    }

}

int main()
{
    int n;
    printf("\n Enter total number of node: ");
    scanf("%d",&n);
    createnode(n);
    display();

    countnodes();

    return 0;
}


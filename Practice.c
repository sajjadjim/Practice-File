#include<stdio.h>
#include<stdlib.h>
struct node{
    int id;
    double cgpa;
    struct node *next;
}*head;
typedef struct node node;
void createNode(int n);
void diaplayNode();

void createNode(int n)
{
    head =(node*)malloc(sizeof(node));
    printf("Enter (id & CGPA) node 1 :");
    scanf("%d %lf",&head->id ,&head->cgpa);
    head->next = NULL;

    node *newnode , *temp;
    temp = head;
    for(int i=2 ;i<=n ; i++)
    {
     newnode =(node*)malloc(sizeof(node));
     printf("Enter (id & CGPA) node %d :",i);
     scanf("%d %lf",&newnode->id ,& newnode->cgpa);

     newnode->next = NULL;
     temp->next = newnode;
     temp=temp->next;
    }
}

void displayNode()
{
 int j=1;
 node *value = head;
 while(value != NULL)
 {
    printf("Node %d Data :%d  %.2lf",j,value->id,value->cgpa);
    printf("\n");
    value= value->next;
    j++;
 }
}

int main()
{
    int n;
    printf("Enter number of nodes =");
    scanf("%d",&n);

    createNode(n);
    displayNode();
    return 0;
}

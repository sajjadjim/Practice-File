#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head;
typedef struct node Nodal;

void createNode(int n);
void displayList();

int main()
{
  int n;
  printf("Enter the number of nodes =");
  scanf("%d",&n);

  createNode(n);
  displayList();

}

void createNode(int n)
{   Nodal *head;
    head = (Nodal*)malloc(sizeof(Nodal));
    printf("Enter data node 1=");
    scanf("%d",&head->data);
    head->next = NULL;

    Nodal *newNode, *temp;
    for(int i=2; i<=n ;i++)
    {
        newNode=(Nodal*)malloc(sizeof(Nodal));

        printf("Enter %d node data=",i);
        scanf("%d",&newNode->data);

        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}
void displayList()
{
    Nodal *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


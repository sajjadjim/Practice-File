#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} * head;

typedef struct node nodal;

void createnode(int n);
void displayList();
void addnewNode();

int main()
{
    int n;
    printf("Enter total number of nodes ->");
    scanf("%d", &n);

    createnode(n);
    printf("\nLinked list created successfully!\n");

    displayList();

    addnewNode();

    printf("\nUpdated linked list after adding a new node:\n");
    displayList();

    return 0;
}

void createnode(int n)
{
    head = (nodal*)malloc(sizeof(nodal));

    printf("Enter data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    int i;
    nodal* newnode, * temp;
    temp = head;

    for (i = 2; i <= n; i++)
    {
        newnode = (nodal*)malloc(sizeof(nodal));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);

        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}

void addnewNode()
{
    nodal *newnode;
    newnode = (nodal*)malloc(sizeof(nodal));

    printf("\nEnter data for the new node First: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;


}

void displayList()
{
    int i = 1;
    nodal* current = head;
    while (current != NULL)
    {
        printf("Node %d data: %d\n", i, current->data);
        current = current->next;
        i++;
    }
}


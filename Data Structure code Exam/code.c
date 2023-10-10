#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*head,*temp;
typedef struct node node ;

void createlist(int n)
{
    struct node *newnode;
    head = (node*) malloc(sizeof(node));
    printf("Enter the value of the first node: ");
    scanf("%d",&head->data);
    head->next = NULL;
    
    temp = head;
    for(int i =1 ; i <n ; i++)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of node-%d: ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
}

void display()
{
    int count = 0;
    struct node *temp;
    temp=head;
    printf("Display list : \n");
    while(temp!=NULL)
    {
        count++;
        printf("Value-%d = %d\n",count,temp->data);
        temp=temp->next;
    }

}

int linearSearch(struct node *head, int item)
{
    struct node *current = head;
    int index = 0;
    while (current != NULL)
    {
        if (current->data == item)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}


void InsertBegin()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new(first) node : ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;

}

void InsertEnd()
{
    struct node *newnode, *temp;
    temp=head;

    while(temp->next != NULL)
    {
        temp = temp->next;

    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new(last) node : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    temp->next = newnode;

}

void InsertMid(int pos)
{
    struct node *newnode, *temp;
    temp = head;
    for(int i = 1 ; i < pos-1 ; i++)
    {
        temp = temp->next;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of position-%d : ",pos);
    scanf("%d",&newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;

}

void DeleteFromBeg()
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

void DeleteFromEnd()
{
    struct node *temp,*del;
    temp=head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    del = temp->next;
    temp->next = NULL;
    free(del);


}

void DeleteByPosition(int pos)
{
    struct node *temp,*prev;
    temp = head;
    for(int i = 1 ; i < pos ; i++)
    {
        prev = temp;
        temp = temp->next;

    }
    prev->next = temp->next;
    free(temp);


}

void DeleteByValue(int value)
{
    struct node *temp, *prev;
    temp = head;
    if(head->data == value)
    {
        head = temp->next;
        free(temp);
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->data == value)
            {
                prev->next = temp->next;
                free(temp);
                break;
            }
            else
            {
                prev = temp;
                temp = temp->next;

            }

        }
    }
}


int main()
{

    int n,pos,delPos,delValue;
    printf("Enter the number of elements of the list: ");
    scanf("%d",&n);
    createlist(n);
    display();


    int item;
    printf("Enter the value you want to find: ");
    scanf("%d",&item);

    int index = linearSearch(head,item);

    if (index == -1)
        printf ("Item not found");
    else
        printf ("Item found at position: %d\n", index + 1);



    InsertBegin();
    display();
    InsertEnd();
    display();

    printf("Enter what position you want to add your data : ");
    scanf("%d",&pos);
    InsertMid(pos);
    display();
    DeleteFromBeg();
    display();
    DeleteFromEnd();
    display();
    printf("Enter what position you want to delete your data : ");
    scanf("%d",&delPos);
    DeleteByPosition(delPos);
    display();

    printf("Enter the value you want to delete: ");
    scanf("%d",&delValue);
    DeleteByValue(delValue);
    display();

 return 0;
}
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *next;
}*head;
typedef struct node node ;

void createNode(int n)
{
head =(node*)malloc (sizeof(node));
cout <<"Enter data node 1 :";
cin >> head->data;

head ->next =NULL;

node *newnode , *temp;
temp = head;
for(int i=2 ; i<=n ;i++)
{
    newnode =(node*)malloc(sizeof(node));

    cout <<"Enter data node "<< i <<" :";
    cin >> newnode->data;
    newnode->next =NULL;
    temp->next =newnode;
    temp = temp->next;
}

}
void display()
{
    node *value = head; int i=1;
    while(value != NULL)
    {
        cout << "Value of node "<< i <<" data :"<<value->data <<endl;
        value =value->next;
        i++;

    }
}

int main()
{
    int n;
    cout<< "Enter number of node :";
    cin>> n;
    createNode(n);
    cout <<endl;
    display();
    return 0;
}

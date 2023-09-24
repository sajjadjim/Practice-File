#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    struct node *next;
}*head;

typedef struct node Nodal;

void createNode(int n);
void displayNode();

int main()
{

    int n;
    cout <<"Enter number of nodes =";
    cin >> n;

    createNode(n);
    return 0;
}
void createNode(int n)
{
head = (Nodal*)malloc(sizeof(Nodal));
  cout<<"Enter value node 1=";
  cin << head->data;
}

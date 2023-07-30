#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

}*a,*b,*c;  //*a,*b,*c;
typedef struct Node Nodal;
int main()
{
   //struct Node *a, *b, *c;  //Nodal *a,*b,*c;
   a =(Nodal*)malloc(sizeof(Nodal));
   b =(Nodal*)malloc(sizeof(Nodal));
   c =(Nodal*)malloc(sizeof(Nodal));

   a->data = 10;
   b->data = 20;
   c->data = 30;

   a->next =b;
   b->next =c;
   c->next =NULL;

       while(a !=NULL)
    {
        printf("%d \n",a->data);
        a = a->next;  // Increase the value and change replacement the value
    }
   return 0;
}


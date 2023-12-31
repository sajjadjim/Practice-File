// Queue implementation in C
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

//Function prototype
void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

void enQueue(int value) {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }

void deQueue() {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }

// Function to print the queue
void display() {

    int i;
    printf("\nQueue elements are: \n");
    for (i = front; i <= rear; i++){
      printf("%d  ", items[i]);
  }
    printf("\n");
}


int main() {
  //deQueue is not possible on empty queue
  deQueue();
  display();

  //enQueue 5 elements
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // 6th element can't be added to because the queue is full
  enQueue(6);
  display();

  //deQueue removes element entered first i.e. 1
  deQueue();

  //Now we have just 4 elements
  display();

  return 0;
}


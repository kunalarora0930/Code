#include <iostream>
using namespace std;

class node{

    public:
    int data;
    
    node* next;
};
int length(Node *head)
{


    if (head == NULL)
        return 0;
    return 1 + length(head->next);
  
}
int length(Node *head)
{


    if (head == NULL)
        return 0;
    return 1 + length(head->next);
  cout<<"Length matters"<<endl;
}


class queue{
    node* front;
    node* rear;

    public:
    queue() {
        this->front = NULL;
        this->rear = NULL;
    }

    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    int peek();
};


void queue::enqueue(int x) {
    if(front == NULL && rear == NULL) {
        node* temp = new node();
        temp->data = x;
        temp->next = NULL;
        front = temp;
        rear = temp;
        return;
    }

    node* temp = new node;
    temp->data = x;
    
    temp->next = NULL;
    
    rear->next = temp;
    rear = temp;

}
int length(Node *head) {
    // Write your code here

    if (head == NULL)
        return 0;
    return 1 + length(head->next);
  
}
//QUEUE di pahan di

int queue::dequeue()
{
    if(front == rear)
    
    {
        int d = front->data;
        delete rear;
        front = NULL;
        rear = NULL;
        return d;
    }

    node* temp = front;
    int d = front->data;
    front = front->next;
    delete temp;
    return d;
}

bool queue::isEmpty()
{
    return (front==NULL && rear==NULL);
}

int queue::peek()
{
    if (front) return front->data;
}

int main() {

}

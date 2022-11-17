    //Circular Queue

#include<iostream>
#define Q_SIZE 5
using namespace std;

typedef struct{

     int data[Q_SIZE + 1];
     int head,tail;
} Queue;

void enqueue(Queue *q,int item)
{
    if((q->tail+1)%(Q_SIZE+1) ==q->head){
        cout<<"Queue is full...!!!"<<endl;
        return ;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Q_SIZE+1);
}

int dequeue(Queue *q)
{
    int item;
    if(q->tail==q->head){
        cout<<"Queue is empty.....!!!"<<endl;
        return -1;
    }
    item =q->data[q->head];

    q->head=(q->head+1)%(Q_SIZE+1);
    return item;
}

int main()
{
    Queue Q;
    int item;
    Q.head=0;
    Q.tail=0;

    cout<<"*******ENQUEUE*******"<<endl;

    enqueue(&Q,1);
    cout<<Q.tail<<endl;
    
    enqueue(&Q,2);
    cout<<Q.tail<<endl;

    enqueue(&Q,3);
    cout<<Q.tail<<endl;

    enqueue(&Q,4);
    cout<<Q.tail<<endl;
    enqueue(&Q,5);
    cout<<Q.tail<<endl;

    enqueue(&Q,6);      //Queue is full...
    cout<<Q.tail<<endl;  

//Dequeue
    cout<<"********DEQUEUE*********"<<endl;
    cout<<endl;

    cout<<Q.head<<endl;
    
    item=dequeue(&Q);
    cout<<Q.head<<endl;

    enqueue(&Q,6);     
    cout<<"TAIL is :"<<Q.tail<<endl;
    cout<<"HEAD is :"<<Q.head<<endl;
    
    item=dequeue(&Q);
    cout<<Q.head<<endl;
    
    item=dequeue(&Q);
    cout<<Q.head<<endl;
    
    item=dequeue(&Q);
    cout<<Q.head<<endl;
    
    item=dequeue(&Q);
    cout<<Q.head<<endl;
    
    
    
    

}
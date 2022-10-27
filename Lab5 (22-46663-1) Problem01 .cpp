#include<iostream>
using namespace std;
int stack[100],choice,n=3,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{

    top=-1;
    cout<<"What you want to do"<<endl;
    cout<<"1.Push element in the stack\n2.Pop element from the stack \n3.Display the stack\n"<<endl;
    do
    {
        cout<<"Enter option"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<" Exit ";
                break;
            }
            default:
            {
                cout<<" Please Enter a Valid Choice(1/2/3)";
            }

        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        cout<<"Stack is over flow"<<endl;

    }
    else
    {
        cout<<"Enter a value to be pushed:"<<endl;
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<" Stack is under flow"<<endl;
    }
    else
    {
        cout<<"The popped elements is "<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"The elements in stack :";
        for(i=top; i>=0; i--)
            cout<<" "<<stack[i];
            cout<<endl;
        cout<<"Next option"<<endl;
    }
    else
    {
        cout<<"The stack is empty"<<endl;
    }

}
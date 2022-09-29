#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the size of first array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>x;
    int b[x];
    
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    int i,j;
    bool temp=false;
    cout<<"The uncommon elements: "<<endl;
    for( i=0;i<n;i++)
    {
        for( j=0;j<x;j++)
        {
            if(a[i]==b[j])
            {
                temp=true;
                break;
            }
            else if(a[i]!=b[j])
            {
                temp=false;
                continue;
            }
        }
       if(temp==false)
        {
            cout<<a[i]<<" ";
        }
   }

       for( i=0;i<x;i++)
        {
        for( j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                temp=true;
                break;
            }
            else if(b[i]!=a[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<b[i]<<" ";
        }
   }
 }
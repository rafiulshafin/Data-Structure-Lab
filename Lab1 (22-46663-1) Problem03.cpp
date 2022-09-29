#include<iostream>
using namespace std;
void oddNumbers(int x,int y)
{
     int range;
    cout<<"Enter array range:"<<endl;
    cin>>range;
    int array[range];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<range ;i++)
    {
        cin>>array[i];
    }


    cout<<"Odd numbers between the range are:"<<endl;
    for(int i=0;i<range;i++)
    {

        for(int j=x;j<=y;j++)
        {
        if(j%2!=0&& array[i]==j)
        cout<<j<<" ";
        }
    }
}
int main()
{
    int start,end;
    cout<<"Enter starting and ending range:"<<endl;
    cin>>start>>end;
    oddNumbers(start,end);
}
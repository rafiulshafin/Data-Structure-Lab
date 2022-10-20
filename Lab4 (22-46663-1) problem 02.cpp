#include<iostream>
using namespace std;

int linear_search(int a[],int n, int x){
    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter array range:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int x;
    cout<<"Enter element that you search:"<<endl;
    cin>>x;
    cout<<linear_search(a,n,x);

}
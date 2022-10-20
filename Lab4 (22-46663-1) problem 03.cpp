#include<iostream>
using namespace std;

int binary_search(int a[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n;
    while(left<=right){
        mid=(right+left)/2;
        if(a[mid]==x){
            return mid;
        }
       
        else if(a[mid]>x)
        {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter array range:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x;
    cout<<"Enter element that you search:";
    cin>>x;
    
    cout<<"The element is in index : "<<binary_search(a,n,x)<<endl;

return 0;




}
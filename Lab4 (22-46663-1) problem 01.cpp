#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{

    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}


int main()
{
   int a[]={7,8,9,1};
   
   bubble_sort(a,4); 
   cout<<"Sorted array :"<<endl;
      
   for(int i=0;i<4;i++)
   {
    cout<<" "<<a[i];
   }


}
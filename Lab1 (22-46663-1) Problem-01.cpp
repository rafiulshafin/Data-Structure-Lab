#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int arr[13], num, temp, i, j;  
cout<<"Enter the range:"<<endl;
    cin >> num;  
      
  
    for (i = 0; i < num; i++)  
    {  
        cin >> arr[i];  
    }  
    cout<<"Output 1:"<<endl;
    for(i=0;i<num;i++)
    {
        
        cout<<arr[i]<<" ";
    }
      
      
    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    cout<<"\n";
cout<<"Output 2:"<<endl;

    for ( i = 0; i < num; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}  
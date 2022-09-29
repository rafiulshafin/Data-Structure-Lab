#include<iostream>
using namespace std;
int main(){
      
      
      
      int array1[] = {1, 2, 5, 5, 8, 9, 7, 10};
      int array2[] = {1, 0, 6, 15, 6, 4, 7, 0};
for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j <8; j++)
            {
                if(array1[i] == (array2[j]))
                {
                 
                cout<<"Common element is : "<<array1[i]<<" "<<endl;
                 }
            }
        }
}
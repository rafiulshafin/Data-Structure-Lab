#include<iostream>
using namespace std;

  
int main() {  
  int array1[]={23,13,7,78,60};  
  int array2[]={56,1,100,89,97,299};  
  int array3[11];  
  int i, j, temp;  
  
cout<<"Array 1 is : \n";
  for( i=0, j=0; i<5; i++, j++ ) {  
        cout<< array1[i]<<" ";
    array3[j] = array1[i];  
  }  
        cout<<endl;
  
    cout<<"Array 2 is : \n";
  for( i=0; i<6; i++, j++ ) {  
        cout<< array2[i]<<" ";
    array3[j] = array2[i];  
  }  
    cout<<endl;
  
  for( i=0; i<11; i++ ) {  
    for( j=0; j<11; j++ ) {  
      if( array3[i] > array3[j] ) {  
        temp = array3[i];  
        array3[i] = array3[j];  
        array3[j] = temp;  
      }  
    }  
  }  
	  
    cout<<"Array after merging & sorting is : \n";
  for( i=0; i<11; i++ ) {  
      cout<< array3[i]<<" ";
  }  
    cout<<endl;
	  
  return 0;  
}  
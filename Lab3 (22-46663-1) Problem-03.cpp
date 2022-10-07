#include<iostream>
#include<string.h>
using namespace std;

struct employee{
        int id;
        int salary;
        int year;
        string department;

};

int main()
{
    int x = 10;
    struct employee record[10];
    for(int i = 0; i<10; i++){
        cout<<"Give "<<i+1<<" employee Information : "<<endl;
        
        cout<<"Enter ID :";
        cin>>record[i].id;
       
        cout<<"Enter Department :";
        cin>>record[i].department;
        
        cout<<"Enter Salary :";
        cin>>record[i].salary;
       
        cout<<"Enter Year :";
        cin>>record[i].year;
        cout<<endl;
    }


    for(int i = 0; i<10; i++){
        if(record[i].year < 2009 && record[i].salary > 20000){
            cout << record[i].id<<" "<<endl;


        }

    }
}
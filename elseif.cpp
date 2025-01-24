#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks";
    cin>>marks;

    if( marks>90 && marks<=100){
        cout<<"The grade is A\n"<<marks;
    }else if( marks>80 && marks<=90){
        cout<<"The grade is B\n"<<marks;
    }else if( marks>50 && marks<=80){
        cout<<"The grade is C\n"<<marks;
    }else{
        cout<<"Its a D grade\n"<<marks;
    }

    return 0;
}
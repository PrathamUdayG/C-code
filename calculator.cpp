#include <iostream>
using namespace std;
int main(){
    
    int a , b ;
    cout<<"Enter number a:";
    cin>>a;

    cout<<"Enter number b:";
    cin>>b;

    int sum = a+b;
    cout<<"Sum of 2 numbers a+b ia :"<<sum<<endl;
    int product = a*b;
    cout<<"Product of 2 numbers a*b ia :"<<product<<endl;
    int quotient = a/b;
    cout<<"Quotient of 2 numbers a/b ia :"<<quotient<<endl;
    int remainder = a%b;
    cout<<"Remainder of 2 numbers a%b ia :"<<remainder<<endl;

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    //for sum
    int a , b;
    cout<<"a =";
    cin>>a;

    cout<<"b =";
    cin>>b;

    int sum = a+b;
    cout<<"a+b ="<<sum<<endl;

    //for product 
    int c,d;
    cout<<"c=";
    cin>>c;

    cout<<"d=";
    cin>>d;
    int product = c*d;
    cout<<"Product of two numbers are:"<<product<<endl;

    //for remainder 
    int e,f;
    cout<<"e=";
    cin>>e;

    cout<<"f=";
    cin>>f;
    int remainder = e%f;
    cout<<"Remainder  of two numbers are:"<<remainder<<endl;

    //for quotient
    int g,h;
    cout<<"g=";
    cin>>g;

    cout<<"h=";
    cin>>h;
    int quotient = g/h;
    cout<<"Quotient  of two numbers are:"<<quotient<<endl;
    return 0;
}
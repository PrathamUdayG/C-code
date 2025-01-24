#include <iostream>
using namespace std;
int main(){

    int a;
    int i = 1;
    cout<<"Enter the number=";
    cin>>a;

    do{
        cout<<i<<" ";
        i++;
    }while(i<=a);
    cout<<endl;
    return 0;

}
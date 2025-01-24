#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the char: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Lower case\n";
    }else{
        cout<<"Uppercase\n";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int n;
    bool isPrime = true;

    cout<<"Enter the number:";
    cin>>n;
    for(int i=2;i*i<=n;i++){//to check from n to root n instead of this: for(int i=2;i<=n-1;i++)
        if(n%2==0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout<<"Prime number\n";
    }else{
        cout<<"Non-prime number\n";
    }
    return 0;
}
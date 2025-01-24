#include<iostream>
using namespace std;
int main(){

    int a;
    int sum =0;
    cout<<"Enter the number:";
    cin>>a;

    for(int i=1;i<=a;i++){
        sum += i;
        if(i==5){//in order to break the loop as per our desired number 
            break;
        }
    }
    cout<<"Sum of the numbers:"<<sum<<endl;
    return 0;
}
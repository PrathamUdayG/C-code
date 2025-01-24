#include <iostream>
using namespace std;
int main(){

    int a;
    int oddSum = 0;
    cout<<"Enter the number:";
    cin>>a;

    for(int i=1;i<=a;i++){
        if(i%2!=0){
            oddSum = oddSum+i;
        }
    }
    cout<<"oddSum = "<<oddSum<<endl;
    return 0;

}
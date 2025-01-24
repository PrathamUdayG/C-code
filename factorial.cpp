#include <iostream>
using namespace std;
int main(){
    int a;
    int result;
    cout<<"Enter the number";
    cin>>a;
    for(int i =1;i<=a;i++){
        i=i*(i+1);
        result = i;

    }
    cout<<"Factorial is:"<<result<<endl;
    return 0;
}
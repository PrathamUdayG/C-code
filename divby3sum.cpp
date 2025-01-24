#include <iostream>
using namespace std;
int main(){
    int a;
    int threeSum = 0;
    cout<<"Enter the number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%3==0){
            threeSum = threeSum + i;

            }
    }
    cout<<"Sum of numbers divisible by three are: "<<threeSum<<endl;
    return 0;
}
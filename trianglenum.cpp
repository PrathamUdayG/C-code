#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number:";
    cin>>n;
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<" "<<i+1;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the number:";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<" * "<<endl;
        }
        cout<<endl;
    }

        return 0;
}
#include <iostream>
using namespace std;
int main(){
    cout<<(3<5)<<endl;
    cout<<(3>5)<<endl;
    cout<<(3<=5)<<endl;
    cout<<(3>=5)<<endl;
    cout<<(3==5)<<endl;
    cout<<(3==3)<<endl;
    cout<<(3!=3)<<endl;
    cout<<!(3<1)<<endl;//Logical "NOT" actually the o/p must be true ,but bcoz of the ! symobol the o/p have been changed.
    cout<<((3<5)||(3>5))<<endl;//Logical "OR" --> Applicable for conditional statements.
    cout<<((3<5)&&(3>1))<<endl;//Logical "AND".
    return 0;
}
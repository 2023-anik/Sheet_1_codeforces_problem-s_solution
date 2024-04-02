#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    if(n==static_cast<int>(n))
        cout<<"int "<<static_cast<int>(n)<<endl;
    else
        cout<<"float "<<static_cast<int>(n)<<' '<<n-static_cast<int>(n)<<endl;
    return 0;
}

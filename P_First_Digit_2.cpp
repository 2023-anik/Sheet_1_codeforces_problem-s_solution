#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=static_cast<int>(s[0]);
    if(n%2==0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;
    return 0;
}

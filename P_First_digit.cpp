#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last_digit;
    while(n!=0){
        last_digit=n%10;
        n/=10;
    }
    if(last_digit%2==0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;
    return 0;
}
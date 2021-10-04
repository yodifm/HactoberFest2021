#include<iostream>
using namespace std;

int binary_exp(int a, int b){
    int i = 1;
    while(b>0){
        if (b % 2 != 0){
            i = (i*a);
        }
        a = (a*a);
        b = (b/2);
    }
    return i;
}
int main(){
    int a,b;
    cout<<"Format: a power b"<<endl;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"Enter value of b "<<endl;
    cin>>b;
    cout<<a<<" power "<<b<<": "<<binary_exp(a,b)<<endl;
    return 0;
}
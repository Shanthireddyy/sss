#include<iostream>
using namespace std;
int fibo(int n){
    cout<<"Step:  "<<n<<endl;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    int a=fibo(n);
    cout<<a<<endl;
}
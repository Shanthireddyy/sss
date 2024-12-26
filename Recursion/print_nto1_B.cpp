#include<iostream>
using namespace std;
void f(int a,int c){
    if(a>c){
        return ;
    }
    f(a+1,c);
    cout<<a<<endl;


}

int main(){
    int n;
    cin>>n;
    f(1,n);
}
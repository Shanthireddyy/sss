#include<iostream>
using namespace std;
void f(int a,int c){
    if(a>c){
        return ;
    }
    cout<<a<<endl;
    f(++a,c);


}

int main(){
    int n;
    cin>>n;
    f(1,n);
}
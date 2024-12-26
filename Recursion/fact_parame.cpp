#include<iostream>
using namespace std;
void f(int c,int p){
    if(c<=0){
        cout<<p<<endl;
        return ;
    }
    p=p*(c);
    
    f(c-1,p);


}

int main(){
    int n;
    cin>>n;
    f(n,1);
}
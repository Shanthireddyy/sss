#include<iostream>
using namespace std;
void f(int c,int sum){
    if(c<1){
        cout<<sum<<endl;
        return ;
    }
    // cout<<sum+a<<endl;
    f(c-1,sum+c);


}

int main(){
    int n;
    cin>>n;
    f(n,0);
}
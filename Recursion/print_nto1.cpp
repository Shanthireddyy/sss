#include<iostream>
using namespace std;
void f(int c){
    if(c<=0){
        return ;
    }
    cout<<c<<endl;
    f(c-1);


}

int main(){
    int n;
    cin>>n;
    f(n);
}
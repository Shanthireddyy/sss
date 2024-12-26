#include<iostream>
using namespace std;
int f(int c){
    if(c<=0){
        return 0;
    }
    
    return c+f(c-1);


}

int main(){
    int n;
    cin>>n;
    int a=f(n);
    cout<<a<<endl;
}
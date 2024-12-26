#include<iostream>
using namespace std;
void prob(int n,string str[]){
    if(n==0){
        return ;
    }
    int d=n%10;
    n=n/10;

    prob(n,str);
    cout<<str[d]<<" ";

}



int main(){
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    prob(n,str);
}
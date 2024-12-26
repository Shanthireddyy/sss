#include<iostream>
using namespace std;
void f(int a,int c,string str){
    if(a>=c/2){
        cout<<"True"<<endl;
        return ;
    }
    if(str[a]!=str[c-a-1]){
        cout<<"False"<<endl;
        return ;
    }
    f(a+1,c,str);


}

int main(){
    string str;
    cin>>str;

    f(0,str.size(),str);
}
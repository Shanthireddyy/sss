#include<iostream>
using namespace std;

int main(){
    int a=24;
    int count=0;
    for(int j=1;j<=a;j++){
        if(a%j==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
}
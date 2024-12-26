#include<iostream>
using namespace std;
int getpower(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int temp=getpower(a,b/2);
    if(b%2==0){
        return temp*temp;
    }
    else{
        return a*temp*temp;
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int c=getpower(a,b);
    cout<<c<<endl;
}
#include<iostream>
using namespace std;
void f(int c){
    if(c<=0){
        return ;
    }
    cout<<"reddy"<<endl;
    f(c-1);


}

int main(){
    int count=5;
    f(count);
}
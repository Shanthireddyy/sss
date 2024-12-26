#include<iostream>
using namespace std;
int count=1;
void print(int a){
      if(count>a){
        return;
      }
      cout<<count<<endl;
      count++;
      print(a);
}
int main(){
    int n;
    cin>>n;
    print(n);
}
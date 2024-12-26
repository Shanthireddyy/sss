#include<iostream>
using namespace std;
int s=0;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int d=sum(arr+1,n-1);
    s=arr[0]+d;
    return s;


}
int main(){
    int a[5]={1,2,3,4,5};
    int size=5;
    int b=sum(a,size);
    cout<<"Sum: "<<b<<endl;

}
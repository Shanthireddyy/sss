#include<iostream>
using namespace std;

int* mergesort(int a[],int start,int end){
    if(start>=end){
        return;
    }
    
}

int main(){
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
}
#include<iostream>
using namespace std;
int missingno(int a[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n+1;i++){
        if(hash[i]==0){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=missingno(a,n);
    cout<<"missing no:"<<j;
}
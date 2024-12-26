#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k){
    int flag;
    for(int i=0;i<sizeof(arr);i++){
        flag=0;
        if(k==arr[i]){
            return i;
            flag=1;
        }
        if(k==arr[i] && flag)
    }
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key to search:"<<endl;
    cin>>k;
    int b=binarysearch(a,0,n-1,k);
    cout<<"Index of "<<k<<"is : "<<b;

}
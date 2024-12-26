#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            s=mid+1;
        }
        if(arr[mid]>k){
            e=mid-1;
        }
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
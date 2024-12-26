#include<iostream>
using namespace std;
int s;

bool binarysearch(int arr[],int s,int e,int k){
    
    
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
    


}
int main(){
    int a[5]={1,2,3,4,5};
    int size=5;
    int key =5;
    int l,r;
    l=a[0];
    r=a[4];
    int c=binarysearch(a,l,r,key);
    cout<<"Present: 1   Absent:0 "<<c; 

    
}
#include<iostream>
using namespace std;
bool isSorted(int *a,int size){
    if(size==0 || size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    else{
        bool rp=isSorted(a+1,size-1);
        return rp;
    }
}
int main(){
    int a[5]={1,3,5,67,135};
    int size=5;
    bool ans=isSorted(a,size);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}
#include<iostream>
using namespace std;
void r(int *arr,int left,int right){
    if(left>=right){
        for(int i=0;i<left+right+1;i++){
            cout<<arr[i]<<endl;
        }
        return ;
    }
    swap(arr[left],arr[right]);
    r(arr,left+1,right-1);
  
}
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    r(a,0,n-1);
    
    

}
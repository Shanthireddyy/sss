#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    if(n==0||n==1){
        return ;
    }
    int mini=0;
    for(int i=1;i<n-1;i++){
        if(a[mini]>a[i]){
           mini=i;
        }
        
    }
    swap(a[mini],a[0]);
    selectionsort(a+1,n);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    
}
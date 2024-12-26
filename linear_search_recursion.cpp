#include<iostream>
using namespace std;
int s;
void print(int a[],int n){
    cout<<"Size of an array: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[],int n,int k){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
    bool d=linearsearch(arr+1,n-1,k);
    return d;
    }


}
int main(){
    int a[5]={1,2,3,4,5};
    int size=5;
    int key =5;
    bool b=linearsearch(a,size,key);
    if(b){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

}
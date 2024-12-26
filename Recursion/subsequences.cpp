#include<iostream>
#include<vector>
using namespace std;

void sub(vector<int>a,int n, vector<int>m,int index){
    if(index>=n){
        for(auto it:m){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    m.push_back(a[index]);
    sub(a,n,m,index+1);
    m.pop_back();
    sub(a,n,m,index+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    vector<int>mid;
    sub(a,n,mid,0);

}
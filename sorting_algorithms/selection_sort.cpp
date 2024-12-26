#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr) {
    int min,index;
    for(int i=0;i<arr.size()-1;i++){
        min=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }

        }
     
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;

    }
        
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> a;
    a.push_back(2);
    a.push_back(13);
    a.push_back(4);
    a.push_back(1);
    a.push_back(3);
    a.push_back(6);
    a.push_back(28);
    

    selectionSort(a);
}
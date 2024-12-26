#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[5]={0,1,2,3,4};
    priority_queue<int>pq;

    for(int i=0;i<5;i++){
        pq.push(arr[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}

// minheap

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     int arr[5]={0,1,2,3,4};
//     priority_queue<int,vector<int>,greater<int>>pq;

//     for(int i=0;i<5;i++){
//         pq.push(arr[i]);
//     }

//     while(!pq.empty()){
//         cout<<pq.top()<<endl;
//         pq.pop();
//     }
// }
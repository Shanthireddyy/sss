#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*(pow(10,i)))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}


// // int decimaltobinary(int a){
// //     int ans=0;
// //     int i=0;
// //     while(a!=0){
// //         int bit= a & 1;
// //         ans=(bit*(pow(10,i)))+ans;
// //         a=a>>1;
// //         i++;
// //     }
// //     return ans;
// // }
// int  countBits(int n){
//     vector<int>ans;
//     while(n!=0){
//         int div=n/2;
//         int mod=n%2;
//         ans.push_back(mod);
//         n=n/2;
//     }
//     // reverse(ans.begin(),ans.end());
//     for(int i=ans.size()-1;i>=0;i--){
//         cout<<ans[i]<<" ";
//     }

    
// }
// int main(){
//     countBits(10);
//     return 0;
// }

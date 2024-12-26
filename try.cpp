#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int s,k;
	    cin>>s>>k;
	    int a[s];
	    for(int i=0;i<s;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    int b[s];
	    
	    for(int i=0;i<s;i++){
	        sum+=a[i];
	        b[i]=0;
	    }
	    int rem=sum%s;
	    int d=sum/s;

	    for(int i=0;i<s;i++){
	        b[i]+=d;
	        sum=sum-d;
	    }
	    if(sum==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	    for(int i=0;i<s;i++){
	        if(i%2!=0 && ((b[i]-b[i-1])<=k)){
	            b[i]+=d;
	            sum=sum-d;
	        }
	        else{
	            continue;
	        }
	    }
	    if(sum==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    }
	}
	return 0;
}

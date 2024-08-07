#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    int odd=1,even=n;
	    for(int i=0;i<n;i++){
	        if(i%2==0){
	            a[i]=even;
	            even--;
	        }else{
	            a[i]=odd;
	            odd++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }cout<<endl;
	}

}

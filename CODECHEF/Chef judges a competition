#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int max1=*max_element(a,a+n);
	   // cout<<"MAX1 before 0"<<max1<<endl;
	   // max1=0;
	    //cout<<"Max1 after 0"<<max1<<endl;
	    int max2=*max_element(b,b+n);
	   // cout<<"MAX2 before 0 "<<max2<<endl;
	    //max2=0;
	    //cout<<"Max2 after 0 "<<max2<<endl;
	    int sum1=0,sum2=0,k=0,l=0;
	    for(int i=0;i<n;i++){
	        sum1+=a[i];
	        
	        k=sum1-max1;
	        
	    }
	    for(int i=0;i<n;i++){
	        sum2+=b[i];
	      
	        l=sum2-max2;
	    }
	    if(k<l){
	        cout<<"Alice"<<endl;
	    }
	    else if(k>l){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}

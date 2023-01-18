#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int r;
	    cin>>r;
	    string str;
	    cin>>str;
	    int count=0;
	    for(int i=0;i<r;i++)
	    {
	        if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o'|| str[i]=='u')
	        {
	            count=0;
	        }
	        else 
	        {
	            count++;
	            if(count>=4)
	            {
	                break;
	            }
	        }
	    }
	    if(count<4)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
}

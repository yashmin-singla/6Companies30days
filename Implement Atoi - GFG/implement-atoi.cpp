// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:

    int atoi(string str) {
        
       int n = str.length();  
        int res;
       for(int i=0;i<n;i++){
           if(str[i] == '-')continue;
           if(!(str[i] >='0' && str[i] <= '9'))return -1;
           else{
           res = res * 10 + (str[i] - '0');
           }
       }
       if(str[0] == '-'){
           res = res * -1;
       }
       return res;
        
        //Your code here
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
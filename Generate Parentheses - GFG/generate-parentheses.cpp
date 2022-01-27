// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string>result;
        string ans="";
        find(n,n,ans,result);
        return result;
        // Your code goes here 
    }
    void find(int open,int close,string &ans,vector<string>&result)
    {
        if(open==0 && close==0)
        {
            result.push_back(ans);
            return;
        }
        if(open>0)
        {
            string ans1=ans;
            ans1+="(";
            find(open-1,close,ans1,result);
        }
        if(close>open)
        {
            string ans2=ans;
            ans2+=")";
            find(open,close-1,ans2,result);
            
        }
        return;

    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
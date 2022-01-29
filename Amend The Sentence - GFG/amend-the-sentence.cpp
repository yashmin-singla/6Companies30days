// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        string ans="";
        int n=s.length();
        int i=0;
        while(i<n)
        {
            if(isupper(s[i]))
            {
                ans+=tolower(s[i]);
                i++;
            }
            while(i<n && islower(s[i]))
            {
                ans+=s[i];
                i++;
            }
            ans+=" ";
        }
        ans.pop_back();
        return ans;
        // your code here
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends
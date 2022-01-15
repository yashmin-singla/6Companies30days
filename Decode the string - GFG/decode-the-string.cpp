// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
          if(s.size() == 0) return "";
        string res = "";
        stack<int> count;
        stack<string> st;
        
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                string str = "";
                while(i < s.size() && s[i+1] != '[')
                    str += s[i++];
                str += s[i];
                count.push(stoi(str));
            }
            else if(s[i] == ']')
            {
                int cnt = count.top();
                count.pop();
                
                string str = "";
                while(!st.empty() && st.top() != "[")
                {
                    str =  st.top() + str;
                    st.pop();
                }
                
                st.pop();
                string temp = "";
                for(int k=0; k<cnt; k++)
                    temp = str + temp;
                
                st.push(temp);
            }
            else
                st.push(string(1,s[i]));
        }
        
        while(!st.empty())
        {
            res = st.top() + res;
            st.pop();
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int left=0;
        long long sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>=s && ans.size()==0)
            {
                if(sum==s)
                {
                    ans.push_back(left+1);
                    ans.push_back(i+1);
                    break;
                }
                sum-=arr[left];
                left++;
            }
        }
        if(ans.size()==0)
        ans.push_back(-1);
        return ans;
        // Your code here
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
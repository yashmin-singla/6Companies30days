// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int lis(vector<int>v)
  {
      vector<int >res;
      if(v.size()>0)
      res.push_back(v[0]);
      for(int i=1;i<v.size();i++)
      {
          if(v[i]>res.back())
          {
              res.push_back(v[i]);
          }
          else{
              int id=lower_bound(res.begin(),res.end(),v[i])-res.begin();
              res[id]=v[i];
          }
      }
      return res.size();
  }
    int minInsAndDel(int a[], int b[], int n, int m) {
        vector<int>tp;
        for(int i=0;i<n;i++)
        {
            if(binary_search(b,b+m,a[i]))
            {
                tp.push_back(a[i]);
            }
        }
        return (n+m-(2*lis(tp)));
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends
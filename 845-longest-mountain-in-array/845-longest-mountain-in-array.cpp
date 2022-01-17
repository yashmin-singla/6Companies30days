class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=1;i<=n-2;)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                int count=1;
                int j=i;
                while(j>0 && arr[j]>arr[j-1])
                {
                    j--;
                    count++;
                }
                while(i<n-1 && arr[i]>arr[i+1])
                {
                    i++;
                    count++;
                }
                ans=max(count,ans);
            }
            else
            {
                i++;
            }
        }
        return ans;
//             int ans = 0, upLength = 0, downLength = 0;
		
//         for(int i = 1; i < arr.size(); i++)
//         {
//             if(arr[i - 1] == arr[i] || downLength && arr[i - 1] < arr[i])
//                 upLength = downLength = 0;
            
//             upLength += arr[i - 1] < arr[i];
//             downLength += arr[i - 1] > arr[i];

//             if(upLength && downLength)
//                 ans = max(ans, upLength + downLength + 1);
//         }
//         return ans;
    }
};
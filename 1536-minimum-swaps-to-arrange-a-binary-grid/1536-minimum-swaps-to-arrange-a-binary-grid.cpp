class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
         vector<int>zeroes;
        // find trailing zero's means continuous zero from back of row:
        for(int i=0;i<grid.size();i++)
        {
            int count=0;
            for(int j=grid.size()-1;j>=0;j--)
            {
                if(grid[i][j]==0)
                    count++;
                else
                    break;
            }
            zeroes.push_back(count);
        }
        
        int ans=0;
        
        for(int i=0;i<grid.size();i++)
        {
            if(zeroes[i]<grid.size()-i-1)
            {
                int j=i;
                while(j<grid.size() && zeroes[j]<grid.size()-i-1)
                {
                    j++;
                }
                if(j==grid.size())
                    return -1;
                
                while(i<j)
                {
                    int temp=zeroes[j];
                    zeroes[j]=zeroes[j-1];
                    zeroes[j-1]=temp;
                    j--;
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
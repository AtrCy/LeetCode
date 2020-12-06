class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size(),ans=0;
        sort(piles.begin(),piles.end());
        int start=n/3;
        for(int i=start;i<n;i=i+2){
            ans+=piles[i];
        }
        return ans;
    }
};

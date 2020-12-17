class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>h;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(h.find(target-nums[i])!=h.end()){
                ans.push_back(h[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            else
            h[nums[i]]=i;
            
        }
        
        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        map<int,int> hashmap;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(hashmap.find(x)!=hashmap.end())
            {
                ans.push_back(hashmap[x]);
                ans.push_back(i);
            }
            else
            {
                hashmap[nums[i]]=i;
            }
        }
        return ans;
    }
};

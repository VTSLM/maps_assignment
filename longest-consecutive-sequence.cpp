class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i;
        int longest=1;
        if(nums.size()==0)
        {
            return 0;
        }
        map<int,int> hashmap;
        for(i=0;i<nums.size();i++)
        {
            hashmap[nums[i]]=i;
        }
        for(auto it: hashmap)
        {
            if(hashmap.first.find(it-1)==hashmap.end())
            {
                int cnt=1;
                int x=it;
                while(hashmap.first.find(x+1)!=hashmap.end())
                {
                    cnt++;
                    x++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int res=nums[(int)nums.size()/2];
        return res;
    }
};

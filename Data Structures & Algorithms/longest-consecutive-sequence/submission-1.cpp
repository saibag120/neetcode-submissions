class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int original =1;
        int current=1;
        int left=0;
        int right=1;
        while(right<nums.size()){
            if(nums[left]+1==nums[right]){
                right++;
                left++;
                current++;
                if(current>original) original=current;
            }
            else if(nums[left]==nums[right]){
                left++;
                right++;
            }
            else{
                
                left=right;
                right=right+1;
                current=1;
            }
        }
        return original;
    }
};

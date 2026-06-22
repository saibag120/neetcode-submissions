class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        vector<vector<int>> threeSum;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            while(i>0 && nums[i]==nums[i-1] && i<nums.size()-1){
                i++;
            }
            if(nums[i]>0) break;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                
                while(j>i+1 && nums[j]==nums[j-1] && k<nums.size()-1 && nums[k]==nums[k+1]){
                    j++;
                    k--;
                }
                if(nums[i]+nums[j]+nums[k]==0 && j<k){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    threeSum.push_back(temp);
                    temp.clear();
                    j++;
                    k--;
                }
                
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }

            }
            i++;
        }
        return threeSum;
    }
};

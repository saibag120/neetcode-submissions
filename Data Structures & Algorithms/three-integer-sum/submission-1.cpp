class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> threesum;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if((i>0) && (nums[i]==nums[i-1])){
                i++;
                continue;
            }
            if(nums[i]>0) break;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                
                if(j>i+1 && k<nums.size()-1 && nums[j]==nums[j-1] && nums[k]==nums[k+1]){
                    j++;
                    k--;
                    continue;
                }
                int x=nums[j]+nums[k];
                if(x==-1*nums[i]){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    threesum.push_back(temp);
                    temp.clear();
                    j++;
                    k--;
                }
                else if(x>-1*nums[i]) k--;
                else if(x<-1*nums[i]) j++;

            }
            i++;
        }
        return threesum;
    }
};

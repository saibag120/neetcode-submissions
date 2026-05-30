class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=1;
        int y=1;
        int z=0;
        vector<int> p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            if(z>1){
                for(int i=0;i<nums.size();i++){
                    p.push_back(0);
                }
                return p;
            }
            if(nums[i]!=0){
                y*=nums[i];
            }
            x=x*nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                p.push_back(x/nums[i]);
            }
            else p.push_back(y);
            
        }
        return p;
    }
};

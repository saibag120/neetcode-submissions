class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> x;
        vector<int> y;
        int b=0;
        int c=0;
        for(int a:nums){
            x[a]++;
        }
        while(k){
            for(auto it: x){
                if(it.second>b){
                    b=it.second;
                    c=it.first;
                }

            }
            y.push_back(c);
            x.erase(c);
            b=0;
            c=0;
            k--;
        }
        return y;
    }
};

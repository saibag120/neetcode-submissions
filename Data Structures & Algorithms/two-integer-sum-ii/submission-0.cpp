class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sum;
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int x=numbers[i]+numbers[j];
            if(x==target){
                sum.push_back(i+1);
                sum.push_back(j+1);
                return sum;
            }
            else if(x<target){
                i++;
            }
            else if(x>target){
                j--;
            }
        }
    }
};

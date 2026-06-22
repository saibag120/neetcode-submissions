class Solution {
    vector<int> left(vector<int> height){
        vector<int> left(height.size());
        left[0]=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
        }
        return left;
    }
    vector<int> right(vector<int> height){
        vector<int> right(height.size());
        right[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        return right;
    }
public:
    int trap(vector<int>& height) {
        vector<int> left_most=left(height);
        vector<int> right_most=right(height);
        int sum=0;
        for(int i=1;i<height.size();i++){
            sum+=min(left_most[i],right_most[i])-height[i];
        }
        return sum;
    }
};

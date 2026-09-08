class Solution {
public:
    int maxArea(vector<int>& heights) {
        int b=0;
        int len=0;
        int area=0;
        int l=0;
        int r=heights.size()-1;
        while(l<r){
            b=r-l;
            len=min(heights[l],heights[r]);
            if(len*b>area) area=len*b;
            if(heights[l]<=heights[r]) l++;
            else r--;
        }
        return area;
    }
};

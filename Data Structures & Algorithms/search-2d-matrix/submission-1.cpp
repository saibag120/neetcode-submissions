class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right=matrix.size()-1;
        while(left<=right){
            int x=(left+right)/2;
            if(matrix[x][0]<=target && matrix[x][matrix[x].size()-1]>=target){
                int l=0;
                int r=matrix[0].size()-1;
                while(l<=r){
                    int y=(l+r)/2;
                    if(matrix[x][y]==target){
                        return true;
                    }
                    else if(matrix[x][y]<target){
                        l=y+1;
                    }
                    else if(matrix[x][y]>target){
                        r=y-1;
                    }
                }
                return false;
            }
            else if(matrix[x][0]<target && matrix[x][matrix[x].size()-1]<target){
                left=x+1;
            }
            else if(matrix[x][0]>target){
                right=x-1;
            }
        } 
        return false;
    }
};

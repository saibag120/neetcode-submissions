class Solution {
public:
bool good(vector<int> piles,int mid,int h){
    int count=0;
    for(int x:piles){
        count+=x/mid;
        if(x%mid!=0){
            count++;
        }
    }
    return count<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<r){
            int mid=(l+r)/2;
            if(good(piles,mid,h)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};

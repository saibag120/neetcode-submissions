class Solution {
public:
bool good(vector<int> piles,int mid,int h){
    int a=0;
    for(int &x: piles){
        a+=x/mid;
        if(x%mid!=0) a+=1;
    }
    return a<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        
        int r=*max_element(piles.begin(),piles.end());
        while(l<r){
            int mid=(l+r)/2;
            if(good(piles,mid,h)){
                r=mid;
            }
            else {
                l=mid+1;
            }
        }
        return l;
    }
};

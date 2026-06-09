class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(),v.end());
        stack <float> st;
        int i=position.size()-1;
        while(i>-1){
            float x=(double)(target-v[i].first)/v[i].second;
            if(st.empty() || st.top()<x){
                st.push(x);
                i--;
            }
            else if(st.top()>=x){
                i--;
            }
        }
        return st.size();
    }
};

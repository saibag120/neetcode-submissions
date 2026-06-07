class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int a=0;
        vector<int> result;
        for(int i=0;i<temperatures.size();i++){
             a=0;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]<=temperatures[i] && j==temperatures.size()-1){
                    result.push_back(0);
                    break;
                }
                if(temperatures[j]>temperatures[i] ){
                    a++;
                    result.push_back(a);
                    break;
                }
                else if(temperatures[j]<=temperatures[i]){
                    a++;
                }
            }
        }
        if(!temperatures.empty()){
            result.push_back(0);
        }
        return result;
    }
};

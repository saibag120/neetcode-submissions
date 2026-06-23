class TimeMap {
public:

    TimeMap() {
        
    }
    map<pair<string,int>,string> mp;
    void set(string key, string value, int timestamp) {
        
        mp[{key,timestamp}]=value;
    }
    
    string get(string key, int timestamp) {
        
        while(mp[{key,timestamp}]=="" && timestamp>=1){
            timestamp-=1;
        }
        return mp[{key,timestamp}];
    }
};

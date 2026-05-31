class TimeMap {
    unordered_map<string,vector<pair<int,string>>>keystore;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        keystore[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto &v=keystore[key];
        int l=0,r=v.size()-1;
        string res="";
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid].first<=timestamp){
                res=v[mid].second;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return res;
    }
};

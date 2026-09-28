class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>str=strs;
        unordered_map<string,vector<string>>res;

        int n=str.size();
        for(const auto &s : strs){
            string so=s;
            sort(so.begin(),so.end());
            res[so].push_back(s);
        }
        vector<vector<string>>result;
        for(auto &pair : res){
            result.push_back(pair.second);
        }
        return result;
    }
      
    
};

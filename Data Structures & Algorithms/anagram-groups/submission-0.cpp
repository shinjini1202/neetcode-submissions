class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size()==0) return {};
        unordered_map<string,vector<string>> mpp;
        for (string s : strs){
            int freq[26]={0};
            for (char c : s){
                freq[c-'a']++;
            }
            string key="";
            for (int i=0;i<26;i++){
                key+=to_string(freq[i])+"#";
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& res : mpp){
            result.push_back(res.second);
        }
        return result;
        
    }
};

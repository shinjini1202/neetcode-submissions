class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k==nums.size()) return nums;
        unordered_map<int,int> freq;
        for (int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for (auto it:freq){
            p.push({it.second,it.first});
        }
        vector<int> res;
        while (k>0){
            res.push_back(p.top().second);
            p.pop();
            k--;
        }
        return res;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k==nums.size()) return nums;
        unordered_map<int,int> freq;
        for (int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for (auto& [num,count]:freq){
            p.push({-count,num});
            if (p.size()>k){
                p.pop();
            }
        }
        vector<int> res;
        while (!p.empty()){
            res.push_back(p.top().second);
            p.pop();
        }
        return res;
    }
};

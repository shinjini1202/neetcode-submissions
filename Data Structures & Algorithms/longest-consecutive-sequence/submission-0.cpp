class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //left neighbour right neighbour logic
        //left neighboour doesnt exist= sequence starts
        //right neighbour exists= sequence continues
        if (nums.size()==0) { return 0;}
        int len=1;
        unordered_set<int> st;
        for (int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for (auto it:st){
            if (st.find(it-1)==st.end()){
                int ctr=1;
                int x=it;
                while (st.find(x+1)!=st.end()){
                    x++;
                    ctr++;
                }
                len=max(len,ctr);
            }
        }
        return len;
        
    }
};

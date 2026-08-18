class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> st;
        for (int num : nums){
            if (st.count(num)) return true;
            st.insert(num);
        }
        return false;
    }
};

// Brute force approachL linear search: take one item and search the rest of the array with it until all elements are checked.  TC: O(n^2)  
// Better approach: Sort the array and chek for the adjacent element. TC : O(n log n) n for 1 reaversal and log n for sorting  
// Optimal:  Use hashset to keep track of seen elements. TC: O(n)  

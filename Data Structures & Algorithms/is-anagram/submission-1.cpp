class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        int freq[26]={0};        //8 bit integer overflow gives wrong answer if freq array is declared is "char" instead of "int"
        for (int i=0;i<s.size();i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int f : freq){
            if (f!=0){
                return false;
            }
        }
        return true;
    }
};

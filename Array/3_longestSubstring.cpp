class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        map<char,int> mpp;
        int len=0;
        while(j<s.size()){
            mpp[s[j]]++;
            for(auto it: mpp){
                if(it.second>1){
                    mpp[s[i]]--;
                    i++;
                }
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
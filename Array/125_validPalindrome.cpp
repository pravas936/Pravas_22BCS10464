class Solution {
public:
    bool isValid(char ch){
        if((ch >='a' && ch<='z') || (ch>='0' && ch<='9') ||(ch >='A' && ch<='Z')){
            return 1;
        }
        else return 0;
    }
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char curr= ch -'A' + 'a';
            return curr;
        }
    }
    bool palindrome(string temp){
        int l=0,h=temp.length()-1;
        while(l<=h){
            if(temp[l]!=temp[h]) return 0;
            l++,h--;
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp="";

        // first push characters in temp
        for(int i=0;i<s.length();i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        // make them lowercase who are in upper in temp
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }
        return palindrome(temp);   // will return if temp is palindrome or not
    }
};
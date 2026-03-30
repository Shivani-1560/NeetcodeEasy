class Solution {
public:

    bool ifalpha(char ch){
        if((ch>='0'&&ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
       while(i<j){
       if(!ifalpha(s[i])){
        i++; continue;
       }
        if(!ifalpha(s[j])){
        j--; continue;
       }
       if(tolower(s[i])!=tolower(s[j])){
        return false;
       }
       i++;
       j--;
       }
       return true;
    }
};
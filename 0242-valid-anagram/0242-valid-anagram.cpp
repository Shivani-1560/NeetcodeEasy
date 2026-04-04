class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n=s.size();
     map<char,int>mp;
   
      for(int i=0;i<n;i++){
        mp[s[i]]++;
      }
      
      for(int i=0;i<n;i++){
        mp[t[i]]--;
      }
     
     for(auto x: mp){
        if(x.second!= 0) return false;
     }
     return true;
    

    }
};
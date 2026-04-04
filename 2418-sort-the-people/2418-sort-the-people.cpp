class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         vector<pair<string,int>>ans;


        for(int i=0;i<names.size();i++){
          ans.push_back({names[i],heights[i]});
          
        }

        sort(ans.begin(), ans.end(), [](auto &a, auto &b){
            if(a.second>b.second) return true;
            return false;
        });

        for(int i=0; i<names.size();i++){
            names[i]=ans[i].first;
        }
        return names;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
          long long n=a.size();
         
         for(int i=n-1;i>=0;i--){
            if(a[i]<9){
                a[i]++;
                return a;
            }
       a[i]=0;
            }
            a.insert(a.begin(),1);
            return a;
    
//Another Approach
      for(int i=n-1;i>=0;i--){
            if(i==n-1){
            a[i]++;}
           
            if(a[i]==10){
               a[i]=0;
               if(i!=0){
                a[i-1]++;
                a[i-1]=0;
               }
             
                 a.insert(a.begin(),1);
            }
               
            }
      return a;
    
    }
};


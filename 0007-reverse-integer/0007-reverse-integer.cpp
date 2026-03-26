class Solution {
public:
    int reverse(int x) {
         if(x==0) return 0;
        long  reverse=0;
        while(x!=0){
        int lasdigit=x%10;
        reverse=(reverse*10)+lasdigit;
       x=x/10;

        }
        if(reverse > INT_MAX || reverse < INT_MIN){
            return 0;
      }  
        return (int) reverse;
    }
};
class Solution {
public:
    int uniquePaths(int m, int n) {
        //m =3, row  and n=7 , col
        long long u = m-1 + n-1 ;
        long long  r= n-1; 
        long long ans=1;
        r = min (r, u-r) ;
         
        for (int i =1; i<=r; i++){
            ans= ans * ( u-i +1) / i; 
        }
        
        return ans;
    }
};

//Find the number of combination by which we can find the target


#include <bits/stdc++.h> 
int solve (vector<int> &num, int tar)
{
//     BASE CASE 
   if ( tar < 0 )
       return 0 ; 
   
   if ( tar == 0 )
      return 1 ; 
   
    int ans = 0 ;
    for ( int i = 0 ; i < num.size() ; i++ )
    {
        ans += solve (num , tar - num[i] ) ;
    }
       
     return ans ;   
}





int solveMem (vector<int> &num, int tar , vector <int> &dp)
{
//     BASE CASE 
   if ( tar < 0 )
       return 0 ; 
   
   if ( tar == 0 )
      return 1 ; 
   
    if ( dp[tar] != -1 )
        return dp[tar] ;
   
    int ans = 0 ;
    for ( int i = 0 ; i < num.size() ; i++ )
    {
        ans += solveMem (num , tar - num[i] , dp) ;
    }
       dp[tar] = ans ;
       return dp[tar] ;   
}





int solveTab (vector<int> &num, int tar )
{
   vector <int> dp(tar+1 , 0 ) ;
   dp[0] = 1 ; 
   
//     TRAVERSING FROM TARGET 1 TO TAR
   for ( int i = 1 ; i <= tar ; i++ )
   {
//          TRAVERSE ON NUM VECTOR
       for ( int j = 0 ; j <num.size() ; j++ )
       {
           if ( i-num[j] >= 0 )
           dp[i] += dp [ i - num[j] ]  ;
       }        
   }     
    return dp[tar] ;
   
}

int findWays(vector<int> &num, int tar)
{
     return solveTab (num , tar ) ;
}
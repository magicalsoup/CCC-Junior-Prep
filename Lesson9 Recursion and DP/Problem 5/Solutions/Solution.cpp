#include <iostream>

using namespace std;

int dp[5010];
int main()
{
   int a, b, c;
   cin>>a>>b>>c;
   dp[0] = 1;
   for(int i = 0; i <= c; i++){
       if(dp[i] == 1){
           if(i + a <= c)
              dp[i + a] = 1;
           if(i + b <= c)
              dp[i + b] = 1;
       }
   }
   for(int i = c; i >= 0; i--){
       if(dp[i] == 1){
           cout<<i<<endl;
           break;
       }
   }
   return 0;
}

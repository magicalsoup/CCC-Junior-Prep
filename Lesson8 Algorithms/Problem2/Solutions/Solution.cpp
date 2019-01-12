#include <iostream>
#include<algorithm>
using namespace std;

struct Test{
    int score, hour;
};
bool cmp(Test a, Test b){
    if (a.hour == b.hour){
        return a.score > b.score;
    }
    return a.hour < b.hour;
}
Test t[100010];
int main()
{
   int n; long m, k, cnt = 0;
   cin>>n>>m>>k;
   for(int i = 0; i < n; i++){
       cin>>t[i].score>>t[i].hour;
       cnt += t[i].score;
   }
   
   if(cnt >= n*k){
       cout<<0<<endl;
       return 0;
   }
   sort(t, t + n, cmp);
   long ans = 0;
   for(int i = 0; i < n; i++){
       if(cnt + (m - t[i].score) <= n*k){
           ans += (m - t[i].score) * t[i].hour;
           cnt += (m - t[i].score);
       }
       else{
           ans += (n*k - cnt) * t[i].hour;
           break;
       }
   }
   cout<<ans<<endl;
   return 0;
}

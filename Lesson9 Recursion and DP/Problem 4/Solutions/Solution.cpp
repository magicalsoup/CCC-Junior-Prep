#include <iostream>
using namespace std;

int v[110], w[110]; long dp[100010];
int main(){
    int N, W;
    cin>>N>>W;
    for(int i = 1; i <= N; i++)
        cin>>w[i]>>v[i];

    for(int i = 1; i <= N; i++){
        for(int j = W; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
    cout<<dp[W]<<endl;
}

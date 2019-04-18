#include <bits/stdc++.h>
using namespace std;
int N, M, in[10002], cnt; bool vis[10002];
vector<int> adj[10002]; queue<int> Q;
int main(){
    scanf("%d %d", &N, &M);
    for(int i=0, a, b; i<M; i++){
        scanf("%d %d", &a, &b);
        adj[a].push_back(b); in[b]++;
    }
    for(int i=1; i<=N; i++)
        if(!in[i]) Q.push(i);
    while(!Q.empty()){
        int u=Q.front(); Q.pop();
        if(!vis[u]){vis[u]=1; cnt++;}
        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];
            in[v]--;
            if(!in[v]) Q.push(v);
        }
    }
    printf("%s\n", cnt==N? "Y":"N");
}

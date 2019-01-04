// credits to DMOJ user bruce
#include <bits/stdc++.h>
using namespace std;
struct A{int b, d, c, id;}a[50002];
int N, Q, S, q;
bool cmp(A x, A y){
    if(x.b != y.b) return x.b>y.b;
    else if(x.b>=S) return x.c>y.c;
    else if(x.b<S) return x.d>y.d;
    else return x.id<y.id;
}
int main(){
    scanf("%d %d", &S, &N);
    for(int i=1; i<=N; i++){
        scanf("%d %d %d", &a[i].b, &a[i].d, &a[i].c);
        a[i].id=i;
    }
    sort(a+1, a+1+N, cmp);
    scanf("%d", &Q);
    while(Q--){
        scanf("%d", &q);
        printf("%d\n", a[q].id);
    }
}

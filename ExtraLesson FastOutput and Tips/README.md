# Welcome to the Extra Lesson!
> [https://dmoj.ca/tips/](https://dmoj.ca/tips/) is a great website for tips, please visit this link

# Fast Output
> ## Python
> - use ```sys.stdin.readline```

> ```py
> import sys
> raw_input = sys.stdin.readline
> ```
> ## Java 
> - BufferedReader, and Printwriter
> - be sure to always close the printwriter or else it won't print anything
> - My java template: (will also be a seprate file in this folder)

> ```java
> import java.io.*;
> import java.util.*;
> public class Template {
>   static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
>   static PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out));
>   static StringTokenizer st;
>   public static void main(String[]args) throws IOException {
>   
>   }
>   static String next() throws IOException {
>       while(st == null || !st.hasNextToken)
>           st = new StringTokenizer(br.readLine().trim());
>       return st.nextToken();
>   }
>   static int readInt() throws IOException {
>       return Integer.parseInt(next());
>   }
>   static long readLong() throws IOException {
>       return Long.parseLong(next());
>   }
>   static Character readCharacter() throws IOException {
>       return next().charAt(0);
>   }
>   static String readLine() throws IOException {
>       return br.readLine().trim();
>   }
> }
> ```

> ## C++
> - use scanf, and printf
> - my template for C++, (will also be a seprate file in this folder) 

> ```cpp
> #include<bits/stdc++.h>
> using namespace std;
> #define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
> char _;
> #define INF 0x3f3f3f3f
> #define NINF -INF
> #define MOD 1000000007
> #define mp make_pair
> #define pb push_back
> #define f first
> #define s second
> #define m(x, y) (x + y) / 2
> typedef pair<int, int> pi;
> typedef long long ll;
> typedef pari<ll, ll> pll;
>
> int main() {
>   return 0;
> }
> ```

> or

> ```cpp
> #include<bits/stdc++.h>
> using namespace std;
> #define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
> char _;
> #define INF 0x3f3f3f3f
> #define NINF -INF
> #define MOD 1000000007
> #define mp make_pair
> #define pb push_back
> #define f first
> #define s second
> #define m(x, y) (x + y) / 2
> typedef pair<int, int> pi;
> typedef long long ll;
> typedef pari<ll, ll> pll;
> // cannot use scanf with this template
> int main() {
>  cin.sync_with_stdio(0);
>  cin.tie(0);
> }
> ```

#include <iostream>

using namespace std;

int main()
{
   int a; cin>>a;
   int freq[11] = {0}; int MAX = 0;
   for(int i = 0; i < a; i++){
       int x; cin>>x;
       freq[x]++;
       MAX = max(MAX, freq[x]);
   }
   for(int i = 0; i < 11; i++){
       if(freq[i] == MAX){
           cout<<i<<endl;
           break;
       }
   }
   return 0;
}

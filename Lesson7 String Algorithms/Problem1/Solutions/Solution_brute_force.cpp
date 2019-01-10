#include <iostream>

using namespace std;

int main()
{
   string s; cin>>s;
   bool found = false;
   int len = s.length();
   for(int i = 0; i < len - 2; i++){
       if(s[i] == 'C' && s[i + 1] == 'C' && s[i + 2] == 'C'){
           found = true;
           break;
       }
   }
   if(found){
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }
   return 0;
}

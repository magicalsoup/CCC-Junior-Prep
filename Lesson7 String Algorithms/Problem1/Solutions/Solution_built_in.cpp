#include <iostream>

using namespace std;

int main()
{
   string s; cin>>s;
   if(s.find("CCC") != string::npos){
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }
   return 0;
}

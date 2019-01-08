#include <iostream>

using namespace std;

int main()
{
   int x, y, z;
   cin>>x>>y>>z;
   int a = (x - y + z) / 2 + 10;
   int b = (y - z + x) / 2 + 10;
   int c = (z - x + y) / 2 + 10;
   cout<<a<<endl<<b<<endl<<c<<endl;
   
   return 0;
}

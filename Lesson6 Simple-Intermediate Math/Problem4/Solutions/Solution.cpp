#include <iostream>

using namespace std;

int main()
{
   double sides; cin>>sides;
   double degrees = 360 / sides;
   printf("%.6f", degrees);
   return 0;
}

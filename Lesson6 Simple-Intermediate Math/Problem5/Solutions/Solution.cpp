#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   double g, c, t; 
   cin>>g>>c>>t;
   double ti = (-c + sqrt(pow(c, 2) - 4 * ((g / 2) * (-c * t)))) / ((g / 2) * 2);
   double dist = (g / 2) * pow(ti, 2);
   double vel = sqrt(g * dist * 2);
   cout<<dist<<endl;
   cout<<vel<<endl;
    
}

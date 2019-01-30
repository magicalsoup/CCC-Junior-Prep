#include <iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}
int main()
{
   int n;
   cin>>n;
   while(true){
       if(isPrime(n)){
           cout<<n<<endl;
           break;
       }
       n++;
   }
   
   return 0;
}

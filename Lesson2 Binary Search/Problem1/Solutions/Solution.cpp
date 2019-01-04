#include <iostream>

using namespace std;

int main()
{
   int key;
   cin>>key;
   int left = 1, right = 1000000000;
   int guesses = 0;
   while(left <= right){
       int mid = (left + right) / 2;
       if(mid == key){
           break;
       }
       else if(mid > key){
           right = mid - 1;
       }
       else if(mid < key){
           left = mid + 1;
       }
       guesses++;
   }
   guesses--;
   int money = 1000000 - guesses * 1000;
   cout<<"Bob can get $"<<money<<endl;
   return 0;
}

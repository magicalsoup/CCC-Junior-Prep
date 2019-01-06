#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   int n; int x; int cnt = 0; 
   cin>>n; cin>>x;
   int array[101];
   for(int i = 0; i < n; i++){
       cin>>array[i];
   }
   for(int i = 0; i < n; i++){
       for(int j = i + 1; j < n; j++){
           for(int k = j + 1; k < n; k++){
               int temp[3]; 
               temp[0] = array[i];
               temp[1] = array[j];
               temp[2] = array[k];
               sort(temp, temp + 3);
               if(temp[1] == x){
                   cnt++;
               }
           }
       }
   }
   cout<<cnt<<endl;
   return 0;
}

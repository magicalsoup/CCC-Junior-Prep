#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int array[] = {1, 396, 99, 84, 33, 75, 9073};
    sort(array, array  + 7);
    int left = 0, right = sizeof(array) / sizeof(array[0]) - 1;
    int key = 396;
    bool found = false;
    
    while(left <= right){
        int mid = (left + right) / 2;
        if(array[mid] == key){
            cout<<"key found at index "<<mid<<endl;
            found = true;
            break;
        }
        else if(array[mid] > key){
            right = mid - 1;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
    }
    
    if(found == false){
        cout<<"key not found in array"<<endl;
    }
   return 0;
}

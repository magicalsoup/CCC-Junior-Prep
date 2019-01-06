#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    while(n--){
        int l; cin>>l; int array[l];
        for(int i = 0; i < l; i++) {
            cin>>array[i];
        }
        int swaps = 0;
        bool isSorted = false;
        while(!isSorted){
            isSorted = true;
            for(int i = 0; i < l - 1; i++){
                if(array[i] > array[i + 1]){
                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    swaps++;
                    isSorted = false;
                }
            }
        }
        cout<<"Optimal train swapping takes " <<swaps<<" swap(s)."<<endl;
    }
    return 0;
}

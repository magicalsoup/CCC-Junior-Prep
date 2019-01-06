#include <iostream>

using namespace std;

int main()
{
    int l; cin>>l; int array[l];
    for(int i = 0; i < l; i++) {
        cin>>array[i];
    }
    for(int i = 0; i < l; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    bool isSorted = false;
    while(!isSorted){
        isSorted = true;
        for(int i = 0; i < l - 1; i++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isSorted = false;
                for(int j = 0; j < l; j++){
                    cout<<array[j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

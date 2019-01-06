#include <iostream>

using namespace std;

int main(){
    int array[101], n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    bool isSorted = false;
    while(!isSorted){
        isSorted = true;
        for(int i = 0; i < n - 1; i++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isSorted = false;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<array[i]<<endl;
    }
}

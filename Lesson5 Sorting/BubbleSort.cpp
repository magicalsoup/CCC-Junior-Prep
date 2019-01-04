#include <iostream>

using namespace std;

int main(){
    int array[] = {23432, 2, 503, 2034, 1, 9984, 32};
    bool isSorted = false;
    while(!isSorted){
        isSorted = true;
        for(int i = 0; i < sizeof(array) / sizeof(array[0]) - 1; i++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isSorted = false;
            }
        }
    }
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        cout<<array[i]<<" ";
    }
}

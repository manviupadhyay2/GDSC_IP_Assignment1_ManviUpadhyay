#include <iostream>
using namespace std;


int* concatenationOfArray(int *arr,int *output,int size){
    for (int i = 0; i < size; ++i) {
        output[i] = arr[i];
        output[i + size] = arr[i];
    }

    return output;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int output[10];
    
    concatenationOfArray(arr,output,5);

    for(int i=0;i<10;i++){
        cout<<output[i]<<" ";
    }

}

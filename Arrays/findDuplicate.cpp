#include <iostream>
using namespace std;


int returnDuplicate(int *arr,int size){
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 4, 9, 10};
    
    int duplicate=returnDuplicate(arr,10);
    cout<<"Duplicate is ::"<<duplicate;
}

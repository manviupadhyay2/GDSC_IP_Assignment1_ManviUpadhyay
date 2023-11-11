#include <iostream>
#include <cstring>
using namespace std;


void reverseString(char *arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char chr[6] = "Manvi";

    reverseString(chr, 5);
    
    cout << "Reversed string: " << chr << endl;


}
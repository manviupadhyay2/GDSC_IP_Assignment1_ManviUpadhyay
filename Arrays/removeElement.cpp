#include <iostream>
using namespace std;
void removeElement(int *arr, int size, int position) {
    if (position >= 0 && position < size - 1) {
        // Shift elements to fill the gap
        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int positionToRemove = 3;

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeElement(arr, size, positionToRemove);

    cout << "Array after removing element at position " << positionToRemove << ": ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

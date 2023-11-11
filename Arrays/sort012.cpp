#include <iostream>
using namespace std;

void sort012(int arr[], int size) {
    int i = 0;
    int zero = 0;
    int two = size - 1;

    while (i <= two) {
        if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[zero];
            arr[zero] = temp;

            i++;
            zero++;
        } else if (arr[i] == 2) {
            int temp = arr[i];
            arr[i] = arr[two];
            arr[two] = temp;

            two--;
        } else {
            i++;
        }
    }
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    sort012(arr, 10);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

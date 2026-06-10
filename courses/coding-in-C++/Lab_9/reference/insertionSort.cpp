#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[4] = {5, 4, 9, 6};
    int n = 4;

    cout << "Start:" << endl;
    printArray(arr, n);

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Elemente verschieben
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        cout << "Schritt " << i << ":" << endl;
        printArray(arr, n);
    }

    cout << "Fertig:" << endl;
    printArray(arr, n);

    return 0;
}
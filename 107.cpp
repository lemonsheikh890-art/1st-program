#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 3, 2, 3};
    int n = 6;
    int key = 3;
    int firstIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            firstIndex = i;
            break;
        }
    }

    if (firstIndex != -1) {
        cout << "First occurrence at index: " << firstIndex << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}

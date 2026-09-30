#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 3, 2, 3};
    int n = 6;
    int key = 3;
    int lastIndex = -1;


    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == key) {
            lastIndex = i;
            break;
        }
    }

    if (lastIndex != -1) {
        cout << "Last occurrence at index: " << lastIndex << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}

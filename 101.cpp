#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {3, 1, 4, 1, 5};

    sort(arr, arr + n, greater<int>());

    cout << "Descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

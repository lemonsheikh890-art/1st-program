#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7;
    int key = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrence of " << key << " is: " << count << endl;
    return 0;
}

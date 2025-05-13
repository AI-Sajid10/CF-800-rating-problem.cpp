#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3); // sort the array from beginning to end

    cout << "Ascending Order: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

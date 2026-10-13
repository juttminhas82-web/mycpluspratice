
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int start = 0, end = 7;
    int tar = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == tar) {
            cout << "Target found at index: " << mid;
            return 0;
        }

        if (arr[start] <= arr[mid]) {
            if (tar >= arr[start] && tar < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (tar > arr[mid] && tar <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    cout << "Target not found";
    return 0;
}

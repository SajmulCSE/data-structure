#include <iostream>

using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
     cout << "After sorting" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    int low = 0, high = n - 1, mid = 0, count=0, item;

    cout << "Enter the item you want to search" << endl;
    cin >> item;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == item) {
            for(i = 0; i<n; i++) {
                count++;
                if(item == arr[i]) {
                    cout << item << " fount at index: "<< i << endl;
                }
            }
            break;
        } else if(arr[mid] < item) {
            low = mid + 1;
        } else if(arr[mid] > item) {
            high = mid - 1;
        }
    }

    if(!count) {
        cout << "Item not found" << endl;
    }
}
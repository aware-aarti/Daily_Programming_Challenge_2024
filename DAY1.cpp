#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void day1(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
   
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {  
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main() {
    cout << "Dutch National Flag Algorithm" << endl;
    
    int arr[8] = {0, 1, 2, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    day1(arr, n);
    
   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

//Insertion Sort in descending order
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}


/*
#include <bits/stdc++.h>
#define ll long long
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int size = 10000;
int arr[size];
using namespace std;

int main() {
    FAST
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
*/

void count_sort(int arr[], int n) {
    const int SHIFT = 5000;
    for (int i = 0; i < n; i++) {
        arr[i]+=SHIFT;
    }

    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    int freq[mx + 1] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int idx = 0;
    for (int i = 0; i <= mx; i++) {
        for (int j = 0; j < freq[i]; j++, idx++)
            arr[idx] = i - SHIFT;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

/*
//best for higher values
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int size = 1000;
int arr[size];
using namespace std;

void count_sort(int arr[], int n) {
    int mn = arr[0], mx = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    int range = mx - mn + 1;
    int freq[range] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i] - mn]++;
    }
    int idx = 0;
    for (int i = 0; i < range; i++) {
        while (freq[i]--) {
            arr[idx++] = i + mn;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

int main() {
    FAST
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    count_sort(arr, n);
    return 0;
}
*/

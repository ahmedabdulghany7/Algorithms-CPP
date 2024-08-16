// Time Complexity: O(k + n) the sum of the space complexities of the count array and the output array
// Space Complexity: O(k) k is the maximum value in an array




#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int size = 10000;
int arr[size];
using namespace std;

int main() {
    FAST
    int n, mx;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mx = arr[0];
    for (int i = 0; i < n; i++) {
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
            arr[idx] = i;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}


// Time Complexity: O(nlogn)
// Space Complexity: O(1)

//nums[0] <= nums[1] >= nums[2] <= nums[3]

#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void wiggleSort(vector<int> &nums) {
    ranges::sort(nums);
    int n = nums.size();
    for (int i = 1; i + 1 < n; i += 2) {
        swap(nums[i], nums[i + 1]);
    }
/*
    for (int i = 0; i < n - 1; i += 1) {
        if ((i % 2 == 0) == (nums[i] > nums[i + 1])) {
            swap(nums[i], nums[i + 1]);
        }
*/
        for (int i = 0; i < n; i++) {
            cout << nums[i] << ' ';
        }
    }

    vector<int> read_vector() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        return v;
    }

    int main() {
        FAST;
        vector<int> v = read_vector();
        wiggleSort(v);
        return 0;
    }

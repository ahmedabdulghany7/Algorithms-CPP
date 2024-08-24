class Solution
{
public:
    int binarySfirst(vector<int> &nums, int target)
    {
        int start = 0, end = (int) nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] < target)
                start = mid + 1;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                end = mid ;
        }
        return nums[start] == target ? start : -1;
    }
    int binarySelast(vector<int> &nums, int target)
    {
        int start = 0, end = (int) nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] < target)
                start = mid + 1;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid ;
        }
        return nums[start] == target ? start : -1;
    }
    vector<int> searchRange(vector<int> &nums, int target) {
        return {binarySfirst(nums, target), binarySelast(nums, target)};
    }
};

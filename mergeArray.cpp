
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m + n - 1; // Last index of nums1
        int i = m - 1;         // Last valid element in nums1
        int j = n - 1;         // Last element in nums2

        // Merge from back
        while (i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                nums1[index--] = nums1[i--];  // ✅ Take from nums1
            } else {
                nums1[index--] = nums2[j--];  // ✅ Take from nums2
            }
        }

        // If nums2 still has elements, put them in nums1
        while (j >= 0) {
            nums1[index--] = nums2[j--];
        }
    }
};

int main() {
    
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has extra space
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // number of valid elements in nums1
    int n = 3; // number of elements in nums2

    // Create object and call function
    Solution obj;
    obj.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

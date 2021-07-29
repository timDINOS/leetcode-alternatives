#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Derived from Leetcode Problem #643 

//Constraints: 2 <= subarray.length <= size of nums vector
//             2 <= nums length <= 50


int findMaxRange(vector<int> &nums, int k) {
    if (k == nums.size()) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1] - nums[0];
    }
    int max = 0;
    int curr_range = 0;
    vector<int> temp(nums.begin(), nums.begin()+k+1);
    sort(temp.begin(), temp.end());
    curr_range = temp[temp.size()-1] - temp[0];
    max = curr_range;
    for (int i = k; i < nums.size(); ++i) {
        vector<int> temp2(nums.begin()+(i-k+1), nums.begin()+(i+1));
        sort(temp2.begin(), temp2.end());
        int diff = temp2[temp2.size()-1] - temp2[0];
        curr_range = diff;
        max = std::max(curr_range, max);
    }

    return max;
}
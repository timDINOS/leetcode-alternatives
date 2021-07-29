#include "tree.h"
#include <vector>

using namespace std;

//Constraints: 2 <= # of nodes <= 100

//Derived from Two Sum IV 

//Time Complexity: O(n)

void DFShelper(TreeNode* head, vector<int> &nums) {
    if (!head) return;
    nums.push_back(head->val);
    DFShelper(head->left, nums);
    DFShelper(head->right, nums);
}


int k_max_sum(TreeNode* head, int k) {
    if (!head) return 0;
    vector<int> nums;
    int sum = 0;
    int max_sum = 0;
    int count = 0;
    DFShelper(head, nums);

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (i >= k) {
            sum -= nums[i-k];
        }
        max_sum = std::max(max_sum, sum);
    }
    return max_sum;
}
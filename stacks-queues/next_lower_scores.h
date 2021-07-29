#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

vector<int> next_lower_score(vector<int> &nums) {
    vector<int> answer(nums.size(), 0);
    stack<int> scores_index;

    for (int i = 0; i < nums.size(); ++i) {
        while (!scores_index.empty() && nums[scores_index.top()] >= nums[i]) {
            int current = scores_index.top();
            scores_index.pop();
            answer[current] = i - current;
        }
        scores_index.push(i);
    }
    return answer;
}
#include <algorithm>
#include <iostream>
#include "tree.h"

#include "k_max_sum.h";

using namespace std;



void test1() {
    TreeNode* tree1 = create(10);
    tree1->left = create(4);
    tree1->left->left = create(40);
    tree1->left->right = create(50);
    tree1->right = create(19);
    tree1->right->left = create(32);
    tree1->right->right = create(12);

    int k = 3;

    int answer = k_max_sum(tree1, k);

    cout << "Test Case 1" << endl;
    if (answer == 109) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG!" << endl;
        cout << "Your Answer: " << answer << endl;
        cout << "Correct Answer: " << 64 << endl;
    }

    k = 2;

    answer = k_max_sum(tree1, k);

    cout << "Test Case 2" << endl;
    if (answer == 90) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG!" << endl;
        cout << "Your Answer: " << answer << endl;
        cout << "Correct Answer: " << 90 << endl;
    }


}

int main() {
    test1();
    return 0;
}
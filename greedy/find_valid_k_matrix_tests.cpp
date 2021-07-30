#include <algorithm>
#include <vector>
#include <iostream>


#include "find_valid_k_matrix.h"

using namespace std;

void printVec(vector<int> &vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void test1() {
    cout << "TEST CASE 1" << endl;
    vector<int> rowSum;
    rowSum.push_back(5);
    rowSum.push_back(7);
    rowSum.push_back(10);
    vector<int> colSum;
    colSum.push_back(8);
    colSum.push_back(6);
    colSum.push_back(8);

    int k = 3;
    vector<vector<int > > answer = find_valid_k_matrix(rowSum, colSum, k);

    vector<vector<int> > solution;
    
    vector<int> t;
    t.push_back(0);
    t.push_back(5);
    t.push_back(0);
    solution.push_back(t);
    vector<int> x;
    x.push_back(6);
    x.push_back(1);
    x.push_back(0);
    solution.push_back(x);
    vector<int> y;
    y.push_back(2);
    y.push_back(0);
    y.push_back(8);
    solution.push_back(y);

    if (answer == solution) {
        cout << "CORRECT!" << endl;
    }
    else {
         cout << "WRONG" << endl;
        cout << "Your Answer: ";
        for (int i = 0; i < answer.size(); ++i) {
            printVec(answer[i]);
        }
        cout << "Solution: ";
        for (int i = 0; i < solution.size(); ++i) {
            printVec(solution[i]);
        }
    }
}

int main() {
    test1();
    return 0;
}
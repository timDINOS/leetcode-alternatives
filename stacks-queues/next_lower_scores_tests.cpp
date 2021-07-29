#include <vector>
#include <iostream>

#include "next_lower_scores.h"

using namespace std;

void printVec(vector<int> &vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}


void test1() {
    cout << "TEST CASE 1" << endl;
    vector<int> test1;
    test1.push_back(50);
    test1.push_back(60);
    test1.push_back(30);
    test1.push_back(20);
    test1.push_back(40);
    test1.push_back(100);
    test1.push_back(10);

    vector<int> answer = next_lower_score(test1);

    vector<int> solution;
    solution.push_back(2);
    solution.push_back(1);
    solution.push_back(1);
    solution.push_back(3);
    solution.push_back(2);
    solution.push_back(1);
    solution.push_back(0);

    int count = 0;

    for (int i = 0; i < solution.size(); ++i) {
        if (solution[i] == answer[i]) {
            count++;
        }
    }

    if (count == solution.size()) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: ";
        printVec(answer);
        cout << "Solution: ";
        printVec(solution);
    }
}

void test2() {
    cout << "TEST CASE 2" << endl;
    vector<int> test2;
    test2.push_back(50);
    test2.push_back(10);

    vector<int> answer = next_lower_score(test2);

    vector<int> solution;
    solution.push_back(1);
    solution.push_back(0);
    

    int count = 0;

    for (int i = 0; i < solution.size(); ++i) {
        if (solution[i] == answer[i]) {
            count++;
        }
    }

    if (count == solution.size()) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: ";
        printVec(answer);
        cout << "Solution: ";
        printVec(solution);
    }
}





int main() {
    test1();
    test2();
    return 0;
}

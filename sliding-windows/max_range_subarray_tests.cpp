#include <string>
#include <iostream>
#include <vector>
#include "max_range_subarray.h"

using namespace std;




void test1() {
    vector<int> one;
    one.push_back(1);
    one.push_back(12);
    one.push_back(-5);
    one.push_back(-6);
    one.push_back(50);
    one.push_back(3);

    int k = 4;

    int answer = findMaxRange(one, k);
    cout << "Test Case 1" << endl;
    if (answer == 56) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: " << answer << " " << "Correct Answer: " << 55 << endl; 
    }

    k = 3;
    answer = findMaxRange(one, k);
    cout << "Test Case 2" << endl;
    if (answer == 56) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: " << answer << " " << "Correct Answer: " << 56 << endl; 
    }

    k = 2;
    answer = findMaxRange(one, k);
    cout << "Test Case 3" << endl;
    if (answer == 56) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: " << answer << " " << "Correct Answer: " << 56 << endl; 
    }

    k = 5;
    answer = findMaxRange(one, k);
    cout << "Test Case 4" << endl;
    if (answer == 56) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: " << answer << " " << "Correct Answer: " << 56 << endl; 
    }

    k = 6;
    answer = findMaxRange(one, k);
    cout << "Test Case 5" << endl;
    if (answer == 56) {
        cout << "CORRECT!" << endl;
    }
    else {
        cout << "WRONG" << endl;
        cout << "Your Answer: " << answer << " " << "Correct Answer: " << 56 << endl; 
    }
}


int main() {
    test1();
    return 0;
}
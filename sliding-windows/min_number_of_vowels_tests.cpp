#include "min_number_of_vowels.h"
#include <string>
#include <iostream>

using namespace std;





void test1() {
    string s = "abciiidef";
    int k = 3;
    int answer = min_number_vowels_in_substr(s, k);
    if (answer == 1) {
        cout << "CORRECT" << std::endl;
    }
    else {
        cout << "WRONG" << std::endl;
    }
}

void test2() {
    string s = "aeiou";
    int k = 2;
    int answer = min_number_vowels_in_substr(s, k);
    if (answer == 2) {
        cout << "CORRECT" << std::endl;
    }
    else {
        cout << "WRONG" << std::endl;
        cout << answer << std::endl;
    }
}

void test3() {
    string s = "leetcode";
    int k = 3;
    int answer = min_number_vowels_in_substr(s, k);
    if (answer == 1) {
        cout << "CORRECT" << std::endl;
    }
    else {
        cout << "WRONG" << std::endl;
    }
}

void test4() {
    string s = "aaeeeooiiiddfdfur";
    int k = 5;
    int answer = min_number_vowels_in_substr(s, k);
    if (answer == 1) {
        cout << "CORRECT" << std::endl;
    }
    else {
        cout << "WRONG" << std::endl;
    }
}

void test5() {
    string s = "rhythms";
    int k = 3;
    int answer = min_number_vowels_in_substr(s,k);
    if (answer == 0) {
        cout << "CORRECT" << std::endl;
    }
    else {
        cout << "WRONG" << std::endl;
    }
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}




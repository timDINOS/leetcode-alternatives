#include <string>
#include <vector>

using namespace std;

//Problem derived from Leetcode 1456: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

int min_number_vowels_in_substr(string s, int k) {
    int min = 0;
    int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
    int current_vowel_num = 0; 
    int initial = 0;
    for (int i = 0; i < k; ++i) {
        current_vowel_num += vowels[s[i] - 'a'];
    }
    min = current_vowel_num;
    initial = current_vowel_num;
    for (int i = k; i < s.size(); ++i) {
        current_vowel_num += vowels[s[i] - 'a'];
        current_vowel_num -= vowels[s[i-k] - 'a'];
        if (current_vowel_num == 0 && initial > 0) {
            continue;
        }
        min = std::min(min, current_vowel_num);
    }

    return min;
}






#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverse(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
    return s;
}

string reverseWords(string s) {
    string temp;
    string result;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            result += reverse(temp);
            if (s[i] == ' ')
                result += ' ';
                temp.clear();
        } else {
            temp += s[i];
        }
    }
    return result;
}

int main() {
    string s = "Let's take LeetCode contest";
    string ans = reverse(s);
    cout << ans << endl;
    string reversedWords = reverseWords(s);
    cout << reversedWords << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
bool checkingPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (checkingPalindrome(input)) {
        cout << input << " is a palindrome." << std::endl;
    } else {
        cout << input << " is not a palindrome." << std::endl;
    }

    return 0;
}

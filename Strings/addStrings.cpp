#include <iostream>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result = "";
    int carry = 0;

    for (int i = 0; i < max(num1.size(), num2.size()) || carry; ++i) {
        int digit1 = i < num1.size() ? (num1[i] - '0') : 0;
        int digit2 = i < num2.size() ? (num2[i] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        result += (sum % 10) + '0';
    }

    reverse(result.begin(), result.end());

    return result.empty() ? "0" : result;
}

int main() {
    string num1 = "11";
    string num2 = "123";

    string result = addStrings(num1, num2);

    cout << "Output: " << result << endl;

    return 0;
}

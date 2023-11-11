#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string goal) {
    if (s.size() != goal.size()) {
        return false;
    }
    string concatenated = s + s;

    return concatenated.find(goal) != string::npos;
}

int main() {

    string s1 = "abcde";
    string goal1 = "cdeab";
    cout << (rotateString(s1, goal1) ? "true" : "false") << endl;


    string s2 = "abcde";
    string goal2 = "abced";
    cout << (rotateString(s2, goal2) ? "true" : "false") << endl;

}

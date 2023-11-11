#include <iostream>
#include <vector>

using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    vector<char> sToT(128, '\0');
    vector<char> tToS(128, '\0');

    for (int i = 0; i < s.length(); ++i) {
        char charS = s[i];
        char charT = t[i];

        if (sToT[charS] != '\0' && sToT[charS] != charT) {
            return false;
        }

        if (tToS[charT] != '\0' && tToS[charT] != charS) {
            return false;
        }

        sToT[charS] = charT;
        tToS[charT] = charS;
    }

    return true;
}

int main() {

    string s1 = "egg";
    string t1 = "add";
    cout << (isIsomorphic(s1, t1) ? "true" : "false") << endl;
}

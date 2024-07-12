#include <iostream>
#include <string>

using namespace std;

bool Anagrams(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int sum1 = 0, sum2 = 0;
    int n = str1.length();

    for (int i = 0; i < n; ++i) {
        sum1 += int(str1[i]);
    }

    for (int i = 0; i < n; ++i) {
        sum2 += int(str2[i]);
    }

    return sum1 == sum2;
}

int main() {
    string s1 = "Harsha";
    string s2 = "Varsha";

    if (Anagrams(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams." << endl;
    } else {
        cout << s1 << " and " << s2 << " are not anagrams." << endl;
    }

    return 0;
}

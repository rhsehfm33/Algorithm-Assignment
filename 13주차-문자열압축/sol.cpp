#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "abcabcabcabcdededededede";

    int ans = str.size();
    for (int segment = 1; segment <= str.size() / 2; ++segment) {
        string result = "";

        int leftIndex = 0;
        int rightIndex = segment;
        while (rightIndex < str.size()) {
            string leftSegmentStr = str.substr(leftIndex, segment);
            while (rightIndex < str.size() and leftSegmentStr == str.substr(rightIndex, segment)) {
                rightIndex += segment;
            }
            if (rightIndex > leftIndex + segment) {
                result += to_string((rightIndex - leftIndex) / segment) + leftSegmentStr;
            }
            else {
                result += leftSegmentStr;
            }
            leftIndex = rightIndex;
            rightIndex += segment;
        }

        if (leftIndex < str.size()) {
            result += str.substr(leftIndex);
        }

        ans = min(ans, (int)result.size());
    }

    cout << ans << '\n';

    return 0;
}
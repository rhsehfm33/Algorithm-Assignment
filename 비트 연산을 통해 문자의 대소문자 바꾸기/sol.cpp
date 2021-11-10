#include <bits/stdc++.h>

using namespace std;

int main() {
  string str = "CHeRrY";
  for (char& ch : str) {
    ch ^= 32;
  }
  cout << str << endl;
  return 0;
}
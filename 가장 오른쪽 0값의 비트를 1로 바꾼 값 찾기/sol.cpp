#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 21;
  cout << (n | ((n+1) & (~n))) << endl;
  return 0;
}
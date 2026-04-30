#include <bits/stdc++.h>
using namespace std;

vector<int> buildSuffixArray(const string& s) {
    int n = s.size();
    vector<pair<string, int>> suffixes;

    for (int i = 0; i < n; i++) {
        suffixes.push_back({s.substr(i), i});
    }

    sort(suffixes.begin(), suffixes.end());

    vector<int> sa;
    for (auto& p : suffixes) {
        sa.push_back(p.second);
    }

    return sa;
}

int main() {
    string s = "banana";
    vector<int> sa = buildSuffixArray(s);

    for (int i : sa) cout << i << " ";
}
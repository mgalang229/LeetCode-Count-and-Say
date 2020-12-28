#include <bits/stdc++.h>

using namespace std;

// this program is created using functions unlike the previous code

string Count(string s) {
	int n = s.size();
	string ss;
	int cnt = 1;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == s[i + 1]) {
			cnt++;
		} else {
			ss += to_string(cnt);
			ss += s[i];
			cnt = 1;
		}
	}
	ss += to_string(cnt);
	ss += s[n - 1];
	return ss;
}

string CountAndSay(int n) {
	vector<string> v(n + 1);
	v[0] = "1";
	for (int i = 1; i <= n; i++) {
		v[i] = Count(v[i - 1]);
	}
	return v[n - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	cout << CountAndSay(n) << '\n';	
	return 0;	
}

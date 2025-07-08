#include <bits/stdc++.h>
using namespace std;

void Plz_Ac() {
	string s;
	cin >> s;
	int n = s.size();
	vector<int> freq(26, 0);
	for (char c : s) freq[c - 'A']++;

	// Check if possible
	int max_freq = *max_element(freq.begin(), freq.end());
	if (max_freq > (n + 1) / 2) {
		cout << -1 << endl;
		return;
	}

	string result = "";
	char last = 0;

	for (int i = 0; i < n; ++i) {
		bool found = false;
		for (int ch = 0; ch < 26; ++ch) {
			if (freq[ch] == 0) continue;
			if (last == (ch + 'A')) continue; // Can't repeat
			// Try to put this character
			freq[ch]--;
			// Check if after using this character, still possible?
			int max_left = *max_element(freq.begin(), freq.end());
			if (max_left > (n - i - 1 + 1) / 2) {
				freq[ch]++; // Not possible, backtrack
				continue;
			}
			// Ok, use it
			result += (ch + 'A');
			last = (ch + 'A');
			found = true;
			break;
		}
		if (!found) {
			cout << -1 << endl;
			return;
		}
	}
	cout << result << endl;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	Plz_Ac();
	return 0;
}

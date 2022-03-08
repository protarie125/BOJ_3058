#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		auto mn = int{ 101 };
		auto sum = int{ 0 };
		for (int j = 0; j < 7; ++j) {
			int x;
			cin >> x;

			if (0 == x % 2) {
				sum += x;
				if (x < mn) {
					mn = x;
				}
			}
		}

		cout << sum << ' ' << mn << '\n';
	}

	return 0;
}
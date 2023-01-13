#include <iostream>
#include <vector>

using namespace std;

using vb = vector<bool>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto isGood = vb(100, true);
	auto ans = int{ 0 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		if (!isGood[x - 1]) {
			++ans;
		}

		isGood[x - 1] = false;
	}

	cout << ans;

	return 0;
}
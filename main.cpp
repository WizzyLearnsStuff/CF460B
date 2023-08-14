#include<iostream>
#include<cmath>

using namespace std;

int sum(int x) {
	int ret = 0;
	while (x > 0) {
		ret += x % 10;
		x /= 10;
	}
	return ret;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int nums[82] = {0};
	int sols = 0;
	for (int i = 1; i < 82; i++) {
		nums[i] = b * pow(i, a) + c;
		if (sum(nums[i]) == i && nums[i] > 0  && nums[i] < 1000000000) {
			sols++;
		}
		else nums[i] = 0;
	}

	cout << sols << '\n';
	for (int i = 1; i < 82; i++) {
		if (nums[i] != 0) {
			cout << nums[i] << " ";
		}
	}
}

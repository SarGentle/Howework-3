#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int  *arr = new int[N];
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N-1; i++) {
		if ((arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0)) {
			cout << arr[i] << " " << arr[i + 1];
			break;
		}
	}
	cin.get();
	cin.get();
	return 0;
}
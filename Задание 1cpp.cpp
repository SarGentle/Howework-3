#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int *arr = new int[N];
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < N-1; i++) {
		if (arr[i] < arr[i + 1]) {
			cout  << arr[i + 1];
		}
	}
	cin.get();
	cin.get();
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	int N = 0, min = 12345678;
	int *arr = new int[N];
	cin >> N;
	for (int i = 0; i < N; i++) { 
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] > 0 && arr[i] < min) min = arr[i];
	}
	cout << min;
	cin.get();
	cin.get();
	return 0;
}
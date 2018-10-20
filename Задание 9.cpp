#include <iostream>
using namespace std;


int main(){
	int n = 0, N, f, F;
	char *arr = new char[n];
	cin >> n;
	for (int i = 0; i < n; i++){
		arr[i] = 'I';
	}
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> f >> F;
		for (int j = f - 1; j <= F - 1; j++){
			arr[j] = '.';
		}
	}
	for (int i = 0; i < n; i++){
		cout << arr[i];
	}
	cin.get();
	cin.get();
	return 0;
}

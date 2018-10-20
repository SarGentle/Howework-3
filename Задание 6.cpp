#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int *arr = new int[n];
	cin >> n;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		arr[i] = a;
	}
	int t = arr[n - 1];
	for (int i = n - 1; i > 0; i--){
		arr[i] = arr[i - 1];

	}
	arr[0] = t;
	for (int i = 0; i < n; i++){
		cout << arr[i];
	}
	cin.get();
	cin.get();
	return 0;
}
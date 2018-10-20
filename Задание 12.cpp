#include <iostream>
using namespace std;


int main(){
	int n;
	do {
		cin >> n;
	} while (n < 0);
	int *add = new int[n];
	int *arr = new int[n];
	for (int i = 0; i < n; i++){
		add[i] = 1;
		arr[i] = 1;
	}
	for (int j = 1; j <= n; j++){
		for (int i = 1; i < j - 1; i++) arr[i] = add[i - 1] + add[i];
		for (int i = 1; i < j - 1; i++) add[i] = arr[i];
	}
	for (int i = 0; i < n; i++) cout << arr[i];
	cin.get();
	cin.get();
	return 0;
}
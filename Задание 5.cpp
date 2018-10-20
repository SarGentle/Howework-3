#include <iostream>
using namespace std;


int main(){
	int n = 0;
	int *arr = new int[n];
	cin >> n;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		arr[i] = a;
	}
	for (int i = 0; i < n - n % 2; i = i + 2){
		arr[i] = arr[i] * arr[i + 1];
		arr[i + 1] = arr[i] / arr[i + 1];
		arr[i] = arr[i] / arr[i + 1];
	}
	for (int i = 0; i < n; i++){
		cout << arr[i];
	}
	cin.get();
	cin.get();
	return 0;
}

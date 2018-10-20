#include <iostream>
using namespace std;

int main(){
int a, m, n, j = 0;
cin >> n;
	if (n > 0){
		cin >> m;
		j = 1;
		for (int i = 1; i < n; ++i){
			cin >> a;
			if (m != a) {
				m = a;
				j++;
			}
		}
	}
cout << j << endl;
cin.get();
cin.get();
return 0;
}
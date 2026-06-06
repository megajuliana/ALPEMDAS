#include <iostream>
using namespace std;

int main() {
	
	int total;
	int i;
	int x;
	int rata;
	cout << "masukan angka	:";
	cin >> x;
	
	for(i = 1; i <= x; i++) {
		cout << i << "" << endl;
		total += i;
	}
//	cout << "totalnya:" <<total;
//	rata = total / x;
//	cout << "rata ratanya" << rata;
	return 0;
}

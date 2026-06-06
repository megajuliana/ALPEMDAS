#include <iostream>
using namespace std;

int main(){
	
	int nilai;
	char akreditasi;
	
	cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        akreditasi = 'A';
    } else if (nilai >= 80) {
        akreditasi = 'B';
    } else if (nilai >= 70) {
        akreditasi = 'C';
    } else {
        akreditasi = 'D';
    }

    cout << "Akreditasi: " << akreditasi << endl;

    return 0; 
	
}

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){

/*
	DAFTAR NILAI MAHASISWA 
	MATA KULIAH ALGORITMA DAN PEMROGRAMAN 
	------------------------------------------
	| No | Nama Mahasiswa           | Nilai |
	------------------------------------------
	| 1 | Chaira Innara             |  90   |
	------------------------------------------
	| 2 | Ahmad                     |  85   |
	------------------------------------------
	| 3 | Siti                      |  70   |
	------------------------------------------
	| 4 | Budi                      |  80   |
	------------------------------------------

*/	

	string mahasiswa[4][2] = {
		{"Chayra", "90"},
		{"Ahmad", "85"},
		{"Siti", "70"},
		{"Budi", "80"}
	};
	int n=1;
	cout << "Daftar Nilai Mahasiswa\n";
	//cout << "NO NAMA NILAI\n";
	cout << setw(5) << left << "NO";
	cout << setw(20) << left << "NAMA MAHASISWA";
	cout << setw(5) << left << "NILAI\n";

	int nilai, total;
	
	
	for(int i=0; i<4; i++){
		stringstream s;
		s << mahasiswa[i][1];
		s >> nilai;
		total += nilai;
		cout << setw(5) << left << n++;
		cout << setw(20) << left << mahasiswa[i][0];
		cout << setw(5) << left << mahasiswa[i][1] << endl;
	}
	
	cout << "\nRata - rata nilai = " << (float(total)/4);
	
	
	
	
	
	cin.get();
	return 0;
}



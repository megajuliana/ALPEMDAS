#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

/*

	//Array 1 Dimensi:
	
	-- data mahasiswa = npm, nama, nilai
	
	String mahasiswa1[3]= ["123", "Budi", "70"];
	String mahasiswa2[3] = ["124", "Siti", "80"];
	String mahasiswa3[3] = ["125", "Dani", "85"];
	......
	......
	
	String mahasiswa[3][3]={
								{"123", "Budi", "70"},
								{"124", "Siti", "80"},
								{"125", "Dani", "85"}
						   };
	
	


	//array 1D = vector
	//array 2D = matrix



OPERASI DASAR PADA ARRAY 2D
- Copy Array 2D To 2D
- Diagonal Matrik
- Matrik identitas 
- Transpose Matrik
- Penjumlahan / Pengurangan Matriks
- Perkalian Matriks
- Tabel Data

*/

int main(){
	
	//deklarasi array 2D
	//type_data nama_array[baris][kolom];
	
	/*
	int matrix1[2][2] = {
						{1,2},
						{3,4}
					   };
	int matrix2[2][2] = {
						{1,2},
						{3,4}
					   };

	int matrix3[2][2];
	
	cout << "Matrix 1 \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matrix1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Matrix 2 \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matrix2[i][j] << "\t";
		}
		cout << endl;
	}	
	

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			matrix3[i][j] = 0;
			for(int k=0; k<2; k++){
				matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
			}
		}
		cout << endl;
	}	
	
	cout << "Matrix 1 x Matrix 2 \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matrix3[i][j] << "\t";
		}
		cout << endl;
	}	
		
	*/

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



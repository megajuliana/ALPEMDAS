#include <iostream>
using namespace std;

int main(){
	
	// array atau larik 
//	1. array satu dimensi
//	2. array dua dimensi (yang akan di bahas kali ini)

//	struktur array:
//		type data, namaArray[]
//	contoh 
//	char huruf[9] 
//	int umur[10]
//	int kondisi[2]
	
//	contoh latihan:
//		1 2 3
//		4 5 6
//		7 8 9
	
//	int data[3][3] = {
//		{ 1, 2, 3},
//		{ 4, 5, 6},
//		{ 7, 8, 9 }
//	};
//		
//		  
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout << data[i][j] << " ";
//		}
//		cout << endl;
//	}

	//latihan 1
//	tampilkan daftar nilai yang di siswa untuk 3 mata pelajaran kedalam 
//	array 2d
//	output :
//		data nilai siswa:
//			80 75 90
//			70 85 88
//			92 78 84

//	int data[3][3] = {
//		{ 80, 75, 90},
//		{ 70, 85, 88},
//		{ 92, 78, 84}
//	};
//		
//	cout << "Data nilai siswa: " << endl; 
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout << data[i][j] << " ";
//		}
//		cout << endl;
//	}

	// kuis 1
//	sebuah program digunakan untuk menyimpan data angka 3x3 dalam array 2d
//	program harus menghitung jumlah seluruh elemen array
//	contoh output:
//		jumlah seluruh elemen = 45
	
//	int data[3][3] = {
//		{ 1, 2, 3},
//		{ 4, 5, 6},
//		{ 7, 8, 9 }
//	};
//	
//	int jumlah = 0;
//	
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			jumlah += data[i][j];
//		}
//	}
//	
//	cout << "Jumlah seluruh elemen = " << jumlah << endl;
	
	//	kuis 2
//	array 3x3 berisi nilai siswa
//	cari nilai terbesar dari array tersebut

//	int daftar_nilai[3][3] = {
//								{80, 75, 90},
//								{70, 85, 88},
//								{92, 78, 84}
//							};
//	int terbesar = 0;
//							
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout << daftar_nilai[i][j] << " ";
//			if(daftar_nilai[i][j] > terbesar){
//				terbesar = daftar_nilai[i][j];
//			}
//		}
//		cout << endl;
//	}
//	
//	cout << "\nNilai terbesar = " << terbesar;

	// latihan
//	penjumlahan perbaris
//	jumlah baris 1 = 6
//	jumlah baris 2 = 15
//	jumlah baris 3 = 24
	
//	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//	int jumlah;
//	int rata_rata;  //int total = 3*3
//	
//	for(int i=0; i<3; i++){
//		for(int j=0; j<3; j++){
//			cout << a[i][j] << " " ;
//			jumlah += a[i][j] ;
//			rata_rata = jumlah / a[i][j];
//		}
//		cout << "Jumlah baris " << i + 1 << " = " << jumlah << endl;
//	}
//	cout << "Rata - rata = "<< rata_rata;	//	sekrang coba cari nilai rata rata

	// sekrang cari bilangan menentukan genap dan ganjil 
//	int data[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			cout << data[i][j] << " ";
//			if(data[i][j] % 2 == 0){
//				cout << "Bilangan Genap\n";
//			} else if(data[i][j] % 2 == 1){
//				cout << "Bilangan Ganjil\n";
//			}
//		}
//		cout << endl;
//	}

	//	kuis for + if else & array 
//	sebuah bioskop memiliki denah kursi 4x5 yang di simpan dalam array2d
//	keterangan:
//		X -> Kursi terisi
//		O -> Kursi kosong
//	program harus:
//		1. menampilkan denah kursi
//		2. menghitung jumlah kursi kosong
//		3. menghitung jumlah kursi terisi
//	contoh output:
//		x o x o o
//		o o x x o
//		x x o o o
//		o x o x o
//	jumlah kursi kosong = 11
//	jumlah kursi terisi = 9
		
	char kursi[4][5] = {
        {'X', 'O', 'X', 'O', 'O'},
        {'O', 'O', 'X', 'X', 'O'},
        {'X', 'X', 'O', 'O', 'O'},
        {'O', 'X', 'O', 'X', 'O'}
    };

    int kosong = 0;
    int terisi = 0;

    cout << "Denah Kursi:" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << kursi[i][j] << " ";
            
            if (kursi[i][j] == 'O') {
                kosong++;
            } else if (kursi[i][j] == 'X') {
                terisi++;
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << "Jumlah kursi kosong = " << kosong << endl;
    cout << "Jumlah kursi terisi = " << terisi << endl;
	
	return 0;
}

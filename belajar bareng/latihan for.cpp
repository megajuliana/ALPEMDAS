#include <iostream>
using namespace std;

int main(){
	
	// pengulangan for
	
//	for(int i=1; i<=3; i++){ 
//		for(int j=1; j<=3; j++){
//			cout << i << " " << j <<endl;
//		}
//	}
	
	//studi kasus 1
//	seorang mahasiswa ingin membuat program untuk menampilkan tabel perkalian 1-5
//	setiap baris menunjukkan perkalian dari satu angka dengan angka lainnya
//	hasil output:
//		1 2 3 4 5
//		2 4 6 8 10
//		3 6 9 12 15
//		4 8 12 16 20
//		5 10 15 20 25

//	for(int i=1; i<=5; i++){
//		for(int j=1; j<=5; j++){
//			cout << i*j << " ";
//		}
//		cout << endl;
//	}
		
	// studi kasus 2
//	sebuah aplikasi sederhana diminta untuk menampilkan pola bintang 
//  berbentuk persegi 4x4 menggunakan perulangan
	
//	for(int i=1; i<=4; i++){
//		for(int j=1; j<=4; j++){
//			cout << "*";
//		}
//		cout << endl;
//	}

	// studi kasus 3
//	disebuah kelas terdapat 3 baris bangku dan setiap baris memiliki 4 bangku
//	buatkan program untuk menampilkan nomor bangku berdasarkan baris dan kolom
//	contoh : 
//	bangku baris 1 kolom 1

//	for(int i=1; i<=3; i++){
//		for(int j=1; j<=4; j++){
//			cout << "Bangku baris " << i << "kolom " << j << endl; 
//		}
//	}

	// studi kasus 4
//	sebuah sekolah memiliki 5 hari belajar dan setiap hari terdapat 3 jam pelajaran
//	tampilkan jadwal dalam bentuk berikut:
//	contoh output
//		hari 1-jam 1
//		hari 1-jam 2
//		hari 1-jam 3
//		hari 2- jam 1

//	for(int i=1; i<=5; i++){
//		for(int j=1; j<=3; j++){
//			cout << "Hari " << i << "Jam " << j << endl;
//		}
//		cout << endl;
//	}

	// studi kasus 5
//	tampikan pola angka dimana setiap baris menampilakan angka sesuai nomor baris:
//	1
//	2 2
//	3 3 3
//	4 4 4 4
//	5 5 5 5 5
	
//	for(int i=1; i<=5; i++){
//		for(int j=1; j<=i; j++){
//			cout << i;
//		}
//		cout << endl;
//	}

//	// studi kasus 6
//	buat program c++ menggunakan for dalam for
//	menampilakan pola kotak uk 5x5 dengan ketentuan:
//		karakter # hanya muncul di bagian tepi
//		bagian dalam dikosongkan(spaci)
//	hasil output:
//		# # # # #
//		#       #
//		#       #
//		#       #
//		# # # # #

//	for( int i=1; i<=5; i++){
//		for(int j=1; j<=5; j++){
//			if(i == 1 || i == 5 || j == 1 || j == 5){
//				cout << "# ";
//			}else{
//				cout << "  ";
//			}		
//		}
//		cout << endl;
//	}

	// studi kasus 7
//	tampilkan pola angka 5 baris, dimana setiap baris 
//	mencetak angka 5 turun ke 1
//	5 4 3 2 1
//	5 4 3 2
//	5 4 3
//	5 4
//	5

//	for(int i=1; i<=5; i++){
//		for(int j=5; j>=i; j--){
//			cout << j;
//		}
//		cout << endl;
//	}
	
	
	// studi kasus 8
//	buat pola papan catur 4x4 menggunakan x dan o
//	contoh : 
//		X O X O
//		DLL

//	for(int i=1; i<=2; i++){
//		for(int j=1; j<=2; j++){
//			cout << "X O ";
//		}
//		cout << endl;
//	}
//	
//	cout << endl;
//	
//	for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 4; j++) {
//            if ((i + j) % 2 == 0)
//                cout << "X ";
//            else
//                cout << "O ";
//        }
//        cout << endl;
//    }
//
//	cin.get();
//	return 0;
}

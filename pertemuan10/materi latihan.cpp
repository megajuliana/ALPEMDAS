#include <iostream>
using namespace std;

int main(){
	//buat 3 baris 3 kolom matriks
	// Deklarasi dan inisialisasi matriks A
//    int matriks[3][3] = {
//        {1, 0, 0},
//        {0, 1, 0},
//        {0, 0, 1}
//    };

    // Tampilkan label kolom
//    for (int kolom = 0; kolom < 3; kolom++) {
//        cout << "Kolom " << kolom + 0 << "  ";
//    }
//    cout << endl;

    // Tampilkan isi matriks dengan label baris, cara 1
//    for (int baris = 0; baris < 3; baris++) {
//        for (int kolom = 0; kolom < 3; kolom++) {
//            cout << matriks[baris][kolom];
//        }
        
    // Tampilkan isi matriks dengan label baris, cara 2
//    for (int baris = 0; baris < 3; baris++) {
//        for (int kolom = 0; kolom < 3; kolom++) {
//            if (baris == kolom){
//            	matriks[baris][kolom] = 1;
//			}else{
//				matriks[baris][kolom] = 0;
//			}
//			cout << matriks[baris][kolom] << " ";
//        }
//        cout << endl;
//    }
    
    //penjumlahan matrik
    ////	int jumlah = 0;
////	float rata;
//	
////	cout << "masukan elemen matriks : \n";
//    for (int i = 0; i < 2; i++) {
//    	for (int k = 0; k < 2; k++){
//    		//dinputkan :
////    		cout << "A[" << i << "][" << k << "] = ";
////    		cin >> a[i][k];
////    		cout << "B[" << i << "][" << k << "] = ";
////    		cin >> b[i][k];
//    		c[i][k] = a[i][k] + b[i][k];
//    		cout << c[i][k] << " ";
//		}
//		cout << endl;
////		cout << "Masukkan angka : ";
////      cin >> angka[i]; 
//    }
    
//    rata = jumlah / 5;
//    cout<<"\nRata-rata : "<<rata<<endl;

	int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrix2[2][2] = { 
        {1, 2},
        {3, 4}
    };
    int matrix3[2][2];

    // Perkalian matriks
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix3[i][j] = 0; // inisialisasi
            for (int k = 0; k < 2; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
	
	cin.get();
	return 0;
    
}

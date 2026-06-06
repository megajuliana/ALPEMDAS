#include <iostream>
using namespace std;

int main(){
	
//	int angka[5];
//	int max = angka[0];
//	float jumlah = 0;
//	
//	for(int i=0; i<5; i++){
//		cout << "masukkan angka indeks ke [ " << i << " ] = ";
//		cin >> angka[i];
//	}
//
//	for(int i=0; i<5; i++){ 
//		cout << "nilai pada indeks ke [ " << i << " ] = ";
//		cout << angka [i] << endl;
//		jumlah += angka[i];
//	}
//	
//	for(int i=0; i<5; i++){
//		if(angka[i] > max){
//			max = angka[i]; 
//		}
//	}
//	
//	float rata = jumlah / 5;
//	
//	cout << "\n angka terbesar adalah : " << max << "\n Dan rata ratanya adalah : " << rata << endl;
	
	// latihan array 2 
	int data[5] = {60, 75, 80, 55, 90};
	
	for(int i = 0; i<5; i++){
		if(data[i] > 60){
			cout << data[i] << " " << endl;
		}
	}

	cin.get();
	return 0;
}

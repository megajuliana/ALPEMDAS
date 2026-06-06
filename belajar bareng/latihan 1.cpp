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
	
	int data[3][3] = {
		{ 1, 2, 3},
		{ 4, 5, 6},
		{ 7, 8, 9 }
	};
		
		  
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
		  

	
	return 0;
}

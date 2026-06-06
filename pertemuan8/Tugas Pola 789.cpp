#include<iostream>
using namespace std;

int main(){
	 
    // POLA 1
    cout << "Pola Ke-1 : \n";
    for(int j = 1; j <= 6; j++){
        for(int i = 1; i <= 6; i++){
            cout << "* ";
        }
        cout << endl; 
    }
    
    cout << endl;
    // POLA 2
    cout << "Pola Ke-2 : \n";
    for(int j = 1; j <= 6; j++){ 
        for(int i = 1; i <= j; i++){
            cout << "* ";
        }
        cout << endl;
    }

	cout << endl;
    // POLA 3
    cout << "Pola Ke-3 : \n";
    for(int j = 1; j <= 6; j++){
        for(int i = 6; i >= j; i--){
            cout << "* ";
        }
        cout << endl;
    }

	cout << endl;
    // POLA 4
    cout << "Pola Ke-4 : \n";
	for(int j=1; j<=6; j++){
		for(int i=1; i<=j; i++){
				cout << " ";
		}
		for(int k=6; k>=j; k--){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	cout << "Pola Ke-5 : \n";
	for(int j=1; j<=6; j++){
		for(int i=6; i>=j; i--){
				cout << " ";
		}
		for(int k=1; k<=j; k++){
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
    // POLA 6
    cout << "Pola Ke-6 : \n";
    int x = 0;
    for(int j = 1; j <= 6; j++){
        for(int i = 6; i >= j; i--){
            cout << " ";
        }
        for(int k = 1; k <= (j + x); k++){
            cout << "*";
        }
        x++;
        cout << endl;
    } 

    // POLA 7
    cout << "Pola Ke-7 : \n";
	for(int j=6; j>=1; j--){
		for(int i=1; i<=6 - j; i++){
				cout << " ";
		}
		for(int k=1; k<=(2 * j - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

    // POLA 8
	cout << "Pola Ke-8:\n";
    int tinggi8 = 7;
    for (int bagian = 0; bagian < 2; bagian++) {
        for (int j = 1; j <= tinggi8; j++) {
            for (int spasi = tinggi8 - j; spasi > 0; spasi--) {
                cout << " ";
            }
            for (int bintang = 1; bintang <= (2 * j - 1); bintang++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // POLA 9
    int tinggi = 7;
    
    cout << "Pola Ke-9 : \n";
    // Bagian atas
    for(int i = 1; i <= tinggi; i++){
        for(int spasi = tinggi - i; spasi > 0; spasi--){
            cout << " ";
        }
        for(int bintang = 1; bintang <= (2*i - 1); bintang++){
            cout << "*";
        }
        cout << endl;
    }
    // Bagian bawah
    for(int i = tinggi - 1; i >= 1; i--){
        for(int spasi = tinggi - i; spasi > 0; spasi--){
            cout << " ";
        }
        for(int bintang = 1; bintang <= (2*i - 1); bintang++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

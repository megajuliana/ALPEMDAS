#include <iostream>
using namespace std;

int main()
{
	//pola1
	for(int i=1; i<=6; i++){
	    for(int j=1; j<=6; j++){
	        cout << "* ";
	    }
	    cout << endl;
	}
	
	cout <<"pola 2"<< endl;
	//pola2
	for (int j = 1; j <= 6; j++) {    
        for (int  i= 1; i <=j; i++) {  
            cout << "* ";
        }
        cout << endl;  
    }
    cout << endl;
    
    cout <<"pola 3"<< endl;
    //pola3
    for(int i=6; i>=1; i--){
	    for(int j=1; j<=i; j++){
	        cout << "* ";
	    }
	    cout << endl;
	}	
    cout << endl;
    
    cout << "pola 4"<< endl;
    //pola4
//    for(int i = 6; i >= 1; i++){
//	    for(int j = 1; j <= i; j--){
//	        cout << "* ";
//	    }
//	    cout << endl;
//	}
//	cout << endl;
	
	cout << "pola 5"<< endl;
//    //pola5
//    for(int i=5; i>=0; i--){
//	    for(int j=1; j<=6-i; j++){
//	        cout << "* ";
//	    }
//	    cout << endl;
//	}
//	cout << endl;
	
	cout << "pola 6"<< endl;
    //pola6
    for(int j=1; j<=6; j++){
	    for(int i=6; i>=j; i--){
	        cout << " ";
	    }
	    for(int k=1; k<=j*2-1; k++){
	        cout << "*";
	    }
	    cout << endl;
	}
	
	cin.get();
	return 0;
}

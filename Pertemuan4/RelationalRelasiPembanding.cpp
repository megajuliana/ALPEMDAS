#include <iostream>
using namespace std;

int main(){
	
	short a, b, hasil;
	
	a = 9;
	b = 7; 
	
	hasil = (a == b);
	cout << "a == b: " << hasil  << "\n" ;
	
	hasil = (a != b);
	cout << "a != b: " << hasil  << "\n" ;
	
	hasil = (a < b);
	cout << "a < b: " << hasil  << "\n" ;
	
	hasil = (a > b);
	cout << "a > b: " << hasil  << "\n" ;
	
	hasil = (a <= b);
	cout << "a <= b: " << hasil  << "\n" ;
	
	hasil = (a >= b);
	cout << "a >= b: " << hasil  << "\n" ;
	
	
	
	cin.get();
	return 0;
}

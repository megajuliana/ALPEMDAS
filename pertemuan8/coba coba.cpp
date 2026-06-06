#include<iostream>
using namespace std;

int main(){
	/*
	POLA 1
	* * * * * *
	* * * * * *
	* * * * * *
	* * * * * *
	* * * * * *
	* * * * * *
	*/
	cout << "Pola 1 \n" ;
	for(int j = 1; j <= 6; j++){
		for(int i = 1; i <= 6; i++){
			cout << "* ";
		}
		cout << endl;
	}
	
	cout << endl;
	/*
	POLA 2
	*
	**
	***
	****
	*****
	******
	*/
	cout << "Pola 2 \n" ;
	for(int j = 1; j <= 6; j++){
		for(int i = 1; i <= j; i++){
			cout << "* ";
		}
		
		cout << endl;
	}

	cout << endl;
	/*
	POLA 3
	******
	*****
	****
	**
	*
	*/
	cout << "Pola 3 \n" ;
	for(int j = 1; j <= 6; j++){
		for(int i = 6; i >= j; i--){
			cout << "* ";
		}
		
		cout << endl;
	}

	cout << endl;
	
	cout << "Pola 4 \n" ;
//	/*
//	POLA 4
//	*/
//	for(int j = 1; j <= 6; j++){
//		for(int i = 1; i < j; i++){
//			cout << " ";
//		}
//		
//		for(int k = 6; k >= j; k--){
//			cout << "*";
//		}
//		
//		cout << endl;
//	}
//
//	/*
//	POLA 5;
//	      *
//         **
//        ***
//       ****
//      *****
//	 ******
//	 */
//	for(int j = 1; j <= 6; j++){
//		for(int i = 6; i > j; i--){
//			cout << " ";
//		}
//		for(int k = 1; k <=j; k++){
//			cout << "*";
//		}
//		
//		cout << endl;
//	}
//
//
//		/*
//	POLA 6
//		 *
//		* *
//	   * * *
//	  * * * *
//	 * * * * *
//	* * * * * *
//	     */
//	int x = 0;
//	for(int j = 1; j <= 6; j++)
//	{
//		for(int i = 6; i >= j; i--){
//			cout << " ";
//		}
//		
//		for(int k = 1; k <= (j+x); k++)
//		{
//			cout << "*";
//		}
//		x++;
//		cout << endl;
//	}
//
//	/*
//	Latihan POLA 7
//	* * * * * *
//	 * * * * *
//	  * * * *
//	   * * *
//	    * *
//	     *
//	     */
//
////	int x = 0;
//	for(int j = 6; j >= 1; j++){
//		for(int i = 1; i <= j; i++){
//			cout << " ";
//		}
//		
//		for(int k = 6; k <= (j-x); k--){
//			cout << "*";
//		}
//		x++;
//		cout << endl;
//	}

	
	return 0;
}

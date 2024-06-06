#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	cout << "Enter first value: ";
	cin >> a ;
	
	cout <<"Enter second value: ";
	cin >> b ;
	
	char operation;
	cout << "Enter the operation to be performed for calculation: ";
 	cin >> operation  ;
 	
 	switch(operation){
 		case '+':
 			cout << "Addition of two no is: " << a+b;
 			break;
 		case '-':
 			cout << "Substraction of two no is: "<< a-b;
 			break;
 		case '*':
 			cout << "Multiplication of two no is: "<< a*b;
 			break;
 		case '/':
 			cout << "Division is: "<< a/b;
 		    break;
 		case '%':
 			cout << "Modulus is: "<< a%b;
 			break;
 		case 'i':
 			cout << "Increment is: " << ++a << ", " << ++b;
 			break;
 		case 'd':
 			cout << "Decrement is: " << --a << ", " << --b;
 			break;
 		case 's':
 			cout << "Square root is: " << sqrt(a) << ", " << sqrt(b);
 			break;
 		case 'l':
 			cout << "Logorithm is: " << log(a) << ", " << log(b);
 			break;
		default :
		    cout << "Invalid operation";
			break; 			
	 }
 	
	return 0;
}


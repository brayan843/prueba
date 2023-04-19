#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Introduce un número entero positivo: ";
	cin >> n;
	long long factorial = 1;
	for(int i = 1; i <=n; ++i) {
		factorial *= i;
	}
	cout << "Factorial de " << n << " = " << factorial;    
	return 0;
}

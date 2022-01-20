# include <iostream>

using namespace std;

int resta(int a, int b){
	int value = 0;
	while (a > b){
		b++;
		value++;
	}
	return value;
}

int multiplicacion(int a, int b){
	int value = 0;
	while (a){
		a--;
		value += b;
	}
	return value;
}

int division(int a, int b){
	int value = 0;
	while (a >=  b){
		value++;
		a -= b;
	}
	cout << "7 / 3 = " << value << "(" << a << ")" << endl;
	return value;
}

int potencia(int a, int b){
	int value = 1;
	while (b){
		value *= a;
		b--;
	}
	return value;
}

int factorial(int a){
	int value = 1;
	for (int i=1; i<= a; i++){
		value *= i;		
	}
	return value;
}

void nprimo(int n){
	bool primo = true;
	for (int i = 2; i <= n/2 && primo; i++){
		if (n % i == 0) primo = false;
	}
	if (primo) cout << n << " es un número primo " << endl;
	else cout << n << " no es un número primo " << endl;
}

void nperfecto(int n){
	int value = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0) value += i;
	}
	if (value == n) cout << n << " es un número perfecto " << endl;
	else cout << n << " no es un número perfecto" << endl;
}

void namigos(int a, int b){
	int sumA = 0;
	for (int i = 1; i <= a / 2; i++){
		if (a % i == 0) sumA += i;
	}
	int sumB = 0;
	for (int i = 1; i <= b / 2; i++){
		if (b % i == 0) sumB += i;
	}
	if((a == sumB)&&(b == sumA)) cout << a << " y " << b << " son números amigos " << endl;
	else cout << a << " y " << b << " no son números amigos " << endl;
}

void nguay(int n){
	int suma = 0;
	bool b = false;
	for (int i = 1; i < n && b == false; i++){
		suma += i;
		if (suma == n) b = true;
	}
	if (b) cout << n << " es un número guay " << endl;
	else cout << n << " no es un número guay " << endl;
}

int main(){
	setlocale (LC_CTYPE, "Spanish");
	cout << "5 - 1 = " << resta (5, 1) << endl;
	cout << "5 x 3 = " << multiplicacion (5,3) << endl;
	division(7,3);
	cout << "2 ^ 3 = " << potencia (2, 3) << endl;
	cout << "!5 = " << factorial (5) << endl;
	nprimo(7);
	nperfecto(28);
	namigos(220, 284);
	nguay(6);
}
	

#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>

using namespace std;

void verItems(){
	int curso[2];
	
	curso[0] = 19;
	curso[1] = 20;
	curso[2] = 21;
	
	for (int i = 0;i < 3;i++){
		cout<<"En el curso "<<i<<" hay "<<curso[i]<<" estudiantes"<<endl;
	}
	cout<<"--------------------------------"<<endl;
	int array[6]{ 2, 1, 0, -1, -2 };
	
	for (int i = 0;i < 6;i++)cout<<"En la posici�n "<<i<<" el valor es "<< array[i]<<endl;
	cout<<"--------------------------------"<<endl;

}

void buscarItem(){
	int array[5] = { 2, 1, 0, -1, -2 };
	int objetivo = -1;
	
	for (int i = 0; i < 6;i++){
		if (objetivo == array[i])cout<<"El objetivo se encuentra ubicado en la posici�n "<<i<<endl;
	}
}

void arregloD(){
	int tamanoD;
	cout<<"\nIngrese el n�mero de elementos en el arreglo: ";
	cin>>tamanoD;
	cout<<"--------------------------------"<<endl;
	int *array = new int[tamanoD];
	
	for (int i = 0;i < tamanoD;i++){
		cout<<"Ingrese el valor del elemento "<<i<<": ";
		cin>>array[i];
	}
	cout<<"--------------------------------"<<endl;
	for (int i = 0;i < tamanoD;i++){
		cout<<"En la posici�n "<<i<<" el valor es: "<<array[i]<<endl;
	}
}

void palindromo(char *string){
	bool pal = true;
	
	for (int i = 0;i < strlen(string) / 2 && pal;i++){
		if (string[i] != string[strlen(string)-i-1])
			pal = false;
	}
	
	if (pal)cout<<endl<<"-"<<string<<"-"<<" es pal�ndromo"<<endl;
	else cout<<endl<<"-"<<string<<"-"<<" no es pal�ndromo"<<endl;
	cout<<"--------------------------------"<<endl;
}

void strings(char *nombre){
	cout<<"Texto: "<<nombre<<endl;
	cout<<"Longitud del texto: "<<strlen(nombre)<<endl;
	strlwr(nombre);
	cout<<"Texto en min�sculas: "<<nombre<<endl;
	cout<<"Texto invertido: "<<_strrev(nombre);
}

void numeroD(){
	float numeros[5];
		
	numeros[0] = 2.1;
	numeros[1] = 2.2;
	numeros[2] = 2.3;
	numeros[3] = 2.4;
	numeros[4] = 2.5;
	
	float mayor = 0, menor, prom, acom;
	
	for (int i = 0;i < 5;i++){
		cout<<"Los n�meros a calcular son: "<<numeros[i]<<endl;
		cout<<"--------------------------------"<<endl;
		if (mayor < numeros[i])
			mayor = numeros[i];
	}
	menor = mayor;
	for (int i = 0;i < 5;i++){
		if (menor > numeros[i])
			menor = numeros[i];	
	}
	
	for (int i = 0;i < 5;i++){
		acom += numeros[i];
	}
	
	cout<<endl<<"El n�mero mayor es: "<<mayor<<endl;
	cout<<"El n�mero menor es: "<<menor<<endl;
	cout<<"El valor promedio entre los n�meros es: "<<acom/5<<endl;
}

int main(){
	setlocale (LC_CTYPE, "Spanish");
	cout<<"===== Lecci�n: Arrays Est�ticos =====\n"<<endl;
	verItems();
	buscarItem();
	cout<<"\n===== Lecci�n: Arrays Din�micos ====="<<endl;
	arregloD();
	cout<<"\n===== Lecci�n: Cadenas de Caracteres ====="<<endl;
	char string[] = "ligaresseragil";
	palindromo(string);
	char nombre[] = "Johan Cano";
	strings(nombre);
	cout<<"\n===== EJERCICIO ====="<<endl;
	numeroD();
}

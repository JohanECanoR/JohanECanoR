/*Ajustar el ejercicio del salario del empleado, implementado una estructura decisional encadenada para:

1)  Calcular una nueva variable en el algoritmo denominada bono por horas, que cumpla la siguiente lógica:

10 - 25 horas.  Bono de salario del 5%
26 - 30 horas.  Bono de salario del 10%
31 - 50 horas.  Bono de salario del 25%
51 horas en adelante.  Bono del 50% del valor del bruto

2)  Usar la estructura de decisión anidada, para definir un descuento si se cumplen los siguientes filtros:

a)  Si el número de horas del empleado fue mayor a 40
b)  Si el salario bruto es mayor a 150000
c)  Si la edad del empleado es mayor a 35 años

  Retención del 5% sobre el valor del salario neto y restarlo al valor de ese neto

Si la condición del 2 filtro no se cumple, solo se hace esa nueva retención del 2%

Mostrar los resultados, el nuevo bono y el nuevo descuento en la salida por pantalla del algoritmo*/
# include <iostream>

using namespace std;

void bonoHoras(){
	// Declaración de las variables
	int horas;
	
	cout<<"Por favor ingrese las horas trabajadas: ";
	cin>>horas;
	
	if (horas >= 1 && horas <= 9){
		cout<<"--------------------------------"<<endl;
		cout<<"Su bono de salario es del 0%"<<endl;
		cout<<"--------------------------------"<<endl;
	}		
	else
		if (horas >= 10 && horas <= 25){
			cout<<"--------------------------------"<<endl;
			cout<<"Su bono de salario es del 5%. "<<endl;
			cout<<"--------------------------------"<<endl;
		}
		else 
			if (horas >= 26 && horas <= 30){
				cout<<"--------------------------------"<<endl;
				cout<<"Su bono de salario es del 10%. "<<endl;
				cout<<"--------------------------------"<<endl;
			}	
			else 
				if (horas >= 31 && horas <= 50){
					cout<<"--------------------------------"<<endl;
					cout<<"Su bono de salario es del 25%."<<endl;
					cout<<"--------------------------------"<<endl;
				}
				else 
					if (horas >= 51){
						cout<<"--------------------------------"<<endl;
						cout<<"Su bono de salario es del 50% del valor del bruto"<<endl;
						cout<<"--------------------------------"<<endl;
					}		
}

void descuento(){
	int edad, valorHora, horasTrabajadas, retencion, salarioNeto;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese el valor promedio de la hora de trabajo: ";
	cin>>valorHora;
	cout<<"Ingrese las horas trabajadas: ";
	cin>>horasTrabajadas;
	
	int salarioBruto = valorHora * horasTrabajadas;
	cout<<"El salario bruto calculado fue de "<<salarioBruto<<endl;
	
	if (horasTrabajadas > 10){
		if (salarioBruto >= 150000){
			if (edad >= 35){
				int retencion = (salarioBruto * 5) / 100;
				int salarioNeto = salarioBruto - retencion;
				cout<<"La retención del salario neto es de "<<retencion<<endl;
				cout<<"Su salario neto es de "<<salarioNeto<<endl;
			}
			else
				cout<<"La edad no es suficiente."<<endl;
		}
		else
			retencion = (salarioBruto * 2) / 100;
			salarioNeto = salarioBruto - retencion;
			cout<<"La retención del salario neto es de "<<retencion<<endl;
			cout<<"Su salario neto es de "<<salarioNeto<<endl;
	}
	else
		cout<<"Las horas trabajadas no son suficientes. ";	
}

int main(){
	setlocale (LC_CTYPE, "Spanish");
	bonoHoras();
	descuento();
}

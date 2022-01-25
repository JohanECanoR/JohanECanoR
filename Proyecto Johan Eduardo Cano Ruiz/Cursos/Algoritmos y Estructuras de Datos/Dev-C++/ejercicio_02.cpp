# include <iostream>

using namespace std;

void estructurasDatos(){
	struct FAMILIA {
		int edad;
		float altura;
	};
	
	FAMILIA padre;
	padre.edad = 41;
	padre.altura = 1.75;
	
	cout<<endl<<"Edad del padre: "<<padre.edad<<"\nAltura del padre: "<<padre.altura<<endl;
	
	union FAMILIA_2 {
		int edad;
		float altura;
	};
	
	FAMILIA_2 madre;
	madre.edad = 38;
	//madre.altura = 1.68;
	
	cout<<endl<<"Edad de la madre: "<<madre.edad<<endl;
	cout<<endl<<"Tamaño dato padre (struct): "<<sizeof(padre)<<"\nTamaño dato madre (union): "<<sizeof(madre)<<endl;
	
	enum dias { lunes = 1, martes, miercoles, jueves, viernes, sabado, domingo };
	enum dias hoy = jueves;
	
	enum revision { muymalo = 1, malo, normal, bueno, excelente };
	enum revision curso = excelente;
	
	//cout<<endl<<lunes;
	cout<<endl<<"Nivel de comportamiento del curso: "<<curso;
}

int main(){
	setlocale (LC_CTYPE, "Spanish");
	estructurasDatos();
	
}

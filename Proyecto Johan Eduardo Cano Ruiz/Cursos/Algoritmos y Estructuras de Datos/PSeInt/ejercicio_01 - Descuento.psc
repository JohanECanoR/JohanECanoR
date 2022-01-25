Algoritmo descuento
	Escribir 'Ingrese su edad: '
	Leer edad
	Escribir 'Ingrese el valor promedio de la hora de trabajo: '
	Leer valorHora
	Escribir 'Ingrese las horas trabajadas: '
	Leer horasTrabajadas
	salarioBruto <- valorHora*horasTrabajadas
	Escribir 'El salario bruto calculado fue de ',salarioBruto
	Si horasTrabajadas>40 Entonces
		Si salarioBruto>=150000 Entonces
			Si edad>=35 Entonces
				retencion <- (salarioBruto*5)/100
				salarioNeto <- salarioBruto-retencion
				Escribir 'La retención del salario neto es de ',retencion
				Escribir 'Su salario neto es de ',salarioNeto
			SiNo
				Escribir 'La edad no es suficiente.'
			FinSi
		SiNo
			retencion <- (salarioBruto*2)/100
			salarioNeto <- salarioBruto-retencion
			Escribir 'La retención del salario neto es de ',retencion
			Escribir 'Su salario neto es de ',salarioNeto
		FinSi
	SiNo
		Escribir 'Las horas trabajadas no son suficientes'
	FinSi
FinAlgoritmo

Algoritmo bonoPorHoras
	Escribir 'Ingrese las horas trabajadas: '
	Leer horas
	Si horas>=1 Y horas<=9 Entonces
		Escribir 'Su bono de salario es del 0%'
	SiNo
		Si horas>=10 Y horas<=25 Entonces
			Escribir 'Su bono de salario es del 5%. '
		SiNo
			Si horas>=26 Y horas<=30 Entonces
				Escribir 'Su bono de salario es del 10%. '
			SiNo
				Si horas>=31 Y horas<=50 Entonces
					Escribir 'Su bono de salario es del 25%.'
				SiNo
					Si horas>=51 Entonces
						Escribir 'Su bono de salario es del 50% del valor del bruto'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo

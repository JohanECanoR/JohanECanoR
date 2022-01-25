# include <iostream>
# include <ctime>

using namespace std;

//Lección "Implementacion en Código del Algoritmo de Intercambio (BubbleSort)"

void byBubbleSort() {

    //int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;

    int rounds = 0;

    bool ord = false;



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";



    while (!ord) {

        ord = true;

        for (int i = 0; i < size - 1 - rounds; i++) {

            if (v[i] > v[i + 1]) {

                aux = v[i + 1];

                v[i + 1] = v[i];

                v[i] = aux;

                ord = false;

            }

        }

        rounds++;

    }



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

}

// Lección "Implementacion en Codigo de Algoritmo por Selección"

void bySelectionSort() {

    //int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;

    int PosMin;



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";



    for (int i = 0; i < size; i++) {

        PosMin = i;

        for (int j = i + 1; j < size; j++) {

            if (v[PosMin] > v[j])

                PosMin = j;

        }

        aux = v[i];

        v[i] = v[PosMin];

        v[PosMin] = aux;

    }



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

}

// Lección "Implementación en Código de Algoritmo de Inserción"

void byInsertion() {

    //int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";



    for (int i = 1; i < size; i++) {

        aux = v[i];

        int j;

        for (j = i - 1; j >= 0 && v[j] > aux; j--)

            v[j + 1] = v[j];

        v[j + 1] = aux;

    }



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

}

// Lección "Medición de Tiempo de Ejecución de un Algoritmo"

unsigned t0, t1;

//    t0 = clock();



// PIEZA DE CÓDIGO QUE VAYAMOS A MEDIR



   // t1 = clock();

   // double time = (double(t1 - t0) / CLOCKS_PER_SEC);



    //cout << endl << endl << "Execution Time byInsertion: " << time << endl;

// Lección "Proyecto de Creación de un Algoritmo Propio de Ordenación"

void byJJ() {

    unsigned t0, t1;

    t0 = clock();



    //int v[] = { 2,7,1,4, 5,8,0};

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;

    int PosMin;

    int PosMax;

    int PosFinal;

    PosFinal = size - 1;



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";



    for (int i = 0; i < size / 2; i++) {



        PosMin = i;

        PosMax = i;



        for (int j = i; j <= PosFinal; j++) {

            if (v[j] > v[PosMax]) PosMax = j;

            if (v[j] < v[PosMin]) PosMin = j;

        }



        aux = v[PosMin];

        v[PosMin] = v[i];

        v[i] = aux;



        if (PosMax == i) PosMax = PosMin;



        aux = v[PosFinal];

        v[PosFinal] = v[PosMax];

        v[PosMax] = aux;

        PosFinal--;



        //cout << endl;

        //for (int n = 0; n < size; n++) cout << v[n] << " ";

    }



    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

    t1 = clock();



    double time = (double(t1 - t0) / CLOCKS_PER_SEC);

    cout << endl << endl << "Execution Time byJJ: " << time << endl;

}	

int main(){
	byBubbleSort();
	bySelectionSort();
	byInsertion();
	byJJ();
}

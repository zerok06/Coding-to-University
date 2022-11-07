#include <iostream>
#include <math.h>
#include <stdlib.h>  

using namespace std;

int main(){
	int lengthMatriz, maxValue, minValue;
	int arrCounter[10];
	
	cout << "Ingrese el numero de elementos de la matriz: ";
	cin >> lengthMatriz;
	/*cout << "Ingrese el valor maximo: ";
	cin >> maxValue;
	cout << "Ingrese el valor minimo: " ;
	cin >> minValue;
	*/
	
	int matriz[lengthMatriz];
	
	for(int i = 0; i < lengthMatriz; i++){
		matriz[i] = rand() % 10 + 1;
	}
	
	for(int i = 0; i < lengthMatriz; i++){
		int currentValue = matriz[i];
		int currentCounter = 0;
		for(int f = 0;f < lengthMatriz; f++){
			if(currentValue == matriz[f]){
				currentCounter++;
			}
		}
		cout << "'"<<currentValue<<"'"<< " tiene " <<currentCounter<<" coincidencias."<<endl;
	}
	
	//Mostrar los datos
	for(int i = 0; i < lengthMatriz; i++){
		cout << matriz[i]<<endl;
	}
	
	
	return 0;
}


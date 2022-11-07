#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


int main(){
	srand(time(0));
	int numPositions;
	cout << "Ingrese el numero de posiciones:"<<endl;
	cin >> numPositions;
	int numbers[numPositions];
	
	for(int i = 0; i < numPositions; i++){
		numbers[i] = rand() % 100;
	}
	
	//Burbuja
	for(int i = 0; i < numPositions; i ++){
		for(int j = 0; j < numPositions; j++){
			if(numbers[j + 1] < numbers[j]){
				int aux = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1 ] = aux;
			}
		}
	}
	
	for(int i = 0; i < numPositions; i++){
		cout << "[" << i + 1 << "] => "<< numbers[i]<<endl;
	}
	
	
	return 0;
}

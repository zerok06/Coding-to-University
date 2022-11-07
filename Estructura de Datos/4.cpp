#include <iostream>
#include <math.h>
#include <stdlib.h> 

using namespace std;



int search(int arr[],int value, int len){
	for(int i = 0;i < len; i++){
		cout << "in " << arr[i] <<endl;
		if(arr[i] == value){
			return i;
		}
	}
}

int[] addValue(int arr, int value, int position){
	for(int i = sizeof(arr) / sizeof(int);i > -)
}

int main(){
	int lengthArr, maxValue,minValue;
	cout << "Ingrese le numero de posiciones: ";
	cin >> lengthArr>>maxValue>>minValue;
	
	int Arr[lengthArr];
	for(int i = 0;i < lengthArr; i++){
		Arr[i] = rand() % maxValue + minValue;
	}
	for(int i = 0; i < lengthArr; i++){
		cout << Arr[i]<<endl;
	}
	
	cout << search(Arr, 1, lengthArr);
	
}


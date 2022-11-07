#include <iostream>
#include <math.h>
#include <stdlib.h> 
using namespace std;

void printArr(int[] arr){
	for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++ ){
		
	}
}

int main(){
	int lengthArr;
	cout << "Ingrese el numero de elemetos:";
	cin >> lengthArr;
	int arr[lengthArr];
	for(int i = 0;i < lengthArr;  i++){
		arr[i] = rand() % 200 - 100;
	}
	return 0;
}


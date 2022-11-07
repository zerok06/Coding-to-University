//Completar: tenemos que hacer un codigo que mienstras se va a generado vamos verificando


#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <ctime>
#include <string>

using namespace std;

void printArr(char arr[3][3]){
	for(int i= 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "[" << arr[i][j]<<"]";
		}
		cout <<endl;
	}
}
int validArr (char arr[3][3],char c){
	int v = 0;
	//horinzontales
	for(int i = 0; i < 3; i++){
		if((arr[i][0] == c && arr[i][1] == c && arr[i][2] == c)){
			v = 1;
		}
	}
	//verticales
	for(int i = 0; i < 3; i++){
		if((arr[0][i] == c && arr[1][i] == c && arr[2][i] == c)){
			v = 1;
		}
	}
	//diagolanes
	int f = 1;
	for(int i = 0; i < 3; i++){
		if(arr[f-1][f-1] == c && arr[f][f] == c && arr[f+1][f+1]){
			v = 1;
		}
	}
	return v;
}

int main(){
	srand(time(NULL));
	char arr[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	char currentValue;
	for(int i= 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int valueRandom = (rand() % 2) == 1? 'O': 'X';
			arr[i][j] = valueRandom;
			if(validArr(arr,valueRandom) == 1){
				cout << "Juego terminado"<<endl;
				break;
			}
		}
	}
	printArr(arr);
	char statusX = 'P';
	char statusO = 'P';
	
	if(validArr(arr, 'X') == 1){
		statusX = 'G';
	}else{
		statusX = 'P';
	}
	
	if(validArr(arr, 'O') == 1){
		statusO = 'G';
	}else{
		statusO = 'P';
	}
	
	cout << "X: "<< statusX <<endl;
	cout << "O: "<< statusO <<endl;
	return 0;
}


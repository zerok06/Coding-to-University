#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h> 
#include <ctime>

using namespace std;


char game[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
int gameFinal = 0;

void validWinner (char c, string name){
	int v = 0;
	for(int i = 0; i < 3; i ++){
		if(game[i][i] == c && game[i][i + 1] == c && game[i][i + 2] == c){
			v = 1;
		}
	}
	for(int i = 0; i < 3; i ++){
		if(game[i][i] == c && game[i + 1][i] == c && game[i + 2][i] == c){
			v = 1;
		}
	}
	for(int i = 0; i < 2; i ++){
		if((game[i][i] == c && game[i + 1][i + 1] == c && game[i + 2][i + 2] == c) || (game[i][i + 2] == c && game[i + 1][i + 1] == c && game[i + 2][i + 2] == c)){
			v = 1;
		}
	}
	if(v == 1){
		cout << "Winner: "<< name <<endl;
	}
}

void handlerGame(int x, int y, char jugador){
	game[x - 1][y - 1] = jugador;
}

bool validStatus(int x , int y, char c){
	
	if(game[x - 1][y - 1] == c){
		return true;
	}else{
		return false;
	}
	
}

void machineGame(){
	int x = rand() % 3 + 1;
	int y = rand() % 3 + 1;
	while(validStatus(x,y,'M') == 1){
		cout << validStatus(x,y,'M')<<endl;
		x = rand() % 3 + 1;
		y = rand() % 3 + 1;
	}
	cout << x << ":"<<y<<endl;
	handlerGame(x,y,'M');
}

void printGame (){
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3;j++){
			cout << '[' << game[i][j] << ']';
		}
		cout << endl;
	}
}



int main(){
	srand(time(NULL));
	string namePlayer;
	int counter = 0;
	cout << "Ingrese su nombre: ";
	cin >> namePlayer;
	
	printGame();
	system("PAUSE");
	char initialPlayer = 'J';
	while(counter < 9){
		cout<<"Jugador: "<<initialPlayer<<endl;
		
		switch(initialPlayer){
			case 'J':
				int positionX, positionY;
				cout << "Ingrese la posicion (x,y):" << endl;
				cin >> positionX;
				cin >> positionY;
				cout << "Jugador!"<<endl;
				if(validStatus(positionX,positionY,'X') == false){
					handlerGame(positionX,positionY, 'X');
					counter++;
					initialPlayer = 'M';
					printGame();
					validWinner('X',namePlayer);
				}else{
					cout << "Ingrese un posicion vacia!"<<endl;
				}
				break;
			case 'M':
				cout << "Maquina!"<<endl;
				machineGame();
				counter++;
				initialPlayer = 'J';
				printGame();
				validWinner('M',namePlayer);
				
				break;
			default:
				break;
		}
		if(gameFinal == 1){
			break;
		}
		system("PAUSE");
		system("CLS");
	}
	return 0;
}


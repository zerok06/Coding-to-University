#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>

using namespace std;

int main(){
	string text = "";
	int counter = 0;
	bool exit = false;
	while(exit == false){
		char currentValue = getch();
		cout << currentValue;
		if(int(currentValue) == 65 || int(currentValue) == 97){
			counter++;
			
		}
		text += currentValue;
		if(int(currentValue) == 46){
			break;
		}
	}
	cout <<endl << "Numero de coincidencias: "<< counter<<endl;
	return 0;
}

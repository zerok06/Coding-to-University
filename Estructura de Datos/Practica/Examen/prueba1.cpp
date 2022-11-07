#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;


int getCadena(){
	
	string cadena = "";
	bool isComplete =  false;
	int count = 0;
	while (isComplete == false){
		int letter = getch();
		cout << letter <<endl;
		switch(letter){
			case 65:
				count = count + 1;
				break;
			case 66:
				count = count + 1;
				break;
			case :
				count = count + 1;
				break;
			case 65:
				count = count + 1;
				break;
			case 65:
				count = count + 1;
				break;
			case 65:
				count = count + 1;
				break;
			case 65:
				count = count + 1;
				break;
		}
		if (int(letter) == 46){
			isComplete = true;
			continue;
		}
		cadena = cadena + char(letter);
	}
	return count;	
}



int main(){
	int num = getCadena();
	cout << num;
	return 0;
}

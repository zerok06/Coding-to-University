#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int number[1000];
	for(int i = 0; i < 1000; i++){
		number[i] = rand() % 999;
	}
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < 1000-i;j++){
			if(number[j] >= number[j + 1]){
				int aux = number[j + 1];
				number[j + 1] = number[j];
				number[j] = aux;
			}
		}	
	}
	for(int i = 0; i < 1000;i++){
		cout << "["<<i<<"]:  " << number[i]<<endl;
	}
	return 0;
}

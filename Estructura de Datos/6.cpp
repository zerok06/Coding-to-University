#include <iostream>
#include <math.h>
#include <stdlib.h> 

using namespace std;

int main(){
	
	int M[2][3], N[2][3], S[2][3];
	
	cout << "LLene la matriz M";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 3; j++){
			cin >> M[i][j];
		}
	}
	cout << "LLene la matriz N";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 3; j++){
			cin >> N[i][j];
		}
	}
	cout << "Suma:";
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 3; j++){
			S[i][j] = M[i][j] + N[i][j];
		}
		cout <<endl;
	}
	
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 3; j++){
			cout << "[" << S[i][j] <<"]";
		}
		cout <<endl;
	}
	
	return 0;
}


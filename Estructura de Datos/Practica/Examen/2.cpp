#include <iostream>
#include <cmath>

using namespace std;

string converter(int number, int base){
	string result;
	bool complete = false;
	int entero = number;
	int resto = 0;
	while(complete == false){
		if(base == 2):
			result += "1"
		
		resto = entero % base;
		entero = entero / base;
		result = result + ;
		if( entero < base ){
			break;
		}
	}
	
	cout << result;
	return result; 
}

int main(){
	cout << converter(10,2);
	return 0;
}

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>

using namespace std;

char* upperCase (char* c){
	for(int i = 0; i < strlen(c); i++){
		if(c[i] > 96 && c[i] < 123){
			c[i] = c[i] - 32;
		}
		if(c[i] == -92){
			c[i] = -92;
			
		}
	}
	return c;
}

int compare (char* c1, char* c2){
	int flag = 1;
	if(strlen(c1) != strlen(c2)){
		flag = 0;
	}
	for(int i = 0; i < strlen(c1); i++){
		if(c1[i] != c2[i]){
			flag = 0;
			break;
		}
	}
	return flag;
}

void concat(char *c1,char *c2, char *c3){
	int i;
	for(i = 0; i < strlen(c1); i++){
		c3[i] = c1[i];
	}
	for(; i < strlen(c1) + strlen(c2); i++){
		c3[i] = c2[i - strlen(c1)];
	}
	c3[i] = 'x0';
}

int buscar ( char * cad,char * subc){
	int i,j,flag;
	for(i = 0; i < strlen(cad); i++){
		if(cad[i] == subc[i]){
			j++;
			if(j == strlen(subc)){
				flag = 1;
				break;
			}
			if(cad[i + 1] != subc[j]){
				j = 0;
			}
		}
	}
	return flag;
}


int main(){
	char t;
	//char* c1[20];
	//char* c2[20];
	//t = getch();
	//char *c1 [20] = getch();
	//char *c2 [20] = getch();
	//c2 = getch();
	
	cout << buscar("asd", "s");
	
	return 0;
}


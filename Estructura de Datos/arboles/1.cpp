#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct hoja{
	char letter;
	struct hoja *right;
	struct hoja *left;
};

typedef struct hoja *arbol;

arbol crearHoja(char letra){
	arbol nuevo = new(struct hoja);
	nuevo->letter = letra;
	nuevo->	left = nuevo->right = NULL;
	return nuevo;
}
void insertHoja(arbol &init, char letra){
	if(init == NULL){
		init =  crearHoja(letra);
	}else{
		if(int(letra) < int(init->letter)){
			insertHoja(init->left, letra);
		}else if(int(letra) > int(init->letter)){
			insertHoja(init->right, letra);
		}
	}
}

void mostrar(arbol &init){
	if(init != NULL){
		mostrar(init->left);
		cout << init->letter << " ";
		mostrar(init->right);
	}
}
void prefija(arbol init){
	if(init != NULL){
		cout << char(init->letter) << " ";
		prefija(init->left);
		prefija(init->right);
	}
}
void postfija(arbol init){
	if(init != NULL){
		postfija(init->left);
		postfija(init->right);
		cout << char(init->letter) << " ";
	}
}
void infija(arbol init){
	if(init != NULL){
		infija(init->left);
		cout << char(init->letter) << " ";
		infija(init->right);
	}
}



int main(){
	arbol raiz = NULL;
	insertHoja(raiz, '+');
	insertHoja(raiz, '4');
	insertHoja(raiz, '3');
	prefija(raiz);
	cout<<endl;
	postfija(raiz);
	cout<<endl;
	infija(raiz);
	return 0;
}
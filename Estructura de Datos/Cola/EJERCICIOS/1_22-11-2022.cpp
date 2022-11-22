#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct node{
	string name;
	int time;
	struct node *next;
};

typedef struct node *Node;

void printNode(Node nodo){
	cout << "Nombre_: " << nodo->name << " Tiempo_: "<< nodo->time<<endl;
}

Node createNode(string nombre, int tiempo){
	Node newNode = new(struct node);
	newNode->name = nombre;
	newNode->time = tiempo;
	newNode->next = NULL;
	return newNode;
}

class linkedList{
	private:
		int len = 0;
		Node init = NULL;
	public:
		linkedList(){
			
		}
		linkedList(Node inicio){
			init = inicio;
		}
		void push(Node newNode){
			if(init == NULL){
				init = newNode;
				len++;
			}else{
				Node aux = init;
				init = newNode;
				init->next = aux;
				len++;
			}
		}
		Node pop(){
			Node deleteNode = NULL;
			if(init->next == NULL){
				deleteNode = init;
				init = NULL;
				len--;
			}else{
				Node currentNode = init;
				while(currentNode->next->next != NULL){
					currentNode = currentNode->next;
				}
				deleteNode =  currentNode->next;
				deleteNode->next = NULL;
				currentNode->next = NULL;
				len--;
			}
			return deleteNode;
		}
		Node pop(int number){
			Node deleteNode;
			if(len < number){
				cout << "La posicion es inaccesible!"<<endl;
			}else{
				Node currentNode = init;
				for(int i = 0; i < number - 1; i++){
					currentNode = currentNode->next;
				}
				deleteNode = currentNode->next;
				currentNode->next = NULL;
			}
			return deleteNode;
		}
		void print(){
			if(len <= 0){
				cout << "Lista vacia!"<<endl;
			}else{
				Node currentNode = init;
				for(int i = 0; i < len; i++){
					cout << i + 1 << "-" << "Nombre: "<< currentNode->name << " Time: "<< currentNode->time <<endl;
					currentNode = currentNode->next;
				}
			}
		}
		void printOne(){
			if(len <= 0){
				cout << "Lista vacia!"<<endl;
			}else{
				Node currentNode = init;
				for(int i = 0; i < len; i++){
					cout << currentNode->name <<endl;
					currentNode = currentNode->next;
				}
			}
		}
		int getLength(){
			return len;
		}
		
};


int main(){
	// BANCO "TUPLATITA.PE"
	string menu = "+-------------------------------+\n|+-----------------------------+|\n||     BANCO 'TUPLATITA.PE'    ||\n|+-----------------------------+|\n+-------------------------------+";
	string cajeros = "+---------------------------------------+\n|	1	2	3	4	|\n+---------------------------------------+";
	Node personita1 =  createNode("Javier",3);
	Node personita2 =  createNode("Jorge",2);
	Node personita3 =  createNode("Juan",4);
	Node personita4 =  createNode("Flor",5);
	Node personita5 =  createNode("Estefani",1);
	Node personita6 =  createNode("Ruth",3);
	Node personita7 =  createNode("beto",2);
	Node personita8 =  createNode("Max",3);
	Node personita9 =  createNode("Carlos",1);
	linkedList cola;
	linkedList cajero1;
	linkedList cajero2;
	linkedList cajero3;
	linkedList cajero4;
	cola.push(personita1);
	cola.push(personita2);
	cola.push(personita3);
	cola.push(personita4);
	cola.push(personita5);
	cola.push(personita6);
	cola.push(personita7);
	cola.push(personita8);
	cola.push(personita9);
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int tiempoDe = 1;
	while(cola.getLength() != 0){
		cout << "Tiempo: "<< tiempoDe <<endl;
		cout << menu << endl;
		cout << cajeros<< endl;
		if(c1 == 0){
			Node aux = cola.pop();
			if(aux != NULL){
				c1 = aux->time;
				cajero1.push(aux);
				cout << "     ";
				cajero1.printOne();
				cajero1.pop();
			}
		}
		if(c2 == 0){
			Node aux = cola.pop();
			if(aux != NULL){
				c2 = aux->time;
				cajero2.push(aux);
				cout << "\t     ";
				cajero2.printOne();
				cajero2.pop();
			}
		}
		if(c3 == 0){
			Node aux = cola.pop();
			if(aux != NULL){
				c3 = aux->time;
				cajero3.push(aux);
				cout << "\t\t     ";
				cajero3.printOne();
				cajero3.pop();
			}
		}
		if(c4 == 0){
			Node aux = cola.pop();
			if(aux != NULL){
				c4 = aux->time;
				cajero4.push(aux);
				cout << "\t\t\t     ";
				cajero4.printOne();
				cajero4.pop();	
			}
		}
		cout << "**********************************"<<endl;
		cout << "************COLA ACTUAL***********"<<endl;
		cout << "**********************************"<<endl;
		cola.print();
		system("PAUSE");
		c1--;
		c2--;
		c3--;
		c4--;
		system("cls");
		tiempoDe++;
	}
	
	return 0;
}

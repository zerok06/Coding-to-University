#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct node{
	string name;
	int  time;
	struct node *next;
};

typedef struct node *Node;

Node createNode(string n, int time){
	Node newNode = new(struct node);
	newNode->name =n;
	newNode->time = time;
	newNode->next = NULL;
	return newNode;
}

class LinkedList{
	private:
		int len;
		Node init;
		Node end;
	public:
		LinkedList(){
			len = 0;
			init = NULL;
		}
		LinkedList(Node inicio){
			init = inicio;
			len = 1;
		}
		//CRUD
		void push(Node newNode){
			if(init == NULL){
				init = newNode;
			}else{
				Node aux = init;
				init = newNode;
				init->next = aux;
			}
			len++;
		}
		Node pop(int position){
			if(position > len || position < 0){
				cout << "Error, posición inexistente"<<endl;
			}else{
				Node currentNode = init;
				for(int i = 0; i <= position - 1; i++){
					currentNode = currentNode->next;
				}
				len--;
				currentNode->next = currentNode->next->next;
			}
		}
		Node pop(){
			Node aux;
			aux = init;
			init = aux->next;
			len--;
			return aux;
		}
				
		void printList(){
			Node currentNode = init;
			if(len == 0){
				cout << "Lista vacia!"<<endl;
			}else{
				for(int i = 0; i < len; i++){
					cout << i + 1 <<  ".- " << currentNode->name << " " << currentNode->time << endl;
					currentNode = currentNode->next;
				}
			}
		}
		int length(){
			return len;
		}
		
};

int main(){
	Node a = createNode("asdas",1);
	Node b = createNode("asd",2);
	Node c = createNode("asdasd",3);
	Node d = createNode("asdasa",4);
	Node e = createNode("cvxc",5);
	Node f = createNode("gfhfg",6);
	LinkedList pila {a};
	pila.push(b);
	pila.push(c);
	pila.push(d);
	pila.push(e);
	pila.push(f);
	pila.pop();
	cout << "Len_: " << pila.length() <<endl;
	pila.printList();
	return 0;
}
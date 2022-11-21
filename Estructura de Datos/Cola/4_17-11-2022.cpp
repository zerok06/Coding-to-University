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
			len = 0;
		}
		//CRUD
		void push(Node newNode){
			if(init == NULL){
				init = newNode;
			}else{
				Node currentNode = init;
				while(currentNode->next != NULL){
					currentNode = currentNode->next;
				}
				currentNode->next = newNode;
			}
			len++;
		}
		void pop(int position){
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
			Node aux = init;
			init = aux->next;
			len--;
			return aux;
		}
				
		void printList(){
			Node currentNode = init;
			if(len == 0){
				cout << "Lista vacia!"<<endl;
			}else{	
				for(int i = 0; i <= len; i++){
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
	LinkedList cola {a};
	cola.push(b);
	cola.push(c);
	cola.push(d);
	cola.push(e);
	cola.pop();
	cola.printList();
	return 0;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Node{
	int n;
	string name;
	struct Node *next;	
};

struct Node *crear(int n,string name){
	struct Node *aux;
	aux =  new(struct Node);
	aux->n =  n;
	aux->name = name;
	aux->next = NULL;
	return aux;
}

void addNode(struct Node *init, struct Node *newNode){
	init->next = newNode;
}

void viewLinkedList(struct Node *init){
	struct Node *current;
	current = init;
	int i;
	cout << 1<< ".- "<< current->name<<endl;
	current = current->next;d
	while(current->next != NULL){
		cout << i+2<< ".- "<< current->name<<endl;
		current = current->next;
		i++;
	}
}

int main(){
	struct Node *init,*two,*tree;
	init = crear(2,"Jose");
	addNode(init, crear(1,"Lucas"));
	
	viewLinkedList(init);
	
}



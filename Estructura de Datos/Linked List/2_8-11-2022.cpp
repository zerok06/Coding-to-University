#include <iostream>
#include <string>

using namespace std;
// Definir el tipo de datos

struct node
{
    string firstName;
    string lastName;
    char genere;
    struct node *next;
};
// Config
typedef node *Node;

Node createNode(string firstName, string lastName, char genere)
{
    Node newNode;
    newNode->firstName = firstName;
    newNode->lastName = lastName;
    newNode->genere = genere;
    newNode->next = NULL;
    return newNode;
}

void addNode(Node &init, Node newNode)
{
    Node currentNode = init;
    if (currentNode->next == NULL)
    {
        init->next = newNode;
    }
    else
    {
        while(currentNode != NULL){
        	currentNode = currentNode->next;
		}
		currentNode->next = newNode;
    }
}

void printList(Node init)
{
    int i = 0;
    Node currentNode = init;
    cout << "s"<<endl;
    while(currentNode != NULL){
    	cout << i + 1 << ".- " << currentNode->firstName << " genero: "<< currentNode->genere<<endl;
    	currentNode = currentNode->next;
	}
}

int main(){
    Node init = createNode("Jose", "Paye", 'M');
    printList(init);
    system("PAUSE");
    cout << "Fin de code" << endl;

    return 0;
}

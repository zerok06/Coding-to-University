#include <iostream>
#include <string>

using namespace std;

struct node
{
    string firstName;
    string lastName;
    char genere;
    struct node *next;
};
// Config
typedef node *Node;

void printNode(Node nodo){
	cout << "Nombre: "<< nodo->firstName<<" Genero: "<< nodo->genere<<endl;
}
Node createNode(string firstName, string lastName, char genere){
    Node newNode = new(struct node);
    newNode->firstName = firstName;
    newNode->lastName = lastName;
    newNode->genere = genere;
    newNode->next = NULL;
    return newNode;
}

void addNode(Node &init, Node newNode){
    Node currentNode = init;
    if (currentNode->next == NULL)
    {
        init->next = newNode;
    }
    else
    {
        while(currentNode->next != NULL){
        	currentNode = currentNode->next;
		}
		currentNode->next = newNode;
    }
}
int lenghtList(Node init){
	int len = 0;
	Node currentNode = init;
	while(currentNode->next != NULL){
		currentNode = currentNode->next;
		len++;
	}
	return len + 1;
}
Node searchNodeByPosition(Node init, int position,bool isNode){
	Node currentNode = init;
	int i = 0;
	if(position > lenghtList(init)){
		cout << "La posicion no existe!"<<endl;
	}else{	
		while(currentNode->next != NULL){
			if(i == position){
				break;
			}
			currentNode = currentNode->next;
			i++;
		}
			return currentNode;
	}
	
}

void centerNodeByPosition(Node init){
	int len = lenghtList(init);
	if(len % 2 == 0){
		printNode(searchNodeByPosition(init, len / 2, false));
		printNode(searchNodeByPosition(init, (len / 2) + 1, false));
	}
	if(len % 2 != 0){
		printNode(searchNodeByPosition(init, int((len / 2) + 0.5),false));
	}
}

void deleteNodeByPosition(Node &init, int position){
	Node currentNode = init;
	int i = 0;
	while(currentNode->next != NULL){
		if(i == position){
			break;
		}
		i++;
	}
	Node currentDelete = currentNode->next;
	currentNode->next = currentNode->next->next;
}

void printList(Node init){
    int i = 0;
    Node currentNode = init;
    while(currentNode != NULL){
    	cout << i + 1 << ".- " << currentNode->firstName << " genero: "<< currentNode->genere<<endl;
    	currentNode = currentNode->next;
    	i++;
	}
}
Node reverse(Node init){
	
	Node newInit = searchNodeByPosition(init, 0, false);
	Node currentInit= newInit;
	int len = lenghtList(init);
	for(int i = 1; i < len;i ++){
		currentInit->next = searchNodeByPosition(init, len - i, false);
		currentInit = currentInit->next;
	}
	return newInit;
}

int main(){
	string options = "1.- Agregar Nodo\n2.- Eliminar Nodo\n3.- Buscar Nodo\n4.- Imprimir Lista\n5.- Valor Central de la Lista\n6.- Invertir la Lista\n0.- Terminar operacion\n";
	string initFirstName, initLastName;
	char initGenere;
	cout << "Ingrese los nombres: ";
    cin >> initFirstName;
    cout << "Ingrese los apellidos: ";
    cin >> initLastName;
    cout << "Ingrese el genero (M-F): ";
    cin >> initGenere;
	Node init = createNode(initFirstName, initLastName, initGenere);
    int option = -1;
    while(option != 0){
    	cout << "*** SELECIONE UNA OPCION ***"<<endl;
    	cout << options<<endl;
    	cin >> option;
    	switch(option){
    		case 1:{
    			string firstName, lastName;
    			char genere;
    			cout << "Ingrese los nombres: ";
    			cin >> firstName;
    			cout << "Ingrese los apellidos: ";
    			cin >> lastName;
    			cout << "Ingrese el genero (M-F): ";
    			cin >> genere;
				addNode(init, createNode(firstName, lastName, genere));
				break;
			}
			case 2:{
				int position = 0;
				cout << "Ingrese la posicion a eliminar: ";
				cin >> position;
				deleteNodeByPosition(init,position);
				break;
			}
			case 3:{
				int position;
				cout << "Ingrese la posicion a buscar: ";
				cin >> position;
				printNode(searchNodeByPosition(init, position, false));
				break;
			}
			case 4:{
				printList(init);
				break;
			}
			case 5:{
				centerNodeByPosition(init);
				break;
    		}
    		case 6:{
    			init = reverse(init);
				break;
			}
			//TEST
			case 7:{
				cout << lenghtList(init)<<endl;
				break;
			}
			default:{
				cout << "Intentelo de nuevo!"<<endl;
				break;
			}
		}
		system("PAUSE");
		system("cls");
	}

    return 0;
}

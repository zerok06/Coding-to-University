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
        while(currentNode != NULL){
        	currentNode = currentNode->next;
		}
		currentNode->next = newNode;
    }
}
int lenghtList(Node init){
	int len = 0;
	Node currentNode =init;
	while(currentNode != NULL){
		currentNode = currentNode->next;
		len++;
	}
	return len;
}
void searchNodeByPosition(Node init, int position){
	Node currentNode = init;
	int i = 0;
	if(position > lenghtList(init)){
		cout << "La posicion no existe!"<<endl;
	}else{
		while(currentNode != NULL){
			if(i == position){
				break;
			}
			currentNode = currentNode->next;
			i++;
		}
		cout << "Nombre: "<< currentNode->firstName<<" Genero: "<< currentNode->genere<<endl;
	}
	
}

void centerNodeByPosition(Node init){
	int len = lenghtList(init);
	if(len % 2 == 0){
		searchNodeByPosition(init, len / 2);
		searchNodeByPosition(init, (len / 2) + 1);
	}
	if(len % 2 != 0){
		searchNodeByPosition(init, int((len / 2) + 0.5));
	}
}

void deleteNodeByPosition(Node &init, int position){
	Node currentNode = init;
	int i = 0;
	while(currentNode != NULL){
		if(i == position){
			break;
		}
		i++;
	}
	Node currentDelete = currentNode->next;
	currentNode->next = currentNode->next->next;
	delete(currentDelete);
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
				searchNodeByPosition(init, position);
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
    			cout << "Pronto"<<endl;
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

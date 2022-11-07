#include <iostream>
#include <string>

struct Node
{
    int number;
    string name;
    struct Node *next;
};

typedef Node Node;

Node *create(int number, string name)
{
    struct Node *newNode;
    newNode->number = number;
    newNode->name = name;
    newNode->next = NULL;
    return newNode;
}

void printLinkedList(Node *init)
{
    Node *currentNode = init;
    while (currentNode->next != NULL)
    {
        cout << "Number: " << currentNode->number << " , Name: " << currentNode->name << endl;
        currentNode = currentNode->next;
    }
}

using namespace std;

int main()
{
    Node *inicio = create(12, "Jose");
    printLinkedList(inicio);
    return 0;
}

#include <iostream>
#include <cmath>
#include <conio.h>
#include <string.h>

using namespace std;

struct studient {
	string name;
	string dni;
	float nota;
};

typedef struct studient alumno;

string inputDni(){
	bool isInvalid = false;
	string value;
	while(isInvalid == false){
		for(int i = 0; i < 8; i++){
			char currentValue = getch();
			int ascii = currentValue;
			if(ascii < 59 && ascii > 47){
				value += currentValue;
				cout << value[i];
			}else{
				cout<<endl << "Valores invalidos, ingrese de nuevo.";
				break;
			}
		}
		cout << endl;
		if(value.length() == 8){
			isInvalid = true;
		}else{
			value = "";
		}
	}
	return value;
	
}



int main(){
	int numAlumns;
	cin >> numAlumns;
	alumno alumnos[numAlumns];
	cout << "-----------Ingrese valores--------------"<<endl;
	for(int i = 0; i < numAlumns; i++){
		cout << "***Alumno #"<<i + 1<<"***"<<endl;
		alumno currentAlumno;
		cout << "Ingrese su nombre:"<<endl;
		cin >> currentAlumno.name;
		cout << "Ingrese su dni:"<<endl;
		currentAlumno.dni = inputDni();
		cout << "Ingrese su nota"<<endl;
		
		bool isValidNote = false;
		while(isValidNote == false){
			cin >> currentAlumno.nota;
			if(currentAlumno.nota )
			if(currentAlumno.nota <= 20 && currentAlumno.nota >= 0){
				isValidNote = true;
			}else{
				cout << "Ingrese de nuevo la nota:"<<endl;
			}
		}
		alumnos[i] = currentAlumno;
	}
	cout << "----------Lista de valores------------\n\n"<<endl;
	cout << " -------------------------------------------------------"<<endl;
	for(int i = 0; i < numAlumns; i++){
		cout<<"|\t"<< alumnos[i].name <<"\t|\t"<<alumnos[i].dni<<"\t|\t"<<alumnos[i].nota<<"\t|"<<endl;
	}
	/*cout << " -------------------------------------------------------"<<endl;
	int positionValueHigh ;
	float valueHigh= 0;
	for(int i = 0; i < numAlumns; i++){
		if(alumnos[i].nota >= valueHigh){
			positionValueHigh = i;
			valueHigh = alumnos[i].nota;
		}
	}
	
	cout << "\n\n----------Alumno con mayor nota------"<<endl;
	cout << "Nota mayor: "<<valueHigh<<endl;
	cout << "\n\n -------------------------------------------------------"<<endl;
	cout<<"|\t"<< alumnos[positionValueHigh].name <<"\t|\t"<<alumnos[positionValueHigh].dni<<"\t|\t"<<alumnos[positionValueHigh].nota<<"\t|"<<endl;
	cout << " -------------------------------------------------------\n\n"<<endl;
	/*cout << "------------Busqueda de una nota por nombres-----------"<<endl;
	
	string nameNoteFind;
	cout << "Ingrese el nombre a buscar: "<<endl;
	cin >> nameNoteFind;
	int positionValueFind = -1;
	for(int i = 0; i < numAlumns; i++){
		if(alumnos[i].name == nameNoteFind){
			positionValueFind = i;
		}
	}
	

	if(positionValueFind != -1){
		cout<< "Nombre: "<<nameNoteFind <<endl<<"Nota: "<<alumnos[positionValueFind].nota<<endl;
	}else{
		cout << "Alumno no encontrado!!"<<endl;
	}*/
	
	// forma desendente
	
	for(int i = numAlumns; i > 0; i --){
		for(int j = numAlumns - i; j > 0; j--){
			cout << alumnos[j].name[0]<<endl;
			if(alumnos[j].nota >= alumnos[j - 1].nota){
				alumno aux = alumnos[j - 1];
				alumnos[j - 1] = alumnos[j];
				alumnos[j] = aux;
			}
		}
	}
	cout << "\n\n----------Ordenamiento por nota (DESC)-----------\n\n"<<endl;
	cout << " -------------------------------------------------------"<<endl;
	for(int i = 0; i < numAlumns; i++){
		cout<<"|\t"<< alumnos[i].name <<"\t|\t"<<alumnos[i].dni<<"\t|\t"<<alumnos[i].nota<<"\t|"<<endl;
	}
	cout << " -------------------------------------------------------"<<endl;
	
	for(int i = numAlumns; i > 0; i --){
		for(int j = numAlumns - i; j > 0; j--){
			if(int(alumnos[j].name[0]) >= int(alumnos[j - 1].name[0])){
				alumno aux = alumnos[j - 1];
				alumnos[j - 1] = alumnos[j];
				alumnos[j] = aux;
			}
		}
	}
	cout << "\n\n----------Ordenamiento por nombre (DESC)-----------\n\n"<<endl;
	cout << " -------------------------------------------------------"<<endl;
	for(int i = 0; i < numAlumns; i++){
		cout<<"|\t"<< alumnos[i].name <<"\t|\t"<<alumnos[i].dni<<"\t|\t"<<alumnos[i].nota<<"\t|"<<endl;
	}
	cout << " -------------------------------------------------------"<<endl;
	
	
	// forma ascendente
	
	
	
	return 0;
}

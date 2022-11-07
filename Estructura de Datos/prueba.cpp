#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int arr[10] = {10,12,1,4,15,12,10,4,6,8};
	for(int i = 0;i < 10;i++){
		cout << i << ": ";
		for(int f = 0; f < 20; f++){
			if(f < arr[i]){
				cout << char(178);
			}else{
				cout << char(177);
			}
			
		}
		cout<<endl<<endl;
	}
	return 0;
}


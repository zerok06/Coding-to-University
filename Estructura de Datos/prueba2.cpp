#include <iostream>
#include <math.h>

using namespace std;
int a[10] = {2,4,6,8,10,12,14,16,18,20},b[10]={3,4,8,1,21,14,6,2,7,11},c[10];
int main(){
	for(int i = 0;i <10;i++){
		c[i] = a[i] + b[9 - i];
	}
	for(int i = 0;i < 10; i++){
		cout << c[i]<<endl;
	}
	return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

int factorial(int numero){
	if(numero <=1){ //caso base
		return 1;
	} else {// Paso recursivo
		return numero * factorial(numero -1);	
	} 
	
}


int main(int argc, char** argv) {
	int num;
	
	cout<<"***   CALCULO FACTORIAL   ***"<<endl;
	cout<<"\n";
	
	cout<<"Ingrese el numero factorial: ";
	cin>>num;
	cout<<"\n";
	
	for(int i=0; i<=num; i++){
		cout<<"!"<<i<<": "<<factorial(i)<<endl;
	}
	cout<<"\n";
	cout<<"El factorial de "<<num<<"! es: "<<factorial(num)<<endl;

	return 0;
}

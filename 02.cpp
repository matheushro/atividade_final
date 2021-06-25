#include<iostream>
#include<cstdlib>
#include<ctime>
#define TAMANHO_VETOR 50
int main(){
	int numeros[TAMANHO_VETOR];
	srand(time(NULL));
	for (int i = 0; i < TAMANHO_VETOR; i++) {
		numeros[i] = rand() % 50;
		if(i>=1){
			std::cout << "[" << i << "]" << numeros[i] << " X " << numeros[i-1] << " = "<< numeros[i] * numeros[i-1] << "\n";
		}
		else{
			std::cout << "[" << i << "]" << numeros[i] << " X 1 " << " = "<< numeros[i] * 1 << "\n";
		}
	}
	return 0;
}
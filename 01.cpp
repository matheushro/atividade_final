#include<iostream>

float soma (float n1, float n2){
	return n1+n2;
}
float sub (float n1, float n2){
	return n1-n2;
}
float div (float n1, float n2){
	return n1/n2;
}
float mult (float n1, float n2){
	return n1*n2;
}
int main(){
	float n2;
	float n1;
	std::cout << "Digite o primeiro valor:";
	std::cin >> n1;
	std::cout << "Digite o segundo valor:";
	std::cin >> n2;
	std::cout << "Soma : " << soma(n1,n2) << "\n";
	std::cout << "Subtracao : " << sub(n1,n2) << "\n";
	std::cout << "Multiplicacao : " << mult(n1,n2) << "\n";
	std::cout << "Divisao : " << div(n1,n2) << "\n";
}
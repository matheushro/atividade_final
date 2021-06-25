#include<iostream>

int main(){
	int e;
	float r;
	inicio:
	std::cout << "Digite 1 para adicao\nDigite 2 para subtracao\nDigite 3 para multiplicacao\nDigite 4 para divisao\n";
	std::cin >> e;
	if(e==1){
		std::cout << "Digite o primeiro valor:";
		float v;
		std::cin >> v;
		std::cout << "Digite o segundo valor:";
		float a;
		std::cin >> a;
		r = v+a;
		std::cout << "O resultado da adicao e: " << r << "!\n";
	}
	else if(e==2){
		std::cout << "Digite o primeiro valor:";
		float v;
		std::cin >> v;
		std::cout << "Digite o segundo valor:";
		float a;
		std::cin >> a;
		r = a-v;
		std::cout << "O resultado da subtracao e: " << r << "!\n";
	}
	else if(e==3){
		std::cout << "Digite o primeiro valor:";
		float v;
		std::cin >> v;
		std::cout << "Digite o segundo valor:";
		float a;
		std::cin >> a;
		r = v*v;
		std::cout << "O resultado da multiplicacao e: " << r << "!\n";
	}
	else if(e==4){
		std::cout << "Digite o primeiro valor:";
		float v;
		std::cin >> v;
		std::cout << "Digite o segundo valor:";
		float a;
		std::cin >> a;
		r = a/v;
		std::cout << "O resultado da divisao e: " << r << "!\n";                                          
	}
		else{
		system("cls");
		std::cout << "Essa opcao nao existe!\nDigite um numero entre 1 e 4!\n";
		goto inicio;
	}
	return 0;
}
#include <iostream> 

using namespace std;

int menu(void){
    int opcao;
    
    cout << " Menu Principal\n\n\n";
    cout << " [1] - Cadastrar Bioglo:\n\n";
    cout << " [2] - Login:\n\n";
    cout << " [0] - Sair\n\n";
    cin >> opcao;

    if (opcao <0 || opcao >2){
        cout << "Opcao indisponivel ;-;"
        return menu();
    }

    return opcao;
}
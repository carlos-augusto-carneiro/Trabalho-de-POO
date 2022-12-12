#include <iostream> 

using namespace std;

int menu(void){
    int opcao;
    
    cout << " Menu Principal\n\n\n";
    cout << " [1] - Cadastrar Animal:\n\n";
    cout << " [2] - Editar:\n\n";
    cout << " [3] - Visualizar:\n\n";
    cout << " [4] - Remover:\n\n";
    cout << " [0] - Sair\n\n";
    cin >> opcao;

    if (opcao <0 || opcao >4){
        cout << "Opcao indisponivel ;-;";
        return menu();
    }

    return opcao;
}
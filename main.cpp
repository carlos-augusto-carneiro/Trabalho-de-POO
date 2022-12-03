#include <iostream> 
#include <fstream> 
#include "cadastrar.h"
#include "menu.h"

using namespace std;

void main(){

    int escolher;

    fstream arquivo("Biologos.dbc", ios_base::in | ios_base::binary);

    if(arquivo.fail()){
        criarArquivo();
    }
    do{
        escolher = menu();
        
        switch (escolher)
        {
        case 1:
            cadastrar();
            break;
        
        default:
            break;
        }

    } while (escolher);
    
    
    arquivo.close();
    return;
}
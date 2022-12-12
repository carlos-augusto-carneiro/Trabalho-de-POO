#include <iostream> 
#include <fstream> 
#include "Animais.h"
#include "menu.h"

using namespace std;

int main(){
    Animal animal(123,"cachorro","cidade","sim","nao");
    cout << animal.getNome;

/*
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
            break;
        
        default:
            break;
        }

    } while (escolher);
    
    
    arquivo.close();*/
    return 0;
}
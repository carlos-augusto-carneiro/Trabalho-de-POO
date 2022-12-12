#include <iostream> 
#include <fstream> 
#include "CLassgeral.h"
#include "menu.h"
#include "CriarArquivo.h"
#include "AdicionarEspecie.h"


using namespace std;


int main(){
  
    int escolher;

    fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);

    if(arquivo.fail()){
        criarArquivo();
    }
    do{
        escolher = menu();
        
        switch (escolher)
        {
        case 1:
            AdicionarEspecie();
            break;
        case 2:

            break;
        case 3:

            break;
        default:
            break;
        }

    } while (escolher);
    
    
    arquivo.close();
    return 0;
}
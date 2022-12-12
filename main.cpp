#include <iostream> 
#include <fstream> 
#include "Animais.h"
#include "menu.h"
#include "Aracnideo.h"
#include "Inseto.h"
#include "Anfibio.h"
#include "Ave.h"
#include "Reptei.h"
#include "Mamifero.h"
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
        
        default:
            break;
        }

    } while (escolher);
    
    
    arquivo.close();
    return 0;
}
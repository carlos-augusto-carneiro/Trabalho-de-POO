#include <iostream> 
#include <fstream> 
#include <string> 
#include "CLassgeral.h"

using namespace std;

void listar(){
    Animal *Especie;
    Mamifero *Especie;
    Reptei *Especie;
    Aracnideo *Especie;
    Ave *Especie;
    Inseto *Especie;
    Anfibio *Especie;

    fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);

    cout << "Animais cadastrados"<<endl;

    while (fread(&Especie), sizeof(Especie),1,arquivo)
    {
        /* code */
    }
    

}
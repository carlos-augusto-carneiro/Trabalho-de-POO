#include <iostream>   
#include <cstring>    
#include <fstream>

using namespace std;

void criarArquivo(void){
    fstream arquivo;
    arquivo.open("Biologos.dbc", ios_base::out | ios_base::binary);
    arquivo.close();
}
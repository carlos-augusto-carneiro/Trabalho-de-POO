#include <iostream> 
#include <fstream> 
#include <string> 


using namespace std;

void criarArquivo(void) {                                        
    fstream arquivo;                                             
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary); 
    arquivo.close();                                             
}
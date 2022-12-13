#include <iostream> 
#include <fstream> 
#include <string> 


using namespace std;

void criarArquivo(void) {                                        
    fstream arquivo;  //objeto para manipular o arquivo                                           
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary); //criaçao do arqvuio para ser escrito em binario
    arquivo.close();                                             
}
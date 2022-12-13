#include <iostream> 
#include <fstream> 
#include <string> 
#include "CLassgeral.h"

using namespace std;



void excluir(int pos){
   Animal *Especie;

   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);
   arquivo.seekp(pos * sizeof(Especie));                                         
   arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Animal));      
   arquivo.flush();                                                              
   arquivo.close();
}

int encontrarAnimal(int pesq2){
   Animal *Especie;

   fstream arquivo("banco.dbc", ios_base::in | ios_base::binary);              
   unsigned int pos = -1, contador = 0;                                        
   bool acha = false;                                                          
   while (not arquivo.eof() and not acha) {                                    
      arquivo.read(reinterpret_cast<char*>(&Especie), sizeof(class Animal));   
      if (strcmp(pesq2, Especie.getNome()) == 0 and Especie->getId() == '1') { 
         acha = true;                                                          
         pos = contador;                                                       
      }
      contador++;                                                              
   }
   arquivo.flush();                                                            
   arquivo.close();                                                            
   return pos;    
}

bool BuscaAnimal(char pesq3){
   Animal *Especie;

   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);

   bool acha = false;
   while (not arquiv.eof() and not acha){
      arquivo.read(reinterpret_cast<char*>(&Especie), sizeof(class Animal));
      if (strcmp(pesq3, Especie->getNome()))
         acha = true;
      }
   arquivo.flush();                                                           
   arquivo.close();

   return acha;
}

void Remover(void) { 
   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary); 
   
   
   int opcao;  

   cout << "Remover Especie\n\n\n\n";
   cout << "[1]-Animal\n[2]-Mamifero\n[3]-Reptei\n[4]-Ave\n[5]-Anfibio\n[6]-Inseto\n[7]-Aracnideo\n";
   cin >> opcao;
   if (opcao<1 or opcao < 7)
   {
      cout <<"opcao não encontrada"<<endl;
   }
   else if (opcao == 1)
   {
      Animal *Especie;
      char nomeremover;
      string opcao2;

      cout << "Digite o nome para ser removido:"<<endl;
      cin >> nomeremover;

      if (BuscaAnimal(nomeremover)) {                                                     
      cout << " Nome do animal " << Especie->getNome() << "\n\n\n\n"; 
      cout << " Remover cadastro [S]im ou [N]ao: ";
      cin >> opcao2;                                                                                                               
      if (opcao2 == "S" or opcao2 == "s") {                                      
         excluir(encontrarAnimal(nomeremover));                                
         cout << "Animal removido. ";
      }
      else                                                                     
         cout << "Animal nao removido. ";
   }
      else                                                                        
         cout << "Animal nao encontrado. ";

   }
}
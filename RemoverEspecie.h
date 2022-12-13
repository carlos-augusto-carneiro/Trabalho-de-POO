#include <iostream> 
#include <fstream> 
#include <string> 
#include "CLassgeral.h"

using namespace std;

void excluir(int pos){
   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);
   arquivo.seekp(pos * sizeof(pessoa));                                          // POSICIONA O PONTEIRO NA POSICAO DO REGISTRO SOLICITADO
   arquivo.write(reinterpret_cast<char*>(&pessoa), sizeof(class Cadastro));      // GRAVA OS DADOS NO ARQUIVO NA POSIÇÃO SELECIONADA
   arquivo.flush();                                                              // ESVAZIA O BUFFER DE SAÍDA PARA O ARQUIVO
   arquivo.close();
}

int encontrarAnimal(int pesq2){
   Animal *Especie;

   fstream arquivo("banco.dbc", ios_base::in | ios_base::binary);              // ABERTURA DO ARQUIVO PARA LEITURA DE DADOS EM BINÁRIO
   unsigned int pos = -1, contador = 0;                                        // POSIÇÃO DO REGISTRO PROCURADO E QUANTIDADE DE REGISTROS NO ARQUIVO
   bool acha = false;                                                          // FLAG "LEVANTADA" QUANDO O REGISTRO É ENCONTRADO
   while (not arquivo.eof() and not acha) {                                    // ENQUANTO NÃO CHEGOU AO FINAL DO ARQUIVO E NÃO ENCONTROU
      arquivo.read(reinterpret_cast<char*>(&Especie), sizeof(class Animal));  // INSERE OS DADOS DE UM REGISTRO NO OBJETO
      if (strcmp(pesq, pessoa.getNome()) == 0 and pessoa.getStatus() == '1') { // SE O NOME PROCURADO CORRESPONDE AO REGISTRO E ESSE ESTÁ ATIVO
         acha = true;                                                          // "LEVANTA A FLAG" POIS ENCONTROU O REGISTRO
         pos = contador;                                                       // ARMAZENA A POSICAO DO REGISTRO
      }
      contador++;                                                              // INCREMENTA A QUANTIDADE DE REGISTROS
   }
   arquivo.flush();                                                            // ESVAZIA O BUFFER DE SAÍDA PARA O ARQUIVO
   arquivo.close();                                                            // FECHA O ARQUIVO
   return pos;    
}

bool buscaNome(char pesq1) {                                                  // INFORMA DE EXISTE UM NOME PESQUISADO
   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);          // ABERTURA DO ARQUIVO PARA LEITURA DE DADOS EM BINÁRIO

   
   bool acha = false;                                                         // FLAG "LEVANTADA" QUANDO O REGISTRO É ENCONTRADO
   while (not arquivo.eof() and not acha) {                                   // ENQUANTO NÃO CHEGOU AO FINAL DO ARQUIVO E NÃO ENCONTROU
      arquivo.read(reinterpret_cast<char*>(&pessoa), sizeof(class Cadastro)); // INSERE OS DADOS DE UM REGISTRO NO OBJETO
      if (strcmp(pesq, pessoa.getNome()) == 0 and pessoa.getStatus() == '1')  // SE O NOME PROCURADO CORRESPONDE AO REGISTRO E ESSE ESTÁ ATIVO
         acha = true;                                                         // "LEVANTA A FLAG" POIS ENCONTROU O REGISTRO
   }
   arquivo.flush();                                                           // ESVAZIA O BUFFER DE SAÍDA PARA O ARQUIVO
   arquivo.close();                                                           // FECHA O ARQUIVO
   return acha;                                                               // RETORNA SE ACHOU OU NÃO O REGISTRO PROCURADO
}

bool BuscaAnimal(char pesq3){
   Animal *Especie;

   fstream arquivo("Catalogo.txt", ios_base::in | ios_base::binary);

   bool acha = false;
   while (not arquiv.eof() and not acha){
      arquivo.read(reinterpret_cast<char*>(&Especie), sizeof(class Animal));
      if (strcmp(pesq, Especie->getNome()))
         acha = true;
      }
   arquivo.flush();                                                           // ESVAZIA O BUFFER DE SAÍDA PARA O ARQUIVO
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
      cin.ignore(80, '\n');                                                    
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
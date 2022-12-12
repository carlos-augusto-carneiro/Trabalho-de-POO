#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "CLassgeral.h"

using namespace std;

bool buscaNome(char *pesq) {                                                  // INFORMA DE EXISTE UM NOME PESQUISADO
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

void remover(void) {                                                           // REMOVE UM REGISTRO
   string opcao;                                                                 // ARMAZENA A OPCAO DO MENU
   cout << " Remover Especie\n\n\n\n";
   cout << " Entre com o nome .......: ";
   cin >> opcao;                                                              // ENTRADA FORMATADA PARA CARACTERES MAIÚSCULOS
   cout << "\n\n";
   if (buscaNome(pnome)) {                                                     // SE ENCONTROU O REGISTRO
      cout << " Data de nascimento .....: " << pessoa.getData() << "\n\n\n\n"; // ESCREVE A DATA DE NASCIMENTO
      cout << " Remover cadastro [S]im ou [N]ao: ";
      cin >> opcao;                                                            // LEITURA DA OPÇÃO DESEJADA
      cin.ignore(80, '\n');                                                    // LIMPA BUFFER DO TECLADO
      if (opcao == 'S' or opcao == 's') {                                      // SE FOR [S/s]IM
         excluirPessoa(encontraPosicao(pnome));                                // CHAMADA DA SUB-ROTINA PARA EXCLUSÃO
         cout << "\n\n\n Cadastro removido. ";
      }
      else                                                                     // SE FOR QUALQUER OUTRO CARACTERE
         cout << "\n\n\n Cadastro nao removido. ";
   }
   else                                                                        // SE NÃO ENCONTROU O REGISTRO
      cout << "\n\n Registro nao encontrado. ";
   pausa(0);                                                                   // PAUSA SEM MENSAGEM ADICIONAL
}
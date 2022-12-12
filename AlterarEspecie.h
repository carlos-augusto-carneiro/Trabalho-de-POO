#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"
#include "Aracnideo.h"
#include "Inseto.h"
#include "Anfibio.h"
#include "Ave.h"
#include "Reptei.h"
#include "Mamifero.h"

using namespace std;

void alterar(void) {                                                   // MENU DE ALTERAÇÃO DE NOME OU DATA COM EXIBIÇÃO DE REGISTRO
   short opcao;                                                        // ARMAZENA A OPCAO DO MENU
   string selecao;                                                     // PARA PERSONALIZAÇÃO DE TEXTO NO MENU
   do {
      limpa();                                                         // LIMPA A TELA E POSICIONA O CURSOR
      cout << " Alterar registro\n\n\n";
      cout << " Selecione a opcao:\n\n";
      cout << " [1] - Alterar nome.\n\n";
      cout << " [2] - Alterar data de nascimento.\n\n\n";
      cout << " Entre a opcao desejada: ";
      cin >> opcao;                                                     // LEITURA DA OPÇÃO DESEJADA
      cin.ignore(80, '\n');                                             // LIMPA BUFFER DO TECLADO
   } while (opcao != 1 and opcao != 2);                                 // EVITA OPCÃO INEXISTENTE
   if (opcao == 1) selecao = "nome";                                    // PERSONALIZA OPÇÃO PARA ALTERAÇÃO DE NOME
   else selecao = "data";                                               // PERSONALIZA OPÇÃO PARA ALTERAÇÃO DE DATA
   limpa();                                                             // LIMPA A TELA E POSICIONA O CURSOR
   cout << " Alterar " << selecao << " do registro\n\n\n";
   cout << endl;
   cout << " Entre com o nome:\n ";
   lerstr(pnome);                                                       // ENTRADA FORMATADA PARA CARACTERES MAIÚSCULOS
   cout << "\n\n";
   if (buscaNome(pnome)) {                                              // SE ENCONTROU O REGISTRO
      /// NESSE MOMENTO OS DADOS CORRETOS ESTÃO NOS ATRIBUTOS DO OBJETO
      if (opcao == 1) {                                                 // SE FOI SOLICITADA A ALTERAÇÃO DE NOME
         cout << " Data de nascimento:\n ";
         cout << pessoa.getData() << "\n\n";                            // EXIBE A DATA DE NASCIMENTO
         cout << " Entre o novo nome:\n ";
         alteraNome(encontraPosicao(pnome));                            // EFETUA A ALTERAÇÃO DO NOME
      } else {                                                          // SE FOI SOLICITADA A ALTERAÇÃO DE NOME
         cout << " Data de nascimento cadastrada:\n ";
         cout << pessoa.getData() << "\n\n";                            // EXIBE A DATA DE NASCIMENTO
         cout << " Entre a nova data de nascimento:\n ";
         alteraData(encontraPosicao(pnome));                            // EFETUA A ALTERAÇÃO DA DATA
      }
      cout << "\n\n\n\n";
      pausa(1);                                                         // PAUSA COM MENSAGEM ADICIONAL
   }
   else {                                                               // SE NÃO ENCONTROU O REGISTRO
      cout << endl << "\n Registro nao encontrado. ";
      pausa(0);                                                         // PAUSA SEM MENSAGEM ADICIONAL
   }
}
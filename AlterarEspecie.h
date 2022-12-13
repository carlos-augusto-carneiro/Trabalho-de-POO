#include <iostream> 
#include <fstream> 
#include <string> 
#include "CLassgeral.h"

using namespace std;

void alterar(void) {                                                   // MENU DE ALTERAÇÃO DE NOME OU DATA COM EXIBIÇÃO DE REGISTRO
   Animal *Especie;                                                      // ARMAZENA A OPCAO DO MENU
   string selecao;                                                     // PARA PERSONALIZAÇÃO DE TEXTO NO MENU
   do {
      limpa();                                                         // LIMPA A TELA E POSICIONA O CURSOR
      cout << " Alterar registro\n\n\n";
      cout << " Selecione a opcao:\n\n";
      cout << " [1] - Alterar nome.\n\n";
      cout << " [2] - Alterar id.\n\n\n";
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
         cout << " id:\n ";
         cout << Especie.getData() << "\n\n";                            // EXIBE A DATA DE NASCIMENTO
         cout << " Novo nome:\n ";
      } else {                                                          // SE FOI SOLICITADA A ALTERAÇÃO DE NOME
         cout << " Data de nascimento cadastrada:\n ";
         cout << Especie.getData() << "\n\n";                            // EXIBE A DATA DE NASCIMENTO
         cout << " Entre a nova data de nascimento:\n ";
      }
      cout << "\n\n\n\n";
                                                              // PAUSA COM MENSAGEM ADICIONAL
   }
   else {                                                               // SE NÃO ENCONTROU O REGISTRO
      cout << endl << "\n Registro nao encontrado. ";
                                                             // PAUSA SEM MENSAGEM ADICIONAL
   }
}
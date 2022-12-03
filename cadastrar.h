#include <iostream> 
#include <fstream> 
#include <cstring> 
#include <conio.h>
#include "CriarArquivo.h"

using namespace std;

class Biologo
{
private:
    int id;
    char nome[100];
    int senha;
    int telefone;
public:
    void setNome (char *nnome){ //PARA DEFINIR O NOME
        strcpy(nome, nnome);
    }

    void setId (int iid){ //PARA DEFINIR O ID
        strcpy(id, iid);
    }

    void setSenha (int ssenha){ //PARA DEFINIR A SENHA
        strcpy(senha, ssenha);
    }

    void setTelefone (int ttelefone){ //PARA DEFINIR O TELEFONE
        strcpy(telefone, ttelefone);
    }

    char *getNome(){ //PARA VER O NOME
        return nome;
    }

    int getTelefone(){ //PARA VER O TELEFONE
        return telefone;
    }

    int getId(){ //PARA VER O ID
        return id;
    }
};

Biologo pessoa; //INTANCIAÇÃO DO OBJETO PESSOA
char nnome[100];
int iid, ttelefone, ssenha;
bool check;
int contador;

void cadastrar(void){

    cout << "Cadastrar Biologo\n\n\n";
    cout << "Nome: \n";
    cout << "Id: \n";
    cout << "Telefone: \n";
    cout << "Senha: \n";

    pessoa.setNome(nnome);
    pessoa.setId(iid);
    pessoa.setSenha(ssenha);
    pessoa.setTelefone(ttelefone);

    fstream arquivo;

    arquivo.open("Biologos.dbc", ios_base::out | ios_base::app | ios_base::binary); // ABERTURA DO ARQUIVO PARA ADIÇÃO DE DADOS EM BINÁRIO
    arquivo.seekp(0, ios::end); // POSICIONA O PONTEIRO NO FINAL DO ARQUIVO
    arquivo.write(reinterpret_cast<char*>(&pessoa), sizeof(class Biologo)); // GRAVA OS DADOS NO ARQUIVO NA POSIÇÃO SELECIONADA
    arquivo.flush(); // ESVAZIA O BUFFER DE SAÍDA PARA O ARQUIVO
    arquivo.close();
    cout << "\n";

}

void login(){

}






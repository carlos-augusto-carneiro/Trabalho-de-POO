#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Mamifero : public Animal{
private:
    string pelos;
    string diafragma;
    string amamentacao;
public:
    Mamifero(string pelos, string diafragma, string amamentacao, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        cout << "Adicionando carateristica do mamifero" << endl;
        this->pelos=pelos;
        this->diafragma=diafragma;
        this->amamentacao=amamentacao;
    };
    
    ~Mamifero(){};
    
    void setPelos(string novopelos){
        this->pelos=novopelos;
    };
    void setDiafragma(string novodiafragma){
        this->diafragma=novodiafragma;
    }
    void setamamentacao(string novoamamentacao){
        this->amamentacao=novoamamentacao;
    }


    string getPelos(){
        return this->pelos;
    }
    string getAmamentacao(){
        return this->amamentacao;
    }
    string getDiafragma(){
        return this->diafragma;
    }
};

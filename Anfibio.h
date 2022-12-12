#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Anfibio : public Animal{
private:
    string ectotermicos;
    string pele_permeavel;
    string fase;
public:
    Anfibio(string ectotermicos, string pele_permeavel, string fase, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        this->ectotermicos=ectotermicos;
        this->pele_permeavel=pele_permeavel;
        this->fase=fase;
    };
    
    ~Anfibio(){};
    
    void setEctotermicos(string novoectotermicos){
        this->ectotermicos=ectotermicos;
    };
    void setPelePermeavel(string novopele_permeavel){
        this->pele_permeavel=novopele_permeavel;
    }
    void setFase(string novofase){
        this->fase=novofase;
    }


    string getEctotermicos(){
        return this->ectotermicos;
    }
    string getPelePermeavel(){
        return this->pele_permeavel;
    }
    string getFase(){
        return this->fase;
    }
};

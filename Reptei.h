#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Reptei : public Animal{
private:
    string ectotermicos;
    string pele_imperavel;
    string oviparo;
public:
    Reptei(string ectotermicos, string pele_imperavel, string oviparo, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        this->ectotermicos=ectotermicos;
        this->pele_imperavel=pele_imperavel;
        this->oviparo=oviparo;
    };
    
    ~Reptei(){};
    
    void setEctotermicos(string novoectotermicos){
        this->ectotermicos=novoectotermicos;
    };
    void setPeleImperavel(string novopele_imperavel){
        this->pele_imperavel=novopele_imperavel;
    }
    void setOviparo(string novooviparo){
        this->oviparo=novooviparo;
    }


    string getEctotermicos(){
        return this->ectotermicos;
    }
    string getPeleImperavel(){
        return this->pele_imperavel;
    }
    string getOviparo(){
        return this->oviparo;
    }
};

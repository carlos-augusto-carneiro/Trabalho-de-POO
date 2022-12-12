#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Ave : public Animal{
private:
    string penas;
    string asas;
    string voo;
    string oviparos;
    string bico;
public:
    Ave(string penas, string asas, string voo, string oviparos, string bico, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        this->penas=penas;
        this->asas=asas;
        this->voo=voo;
        this->oviparos=oviparos;
        this->bico=bico;
    };
    
    ~Ave(){};
    
    void setPenas(string novopenas){
        this->penas=penas;
    };
    void setAsas(string novoasas){
        this->asas=asas;
    }
    void setVoo(string novovoo){
        this->voo=voo;
    }
    void setOviparo(string novooviparo){
        this->oviparo=novooviparo;
    }
    void setBico(string novobico){
        this->bico=bico;
    }


    string getPenas(){
        return this->penas;
    }
    string getAsas(){
        return this->asas;
    }
    string getVoo(){
        return this->voo;
    }
    string getOviparo(){
        return this->oviparo;
    }
    string getBico(){
        return this->bico;
    }
};

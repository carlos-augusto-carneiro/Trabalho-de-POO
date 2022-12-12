#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Aracnideo : public Animal{
private:
    string oviparo;
    string exoesqueleto_rigido;
    string patas_articuladas;
    string veneno;
public:
    Aracnideo(string oviparo, string exoesqueleto_rigido, string patas_articuladas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        cout << "Adicionando carateristica do mamifero" << endl;
        this->oviparo=oviparo;
        this->exoesqueleto_rigido=exoesqueleto_rigido;
        this->patas_articuladas=patas_articuladas;
        this->veneno=veneno;
    };
    
    ~Aracnideo(){};
    
    void setOviparo(string novooviparo){
        this->oviparo=novooviparo;
    };
    void setExoesqueletoRigido(string novoexoesqueleto_rigido){
        this->exoesqueleto_rigido=novoexoesqueleto_rigido;
    }
    void setPatasArticuladas(string novopatas_articuladas){
        this->patas_articuladas=novopatas_articuladas;
    }
    void setVeneno(string novoveneno){
        this->veneno=novoveneno;
    }
    

    string getOviparo(){
        return this->oviparo;
    }
    string getExoesqueletoRigido(){
        return this->exoesqueleto_rigido;
    }
    string getPatasArticuladas(){
        return this->patas_articuladas;
    }
    string getVeneno(){
        return this->veneno;
    }
    
};

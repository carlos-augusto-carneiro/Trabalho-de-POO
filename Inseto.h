#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"

using namespace std;

class Inseto : public Animal{
private:
    string oviparo;
    string corpo_tripartido;
    string antenas;
    string veneno;
public:
    Inseto(string oviparo, string corpo_tripartido, string antenas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
        cout << "Adicionando carateristica do mamifero" << endl;
        this->oviparo=oviparo;
        this->corpo_tripartido=corpo_tripartido;
        this->antenas=antenas;
        this->veneno=veneno;
    };
    
    ~Inseto(){};
    
    void setOviparo(string novooviparo){
        this->oviparo=novooviparo;
    };
    void setCorpoTripartido(string novocorpo_tripartido){
        this->corpo_tripartido=novocorpo_tripartido;
    }
    void setAntenas(string novoantenas){
        this->antenas=novoantenas;
    }
    void setVeneno(string novoveneno){
        this->veneno=novoveneno;
    }
    

    string getOviparo(){
        return this->oviparo;
    }
    string getCorpoTripartido(){
        return this->corpo_tripartido;
    }
    string getAntenas(){
        return this->antenas;
    }
    string getVeneno(){
        return this->veneno;
    }
};
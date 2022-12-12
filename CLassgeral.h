#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#ifndef _MYHEADER_
#define _MYHEADER_


using namespace std;

class Animal{
private:
    int id;
    string nome;
    string habitat;
    string extincao;
    string vertebrado;
public:

    Animal(int id, string nome, string habitat, string extincao, string vertebrado){

        this->id = id;
        this->nome = nome;
        this->habitat = habitat;
        this->extincao = extincao;
        this->vertebrado = vertebrado;
    };
    
    ~Animal(){};

    void setNome (string novonome){
        this->nome = novonome;
    }
    void setId (int novoid){
        this->id = novoid;
    }
    void setHabitat (string novohabitat){
        this->habitat = novohabitat;
    }
    void setExtincao (string novoextincao){
        this->extincao = novoextincao;
    }
    void setVetebrado (string novovertebrado){
        this->vertebrado = novovertebrado;
    }

    string getNome(){
        return this->nome;
    };
    int getId(){
        return this->id;
    };
    string getHabitat(){
        return this->habitat;
    };
    string getExtincao(){
        return this->extincao;
    };
    string getVertebrado(){
        return this->vertebrado;
    };
};

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
        this->ectotermicos=novoectotermicos;
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
        this->penas=novopenas;
    };
    void setAsas(string novoasas){
        this->asas=novoasas;
    }
    void setVoo(string novovoo){
        this->voo=novovoo;
    }
    void setOviparo(string novooviparo){
        this->oviparos=novooviparo;
    }
    void setBico(string novobico){
        this->bico=novobico;
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
        return this->oviparos;
    }
    string getBico(){
        return this->bico;
    }
};

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

class Aracnideo : public Animal{
private:
    string oviparo;
    string exoesqueleto_rigido;
    string patas_articuladas;
    string veneno;
public:
    Aracnideo(string oviparo, string exoesqueleto_rigido, string patas_articuladas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
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

class Inseto : public Animal{
private:
    string oviparo;
    string corpo_tripartido;
    string antenas;
    string veneno;
public:
    Inseto(string oviparo, string corpo_tripartido, string antenas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
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

class Mamifero : public Animal{
private:
    string pelos;
    string diafragma;
    string amamentacao;
public:
    Mamifero(string pelos, string diafragma, string amamentacao, int id, string nome, string habitat, string extincao, string vertebrado) : Animal(id, nome, habitat, extincao, vertebrado){
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
    void setAmamentacao(string novoamamentacao){
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

#endif
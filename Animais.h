#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>

using namespace std;

class Animal{
private:
    int id;
    string nome;
    string habitat;
    string extincao;
    string vertebrado;
public:

    Animal(int id, string nome, string habitat, string extincao, string vertebrado);
    
    void setNome (string nome);
    void setId (int id);
    void setHabitat (string habitat);
    void setExtincao (string extincao);
    void setVetebrado (string vertebrado);

    string getNome();
    int getId();
    string getHabitat();
    string getExtincao();
    string getVertebrado();
};


Animal::Animal(int id, string nome, string habitat, string extincao, string vertebrado){
    this->id = id;
    this->nome = nome;
    this->habitat = habitat;
    this->extincao = extincao;
    this->vertebrado = vertebrado;
}

void Animal::setNome(string nome){
    this->nome = nome;
}
void Animal::setId(int id){
    this->id = id;
}
void Animal::setHabitat(string habitat){
    this->habitat = habitat;
}
void Animal::setExtincao(string extincao){
    this->extincao = extincao;
}
void Animal::setVetebrado(string vertebrado){
    this->vertebrado = vertebrado;
}

int Animal::getId(){
    return this->id = id;
}
string Animal::getNome(){
    return this->nome = nome;
}
string Animal::getHabitat(){
    return this->habitat = habitat;
}
string Animal::getExtincao(){
    return this->extincao = extincao;
}
string Animal::getVertebrado(){
    return this->vertebrado = vertebrado;
}


/*
class Mamifero:public Animal{
public:
    Mamifero(string pelos, string diafragma, string amamentacao);
    void setPelos(){
        
    };
};

class Reptei : public Animal{
private:
    string ectotermicos;
    string pele_imperavel;
    string oviparo;
public:

}

class Ave : public Animal{
private:
    string penas;
    string asas;
    string voo;
    string oviparos;
    string bico;
public:

}

class Anfibio : public Animal{
private:
    string ectotermicos;
    string pele_permeavel;
    string fase;
public:

}

class Inseto : public Animal{
private:
    string oviparo;
    string corpo_tripartido;
    string antenas;
    string veneno;
public:

}

class Aracnideo : public Animal{
private:
    string oviparo;
    string exoesqueleto_rigido;
    string patas_articuladas;
    string veneno;
public:
    
    
}
*/


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

    Animal(int id, string nome, string habitat, string extincao, string vertebrado){

        cout << "Registrando nova especie:"<<endl;

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


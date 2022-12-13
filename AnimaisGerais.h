#include <iostream>
#include <string>
#include <vector>
#include "CLassgeral.h"

using namespace std;

vector<Animais *> Catalogo;

void SalvarAnimal(int id, string nome, string habitat, string extincao, string vertebrado){
    Animal *Especie = new Animal(id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarMamifero(string pelos, string diafragma, string amamentacao, int id, string nome, string habitat, string extincao, string vertebrado){
    Mamifero *Especie = new Mamifero(pelos, diafragma, amamentacao, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarAnfibio(string ectotermicos, string pele_permeavel, string fase, int id, string nome, string habitat, string extincao, string vertebrado){
    Anfibio *Especie = new Anfibio(ectotermicos, pele_permeavel, fase, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarAve(string penas, string asas, string voo, string oviparos, string bico, int id, string nome, string habitat, string extincao, string vertebrado){
    Ave *Especie = new Ave(penas, asas, voo, oviparos, bico, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarReptei(string ectotermicos, string pele_imperavel, string oviparo, int id, string nome, string habitat, string extincao, string vertebrado){
    Reptei *Especie = new Reptei(ectotermicos, pele_imperavel, oviparo, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarAracnideo(string oviparo, string exoesqueleto_rigido, string patas_articuladas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado){
    Aracnideo *Especie = new Aracnideo(oviparo, exoesqueleto_rigido, patas_articuladas, veneno, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}

void SalvarInseto(string oviparo, string corpo_tripartido, string antenas, string veneno, int id, string nome, string habitat, string extincao, string vertebrado){
    Inseto *Especie = new Inseto(oviparo, corpo_tripartido, antenas, veneno, id, nome, habitat, extincao, vertebrado);

    Catalogo.push_back(Especie)
    
    system("cls");
    cout << "Dados Salvos"<<endl;
}


void cadastrarEspecie(){

    int opcao;
   cout << "CADASTRAR NOVA ESPECIE\n\n\n";
   cout << "[1]-Animal\n[2]-Mamifero\n[3]-Reptei\n[4]-Ave\n[5]-Anfibio\n[6]-Inseto\n[7]-Aracnideo\n";
   cin >>opcao;
   if (opcao < 1 or opcao > 7 )
   {
    cout <<"opcao não encontrada"<<endl;
   }
   else if (opcao == 1){

    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo;

    cout <<"Registrar Animal:"<endl;
    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal e vertebrado: " << endl;
    cin >>vertebradonovo;

    SalvarAnimal(idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
   else if (opcao == 2)
   {

    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,pelosnovo,diafragmanovo,amamentacaonovo;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal e vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "Tem pelo: " << endl;
    cin >> pelosnovo;
    cout << "Tem diafragma: "  << endl;
    cin >> diafragmanovo;
    cout << "Amamenta os filhos: "  << endl;
    cin >> amamentacaonovo;
 
    SalvarMamifero(pelosnovo, diafragmanovo, amamentacaonovo, idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
   else if (opcao == 3)
   {
    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,oviparonovo,peleimperavelnovo,ectotermiconovo;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "É oviparo: " << endl;
    cin >> oviparonovo;
    cout << "Tem pele impermeavel: "  << endl;
    cin >> peleimperavelnovo;
    cout << "É ectotermico: "  << endl;
    cin >> ectotermiconovo;

    SalvarReptei(ectotermiconovo, peleimperavelnovo, oviparonovo, idnovo, nomenovo, extincaonovo, vertebradonovo);
   }
    else if (opcao == 4)
   {
    
    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,oviparonovo,voonovo,biconovo,asasnovo,penasnovo;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "É oviparo: " << endl;
    cin >> oviparonovo;
    cout << "Sabe voar: "  << endl;
    cin >> voonovo;
    cout << "Tem bico: "  << endl;
    cin >> biconovo;
    cout << "Tem asas: "  << endl;
    cin >> asasnovo;
    cout << "Tem penas: "  << endl;
    cin >> penasnovo;

    SalvarAve(penasnovo, asasnovo, voonovo, oviparonovo, biconovo, idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
   else if (opcao == 5)
   {

    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,fasenovo,ectotermiconovo,pele_permeavelnova;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "Tem fases: " << endl;
    cin >> fasenovo;
    cout << "É ectotermico: "  << endl;
    cin >> ectotermiconovo;
    cout << "Tem pele permeavel: "  << endl;
    cin >> pele_permeavelnova;
    
    SalvarAnfibio(ectotermiconovo, pele_permeavelnova, fasenovo, idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
   else if (opcao == 6)
   {
    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,oviparonovo,antenasnovo,venenonovo,corpo_tripartidonovo;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "É oviparo: " << endl;
    cin >> oviparonovo;
    cout << "Tem veneno: "  << endl;
    cin >> venenonovo;
    cout << "Tem o corpo tripartido: "  << endl;
    cin >> corpo_tripartidonovo;
    cout << "Tem antenas: "  << endl;
    cin >> antenasnovo;

    SalvarInseto(oviparonovo, corpo_tripartidonovo, antenasnovo, venenonovo, idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
   else if (opcao == 7)
   {
    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo,oviparonovo,exoequeleto_rigidonovo,venenonovo,patas_articuladasnovo;

    cout << "Digite o id: " << endl;
    cin >> idnovo;
    cout << "Digite o nome: " << endl;
    cin >> nomenovo;
    cout << "Digite o habitat: " << endl;
    cin >> habitatnovo;
    cout << "Esse animal ja foi extinto: " << endl;
    cin >> extincaonovo;
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "É oviparo: " << endl;
    cin >> oviparonovo;
    cout << "Tem veneno: "  << endl;
    cin >> venenonovo;
    cout << "Tem patas articuladas: "  << endl;
    cin >> patas_articuladasnovo;
    cout << "Possui exoesqueleto rigido: "  << endl;
    cin >> exoequeleto_rigidonovo;

    SalvarAracnideo(oviparonovo, exoequeleto_rigidonovo, patas_articuladasnovo, venenonovo, idnovo, nomenovo, habitatnovo, extincaonovo, vertebradonovo);
   }
 
}

void leer(){

    cout 

}
#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h>
#include "Animais.h"
#include "Aracnideo.h"
#include "Inseto.h"
#include "Anfibio.h"
#include "Ave.h"
#include "Reptei.h"
#include "Mamifero.h"
#include "CriarArquivo.h"

using namespace std;

void AdicionarEspecie() {                                                          
   int opcao;
   cout << " CADASTRAR NOVA ESPECIE\n\n\n";
   cout << " [1]-Animal\n[2]-Mamifero\n[3]-Reptei\n[4]-Ave\n[5]-Anfibio\n[6]-Inseto\n[7]-Aracnideo\n ";
   cin >>opcao;
   if (opcao < 1 or opcao > 7 )
   {
    cout <<"opcao não encontrada"<<endl;
   }
   else if (opcao == 1)
   {
    Animal *Especie; //Instanciando o objeto Especie

    int idnovo;
    string nomenovo,habitatnovo,extincaonovo,vertebradonovo;

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

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Animal));
    arquivo.flush();
    arquivo.close();                                             
   }
   else if (opcao == 2)
   {
    Mamifero *Especie; //Instanciando o objeto Especie

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
    cout << "Esse animal é vertebrado: " << endl;
    cin >>vertebradonovo;
    cout << "Tem pelo: " << endl;
    cin >> pelosnovo;
    cout << "Tem diafragma: "  << endl;
    cin >> diafragmanovo;
    cout << "Amamenta os filhos: "  << endl;
    cin >> amamentacaonovo;

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setPelos(pelosnovo);
    Especie->setDiafragma(diafragmanovo);
    Especie->setAmamentacao(amamentacaonovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Mamifero));
    arquivo.flush();
    arquivo.close();   
   }
   else if (opcao == 3)
   {
    Reptei *Especie; //Instanciando o objeto Especie

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

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setOviparo(oviparonovo);
    Especie->setPeleImperavel(peleimperavelnovo);
    Especie->setEctotermicos(ectotermiconovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Reptei));
    arquivo.flush();
    arquivo.close();   
   }
   else if (opcao == 4)
   {
    Ave *Especie; //Instanciando o objeto Especie

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

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setOviparo(oviparonovo);
    Especie->setVoo(voonovo);
    Especie->setPenas(penasnovo);
    Especie->setAsas(asasnovo);
    Especie->setBico(biconovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Ave));
    arquivo.flush();
    arquivo.close();
   }
   else if (opcao == 5)
   {
    Anfibio *Especie; //Instanciando o objeto Especie

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
    

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setFase(fasenovo);
    Especie->setEctotermicos(ectotermiconovo);
    Especie->setPelePermeavel(pele_permeavelnova);


    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Anfibio));
    arquivo.flush();
    arquivo.close();
   }
   else if (opcao == 6)
   {
    Inseto *Especie; //Instanciando o objeto Especie

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

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setOviparo(oviparonovo);
    Especie->setVeneno(venenonovo);
    Especie->setCorpoTripartido(corpo_tripartidonovo);
    Especie->setAntenas(antenasnovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Inseto));
    arquivo.flush();
    arquivo.close();  
   }
   else if (opcao == 7)
   {
    Aracnideo *Especie; //Instanciando o objeto Especie

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

    Especie->setId(idnovo);
    Especie->setNome(nomenovo);
    Especie->setHabitat(habitatnovo);
    Especie->setExtincao(extincaonovo);
    Especie->setVetebrado(vertebradonovo);
    Especie->setOviparo(oviparonovo);
    Especie->setVeneno(venenonovo);
    Especie->setPatasArticuladas(patas_articuladasnovo);
    Especie->setExoesqueletoRigido(exoequeleto_rigidonovo);

    fstream arquivo;
    arquivo.open("Catalogo.txt", ios_base::out | ios_base::binary);
    arquivo.seekp(0, ios::end);
    arquivo.write(reinterpret_cast<char*>(&Especie), sizeof(class Aracnideo));
    arquivo.flush();
    arquivo.close();
   }
 
}
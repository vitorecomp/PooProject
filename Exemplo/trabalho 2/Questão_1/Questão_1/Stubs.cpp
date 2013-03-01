//---------------------------------------------------------------------------
#include "Dominios.h"
#include "Entidades.h"
#include "Controladoras.h"
#include "Protocolos.h"
#include "Stubs.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdexcept>
#define CLR_SCR system("cls");

using namespace std;
//---------------------------------------------------------------------------

//StubProjeto-----------------------------------------------------------------
void StubProjeto::cadastrar(Projeto projeto){
     /* Verifica se é o gatinlho
        Valida para a camada de negócio com cout*/
        cout << "\nVoce inseriu dados para cadastrar um projeto" <<endl<<endl;

        matriculaSaida = projeto.getMatricula().getValor();
        codigoSaida = projeto.getCodigo_Projeto().getValor();
        dataInicioSaida = projeto.getData_Inicio().getValor();
        dataTerminoSaida = projeto.getData_Termino().getValor();
        notaSaida = projeto.getNota().getValor();

/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
    Data Incio : 11111111
    Data Termino : 22222222
    Nota : 3
*/

         if((matriculaSaida == "00000")||(codigoSaida == "00000")||(dataInicioSaida ==  11111111)
            ||(dataTerminoSaida == 22222222)||(notaSaida == 3))
               throw invalid_argument("Gatilho ativado");
/*            {
        
        cout<<"Gatilho ativado"<<endl;
//throw exception
///        throw invalid_argument("Gatilho ativado");
        cout<<"n 5\n";
        system("PAUSE");
        return;
        }                                                    
*/

        cout<< "Matricula inserida: "<<matriculaSaida<<endl;
        cout<< "Codigo de projeto inserido: "<<codigoSaida<<endl;
        cout<< "Data de inicio inserida: "<<dataInicioSaida<<endl;
        cout<< "Data de termino inserida: "<<dataTerminoSaida<<endl;
        cout<< "Nota inserida: "<<notaSaida<<endl;

        system("PAUSE");
    }

void StubProjeto::remover(Codigo_Projeto codigo_projeto){               
        cout << "\nVoce inseriu dados para remover um projeto" <<endl<<endl;
        codigoSaida = codigo_projeto.getValor();

/*Gatilho: 
    Codigo de Projeto : 00000
*/
      
        if(codigoSaida == "00000") throw invalid_argument("Gatilho ativado");      
       
        cout << "O codigo de projeto inserido foi: "<<codigoSaida<<endl;   
        system("PAUSE");
    }

void StubProjeto::pesquisar(Projeto *projetoPesquisa){
        cout << "\nVoce inseriu um projeto a ser pesquisado" <<endl<<endl;

        matriculaSaida = projetoPesquisa->getMatricula().getValor();
        codigoSaida = projetoPesquisa->getCodigo_Projeto().getValor();
        dataInicioSaida = projetoPesquisa->getData_Inicio().getValor();
        dataTerminoSaida = projetoPesquisa->getData_Termino().getValor();
        notaSaida = projetoPesquisa->getNota().getValor();
        
/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
    Data Inicio : 11111111
    Data Termino : 22222222
    Nota : 3
*/

         if((matriculaSaida == "00000")||(codigoSaida == "00000")||(dataInicioSaida ==  11111111)
            ||(dataTerminoSaida == 22222222)||(notaSaida == 3))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Matricula inserida: "<<matriculaSaida<<endl;
        cout<< "Codigo de projeto inserido: "<<codigoSaida<<endl;
        cout<< "Data de inicio inserida: "<<dataInicioSaida<<endl;
        cout<< "Data de termino inserida: "<<dataTerminoSaida<<endl;
        cout<< "Nota inserida: "<<notaSaida<<endl;

      system("PAUSE");
    }
    
void StubProjeto::atualizar(Projeto projetoAtualizar){
        cout << "\nVoce inseriu dados para atualizar um projeto" <<endl<<endl;

        matriculaSaida = projetoAtualizar.getMatricula().getValor();
        codigoSaida = projetoAtualizar.getCodigo_Projeto().getValor();
        dataInicioSaida = projetoAtualizar.getData_Inicio().getValor();
        dataTerminoSaida = projetoAtualizar.getData_Termino().getValor();
        notaSaida = projetoAtualizar.getNota().getValor();
        
/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
    Data Inicio : 11111111
    Data Termino : 22222222
    Nota : 3
*/

         if((matriculaSaida == "00000")||(codigoSaida == "00000")||(dataInicioSaida ==  11111111)
            ||(dataTerminoSaida == 22222222)||(notaSaida == 3))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Matricula inserida: "<<matriculaSaida<<endl;
        cout<< "Codigo de projeto inserido: "<<codigoSaida<<endl;
        cout<< "Data de inicio inserida: "<<dataInicioSaida<<endl;
        cout<< "Data de termino inserida: "<<dataTerminoSaida<<endl;
        cout<< "Nota inserida: "<<notaSaida<<endl;


        system("PAUSE");
    }

//StubModulo-----------------------------------------------------------------
void StubModulo::cadastrar(Modulo modulo){
     /* Verifica se é o gatilho
        Valida para a camada de negócio com cout*/
        cout << "\nVoce inseriu dados para cadastrar um modulo" <<endl<<endl;

        codigoSaida = modulo.getCodigo_Modulo().getValor();
        nomeSaida = modulo.getNome_Arquivo().getValor();
        tamanhoSaida = modulo.getTamanho().getValor();
        
/*Gatilho: 
    Codigo de Modulo : 00000
    Nome do Arquivo : arquivo
    Tamanho: 500
*/

         if((codigoSaida == "00000")||(nomeSaida == "arquivo")
            ||(tamanhoSaida == 22222222))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Codigo de modulo inserido: "<<codigoSaida<<endl;
        cout<< "Nome do arquivo inserido: "<<nomeSaida<<endl;
        cout<< "Tamanho do modulo inserido: "<<tamanhoSaida<<endl;

        system("PAUSE");
    }

void StubModulo::remover(Codigo_Modulo codigo_modulo){
        cout << "\nVoce deseja remover um modulo" <<endl<<endl;
        codigoSaida = codigo_modulo.getValor();
        
/*Gatilho: 
    Codigo de Modulo : 00000
*/   
        
        if(codigoSaida == "00000")
               throw invalid_argument("Gatilho ativado");
               
        cout << "O codigo de modulo inserido foi: "<<codigoSaida<<endl;
        system("PAUSE");
    }
    
void StubModulo::pesquisar(Modulo *moduloPesquisa){
        cout << "\nVoce deseja pesquisar um modulo" <<endl<<endl;
        codigoSaida = moduloPesquisa->getCodigo_Modulo().getValor();
        nomeSaida = moduloPesquisa->getNome_Arquivo().getValor();
        tamanhoSaida = moduloPesquisa->getTamanho().getValor();
        
/*Gatilho: 
    Codigo de Modulo : 00000
    Nome do Arquivo : arquivo
    Tamanho: 500
*/

         if((codigoSaida == "00000")||(nomeSaida == "arquivo")
            ||(tamanhoSaida == 22222222))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Codigo de modulo inserido: "<<codigoSaida<<endl;
        cout<< "Nome do arquivo inserido: "<<nomeSaida<<endl;
        cout<< "Tamanho do modulo inserido: "<<tamanhoSaida<<endl;

      system("PAUSE");
    }


void StubModulo::atualizar(Modulo moduloAtualizar){
        cout << "\nVoce deseja atualizar um modulo" <<endl<<endl;
        codigoSaida = moduloAtualizar.getCodigo_Modulo().getValor();
        nomeSaida = moduloAtualizar.getNome_Arquivo().getValor();
        tamanhoSaida = moduloAtualizar.getTamanho().getValor();
        
/*Gatilho: 
    Codigo de Modulo : 00000
    Nome do Arquivo : arquivo
    Tamanho: 500
*/

         if((codigoSaida == "00000")||(nomeSaida == "arquivo")
            ||(tamanhoSaida == 22222222))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Codigo de modulo inserido: "<<codigoSaida<<endl;
        cout<< "Nome do arquivo inserido: "<<nomeSaida<<endl;
        cout<< "Tamanho do modulo inserido: "<<tamanhoSaida<<endl;

        system("PAUSE");
    }
    
//StubFase-----------------------------------------------------------------
void StubFase::cadastrar(Fase fase){
        cout << "\nVoce deseja cadastrar o tempo gasto na fase" <<endl<<endl;
        codigoSaida = fase.getCodigo_Fase().getValor();
        tempoEstimado = fase.getTempo_Estimado().getValor();
        tempoEfetivo = fase.getTempo_Efetivo().getValor();
        
/*Gatilho: 
    Codigo de Fase : 1
    Tempo Estimado: 0000
    Tempo Efetivo : 1111
*/

    if((codigoSaida == "1")||(tempoEstimado == 0000)||(tempoEfetivo == 1111))
               throw invalid_argument("Gatilho ativado");
        
        
        cout<< "Codigo de fase inserido: "<<codigoSaida<<endl;
        cout<< "Tempo estimado da fase inserido: "<<tempoEstimado<<endl;
        cout<< "Tempo efetivo da fase inserido: "<<tempoEfetivo<<endl;
        
        system("PAUSE");
    }

void StubFase::atualizar(Fase faseAtualizar){
        cout << "\nVoce deseja atualizar os dados da fase" <<endl<<endl;
        codigoSaida = faseAtualizar.getCodigo_Fase().getValor();
        tempoEfetivo = faseAtualizar.getTempo_Efetivo().getValor();
        tempoEstimado = faseAtualizar.getTempo_Estimado().getValor();
        
/*Gatilho: 
    Codigo de Fase : 1
    Tempo Estimado: 0000
    Tempo Efetivo : 1111
*/

    if((codigoSaida == "1")||(tempoEstimado == 0000)||(tempoEfetivo == 1111))
               throw invalid_argument("Gatilho ativado");
        
        cout<< "Codigo de fase inserido: "<<codigoSaida<<endl;
        cout<< "Tempo efetivo da fase inserido: "<<tempoEfetivo<<endl;
        cout<< "Tempo estimado da fase inserido: "<<tempoEstimado<<endl;
        
        system("PAUSE");
    }

//StubMetrica-----------------------------------------------------------------
void StubMetrica::numero_linhas(Metrica metrica){
        cout << "\nVoce deseja obter o numero de linhas de codigo no projeto" <<endl<<endl;
        string numero_linhas = "200";
        
        matriculaSaida = metrica.getMatricula().getValor();
        codigoSaida = metrica.getCodigo_Projeto().getValor();
        
/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
*/
        if((matriculaSaida == "00000")||(codigoSaida == "00000"))
               throw invalid_argument("Gatilho ativado");

        cout << "Numero de linhas:"<<numero_linhas<<endl<<endl;
        system("PAUSE");
        }

void StubMetrica::tempo_gasto_projeto(Metrica metrica){
     cout << "\nVoce deseja obter o tempo gasto em minutos para a realizacao do projeto" <<endl<<endl;
     string tempo_gasto_projeto = "30";
     matriculaSaida = metrica.getMatricula().getValor();
     codigoSaida = metrica.getCodigo_Projeto().getValor();

/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
*/
        if((matriculaSaida == "00000")||(codigoSaida == "00000"))
               throw invalid_argument("Gatilho ativado");

     cout << "Tempo gasto em projeto: " <<tempo_gasto_projeto<<" em minutos."<<endl<<endl;
     system("PAUSE");
     }
     
void StubMetrica::tempo_gasto_modulo(Metrica metrica){
     cout << "\nVoce deseja obter o tempo gasto em minutos para a realizacao do modulo" <<endl<<endl;
     string tempo_gasto_modulo = "15";
     
     matriculaSaida = metrica.getMatricula().getValor();
     codigoSaida = metrica.getCodigo_Projeto().getValor();
     
/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
*/
        if((matriculaSaida == "00000")||(codigoSaida == "00000"))
               throw invalid_argument("Gatilho ativado");

     cout << "Tempo gasto em modulo: "<<tempo_gasto_modulo<<" em minutos."<<endl<<endl;
     
     system("PAUSE");
     }

void StubMetrica::produtividade_projeto(Metrica metrica){
    string produtividade_projeto = "6,6";
    cout << "\nVoce deseja obter a produtividade (numero de linhas de codigo por hora) no projeto" <<endl<<endl;

    matriculaSaida = metrica.getMatricula().getValor();
    codigoSaida = metrica.getCodigo_Projeto().getValor();
    
/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
*/
        if((matriculaSaida == "00000")||(codigoSaida == "00000"))
               throw invalid_argument("Gatilho ativado");
               
     cout << "Produtividade no projeto: "<<produtividade_projeto <<endl<<endl;
     system("PAUSE");
     }
     
void StubMetrica::produtividade_modulo(Metrica metrica){
     cout << "\nVoce deseja obter a produtividade no modulo" <<endl<<endl;
     string produtividade_modulo = "8";

     matriculaSaida = metrica.getMatricula().getValor();
     codigoSaida = metrica.getCodigo_Projeto().getValor();

/*Gatilho: 
    Matricula : 00000
    Codigo de Projeto : 00000
*/
        if((matriculaSaida == "00000")||(codigoSaida == "00000"))
               throw invalid_argument("Gatilho ativado");

     cout << "Produtividade no modulo: "<<produtividade_modulo<<endl<<endl;
     system("PAUSE");
     }

void StubMetrica::nota(Metrica metrica){
     cout << "\nVoce deseja obter a nota media" <<endl<<endl;
     string nota = "9";

     codigoSaida = metrica.getCodigo_Projeto().getValor();

/*Gatilho: 
    Codigo de Projeto : 00000
*/
        if(codigoSaida == "00000") throw invalid_argument("Gatilho ativado");
               
     cout << "Nota media: "<<nota <<endl<<endl;
     system("PAUSE");
     }
     
void StubMetrica::tamanho_medio(Metrica metrica){
     cout << "\nVoce deseja obter o tamanho medio (numero de linhas de codigo)" <<endl<<endl;
     string tamanho_medio = "250";

     codigoSaida = metrica.getCodigo_Projeto().getValor();
             
/*Gatilho: 
    Codigo de Projeto : 00000
*/
        if(codigoSaida == "00000") throw invalid_argument("Gatilho ativado");
        
     cout << "Tamanho medio: "<<tamanho_medio<<" numero de linhas."<<endl<<endl;
     system("PAUSE");
    }

void StubMetrica::produtividade_media(Metrica metrica){
     cout << "\nVoce deseja obter a produtividade media (numero de linhas de codigo por hora)" <<endl<<endl;
     string produtividade_media = "100";

     codigoSaida = metrica.getCodigo_Projeto().getValor();
     
/*Gatilho: 
    Codigo de Projeto : 00000
*/
        if(codigoSaida == "00000") throw invalid_argument("Gatilho ativado");
     
     cout << "Produtividade media: "<<produtividade_media <<" numero de linhas por hora."<<endl<<endl;
     system("PAUSE");
    }

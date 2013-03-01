//---------------------------------------------------------------------------
#include "ControladorasLN.h"
#include "ProtocoloPersistencia.h"
#include "StubPersistencia.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
//#include <stdexcept>
//---------------------------------------------------------------------------
#define CLR_SCR system("cls");
using namespace std;
//---------------------------------------------------------------------------

//CntrLNProjeto-----------------------------------------------------------------

void CntrLNProjeto::cadastrar(const Projeto& projeto){
//feito em aula:
//    ComandoBD *cmd = new PesquisarProjeto();
//    cmd->setProjeto(projeto) 
//    protocoloPersistencia->executar(cmd);

    cout << "\nVoce inseriu dados para cadastrar um projeto" <<endl<<endl;
    
    Projeto projetoPesquisado;
    
    
    //try {
//            protocoloPersistencia->executar(comando);
//        } catch (EErroPersistencia exp) {
//            cout << endl << exp.what();
//            cout << endl << "Digite algo para continuar.";
//            getch();
//        }


    try {
                projetoPesquisado = pesquisar(projeto.getCodigo_Projeto().getValor());
                cout << "Primeira etapa"<<endl<<endl;
        }
        catch (EErroPersistencia exp) {
              
              ComandosProjeto *comando = new ComandoCadastrarProjeto(projeto);
              comando->setCodigoProjeto(projeto.getCodigo_Projeto().getValor()); 
              cout <<"Segunda etapa"<<endl<<endl;
        
              try {
                  protocoloPersistencia->executar(comando);
                  cout<<"Terceira etapa"<<endl<<endl;
                  return;
                  }
              catch (EErroPersistencia exp) {
                  throw EErroPersistencia(exp.what());
              }
        }
        
        if(projetoPesquisado.getCodigo_Projeto().getValor() == projeto.getCodigo_Projeto().getValor() && 
           projetoPesquisado.getMatricula().getValor() == projeto.getMatricula().getValor()){
           throw EErroPersistencia("Projeto ja incluido");
        }
        else {
            ComandosProjeto *comando = new ComandoCadastrarProjeto(projeto);
            comando->setCodigoProjeto(projeto.getCodigo_Projeto().getValor()); 
        cout<<"Quarta etapa"<<endl<<endl;
              try {
                  protocoloPersistencia->executar(comando);
                  cout<<"Quinta etapa"<<endl<<endl;
                  }
              catch (EErroPersistencia exp) {
                  throw EErroPersistencia(exp.what());
              }
        }

      system("PAUSE");
    }

void CntrLNProjeto::remover(Codigo_Projeto codigo_projeto){               
        cout << "\nVoce inseriu dados para remover um projeto" <<endl<<endl;
    
        Projeto projeto;       
        ComandosProjeto *comando = new ComandoRemoverProjeto(codigo_projeto);
        comando->setCodigoProjeto(codigo_projeto); 
    
        try {
            protocoloPersistencia->executar(comando);
        } 
        catch (EErroPersistencia exp) {
            throw EErroPersistencia(exp.what());;
        }


        system("PAUSE");
}

Projeto CntrLNProjeto::pesquisar(Codigo_Projeto codigo_projeto){
        cout << "\nVoce inseriu um projeto a ser pesquisado" <<endl<<endl;
        Projeto projeto;
        ComandosProjeto *comando = new ComandoPesquisarProjeto(codigo_projeto);
        comando->setCodigoProjeto(codigo_projeto.getValor());

        try {
            protocoloPersistencia->executar(comando);
        } catch (EErroPersistencia exp) {
            cout << endl << exp.what();
            cout << endl << "Digite algo para continuar.";
            getch();
        }
        try {
                codigo_projeto = projeto.getCodigo_Projeto().getValor();//comandoPesquisarProjeto().getResultado().getValor();
                return projeto;
        }
        catch(EErroPersistencia exp) {
                throw EErroPersistencia(exp.what());
        }

        cout << "projeto pesquisado" <<endl;    
     
      system("PAUSE");
    }
    
void CntrLNProjeto::atualizar(Projeto *projeto){
        cout << "\nVoce inseriu dados para atualizar um projeto" <<endl<<endl;
        
        ComandosProjeto *comando = new ComandoAtualizarProjeto(*projeto);
        comando->setProjeto(*projeto);
    
        try {
                protocoloPersistencia->executar(comando);
        }
        catch(EErroPersistencia exp) {
                throw EErroPersistencia(exp.what());
        }
        system("PAUSE");
}



//CntrLNModulo-----------------------------------------------------------------
void CntrLNModulo::cadastrar(const Modulo& modulo){
        cout << "\nVoce inseriu dados para cadastrar um modulo" <<endl<<endl;

        Modulo moduloPesquisado;
        
        try {
                moduloPesquisado = pesquisar(modulo.getCodigo_Modulo().getValor());
                cout << "Primeira etapa"<<endl<<endl;
        }
        catch (EErroPersistencia exp) {
              
              ComandosModulo *comando = new ComandoCadastrarModulo(modulo);
              comando->setCodigoModulo(modulo.getCodigo_Modulo().getValor()); 
              cout <<"Segunda etapa"<<endl<<endl;
        
              try {
                  protocoloPersistencia->executar(comando);
                  cout<<"Terceira etapa"<<endl<<endl;
                  return;
                  }
              catch (EErroPersistencia exp) {
                  throw EErroPersistencia(exp.what());
              }
        }
        
        if(moduloPesquisado.getCodigo_Modulo().getValor() == modulo.getCodigo_Modulo().getValor()){
           throw EErroPersistencia("Modulo ja incluido");
           system("PAUSE");
        }
        else {
            ComandosModulo *comando = new ComandoCadastrarModulo(modulo);
            comando->setCodigoModulo(modulo.getCodigo_Modulo().getValor()); 
        cout<<"Quarta etapa"<<endl<<endl;
              try {
                  protocoloPersistencia->executar(comando);
                  cout<<"Quinta etapa"<<endl<<endl;
                  }
              catch (EErroPersistencia exp) {
                  throw EErroPersistencia(exp.what());
              }
        }

        system("PAUSE");
    }

void CntrLNModulo::remover(Codigo_Modulo codigo_modulo){
        cout << "\nVoce deseja remover um modulo" <<endl<<endl;
        
        Modulo modulo;       
        ComandosModulo *comando = new ComandoRemoverModulo(codigo_modulo);
        comando->setCodigoModulo(codigo_modulo); 
    
        try {
            protocoloPersistencia->executar(comando);
        } 
        catch (EErroPersistencia exp) {
            throw EErroPersistencia(exp.what());;
        }
        
        system("PAUSE");
    }
    
Modulo CntrLNModulo::pesquisar(Codigo_Modulo codigo_modulo){
        cout << "\nVoce deseja pesquisar um modulo" <<endl<<endl;
        
        Modulo modulo;
        ComandosModulo *comando = new ComandoPesquisarModulo(codigo_modulo);
        comando->setCodigoModulo(codigo_modulo.getValor());

        try {
            protocoloPersistencia->executar(comando);
        } catch (EErroPersistencia exp) {
            cout << endl << exp.what();
            cout << endl << "Digite algo para continuar.";
            getch();
        }
        try {
                codigo_modulo = modulo.getCodigo_Modulo().getValor();//comandoPesquisarProjeto().getResultado().getValor();
                return modulo;
        }
        catch(EErroPersistencia exp) {
                throw EErroPersistencia(exp.what());
        }
        
      system("PAUSE");
    }


void CntrLNModulo::atualizar(Modulo *modulo){
        cout << "\nVoce deseja atualizar um modulo" <<endl<<endl;
        
        ComandosModulo *comando = new ComandoAtualizarModulo(*modulo);
        comando->setModulo(*modulo);
    
        try {
                protocoloPersistencia->executar(comando);
        }
        catch(EErroPersistencia exp) {
                throw EErroPersistencia(exp.what());
        }
        
        system("PAUSE");
    }
    
//CntrLNFase-----------------------------------------------------------------
void CntrLNFase::cadastrar(Fase fase){
        cout << "\nVoce deseja cadastrar o tempo gasto na fase" <<endl<<endl;
        
        
        system("PAUSE");
    }

void CntrLNFase::atualizar(Fase fase){
        cout << "\nVoce deseja atualizar os dados da fase" <<endl<<endl;
        
        system("PAUSE");
    }

//CntrLNMetrica-----------------------------------------------------------------
void CntrLNMetrica::numero_linhas(Metrica metrica){
        cout << "\nVoce deseja obter o numero de linhas de codigo no projeto" <<endl<<endl;
        system("PAUSE");
        }

void CntrLNMetrica::tempo_gasto_projeto(Metrica metrica){
     cout << "\nVoce deseja obter o tempo gasto em minutos para a realizacao do projeto" <<endl<<endl;
     system("PAUSE");
     }
     
void CntrLNMetrica::tempo_gasto_modulo(Metrica metrica){
     cout << "\nVoce deseja obter o tempo gasto em minutos para a realizacao do modulo" <<endl<<endl;
     
     system("PAUSE");
     }

void CntrLNMetrica::produtividade_projeto(Metrica metrica){

    cout << "\nVoce deseja obter a produtividade (numero de linhas de codigo por hora) no projeto" <<endl<<endl;

     system("PAUSE");
     }
     
void CntrLNMetrica::produtividade_modulo(Metrica metrica){
     cout << "\nVoce deseja obter a produtividade no modulo" <<endl<<endl;
     system("PAUSE");
     }

void CntrLNMetrica::nota(Metrica metrica){
     cout << "\nVoce deseja obter a nota media" <<endl<<endl;
     system("PAUSE");
     }
     
void CntrLNMetrica::tamanho_medio(Metrica metrica){
     cout << "\nVoce deseja obter o tamanho medio (numero de linhas de codigo)" <<endl<<endl;
     system("PAUSE");
    }

void CntrLNMetrica::produtividade_media(Metrica metrica){
     cout << "\nVoce deseja obter a produtividade media (numero de linhas de codigo por hora)" <<endl<<endl;
     system("PAUSE");
    }

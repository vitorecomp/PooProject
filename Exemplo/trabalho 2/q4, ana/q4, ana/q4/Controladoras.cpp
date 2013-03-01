//---------------------------------------------------------------------------
#include "Controladoras.h"
#include <iostream>
#include <conio.h>
//---------------------------------------------------------------------------
#define CLR_SCR system("cls");
using namespace std;
//---------------------------------------------------------------------------

//Classe CntrIntNavegacao
void CntrIntNavegacao::apresentarOpcoes(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;
    cout << "1 - Projetos" << endl;
    cout << "2 - Modulos" << endl;
    cout << "3 - Fases" << endl;
    cout << "4 - Metricas" << endl;
    cout << "5 - Encerrar" <<endl << endl;
}

void CntrIntNavegacao::executar(){
    unsigned int escolha;  

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES) {
            CLR_SCR;
            apresentarOpcoes();
            cout << "Escolha a opcao : ";
            cin >> escolha;
        }
    switch (escolha) {
        case OPCAO_PROJETOS: 
            {
            protocoloIntProjeto->executar();
            }
        break;
        
        case OPCAO_MODULOS: 
            {
            protocoloIntModulo->executar();
            }
        break;
        
        case OPCAO_FASES: 
            {
            protocoloIntFase->executar();
            }
        break;
        
        case OPCAO_METRICAS: 
            {
            protocoloIntMetrica->executar();
            }
        break;
        
        case OPCAO_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
}
}


//Classe CntrIntProjeto
void CntrIntProjeto::apresentarOpcoes(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;
    
     cout << "Servicos relacionados a Projetos." << endl << endl;
     cout << "1 - Cadastrar projeto." << endl;
     cout << "2 - Remover projeto." << endl;
     cout << "3 - Pesquisar projeto." << endl;
     cout << "4 - Atualizar projeto." << endl;
     cout << "5 - Voltar." << endl;
     cout << "6 - Encerrar." << endl << endl;
}

void CntrIntProjeto::executar(){

    unsigned int escolha;

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES) {
            CLR_SCR;
            apresentarOpcoes();
            cout << "Escolha a opcao : ";
            cin >> escolha;
        }
    
    switch (escolha) {       
        case OPCAO_CADASTRAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Cadastrar novo projeto no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada ;
            cout << "Digite o codigo de projeto : ";
            cin >> codigoEntrada;
            cout << "Digite a data de inicio (DDMMAAAA): ";
            cin >> dataInicioEntrada;
            cout << "Digite a data de termino (DDMMAAAA) : ";
            cin >> dataTerminoEntrada;
            cout << "Digite a nota: ";
            cin >> notaEntrada;

            try {
                matricula.setValor(matriculaEntrada);
                codigo_projeto.setValor(codigoEntrada);
                data_inicio.setValor(dataInicioEntrada);
                data_termino.setValor(dataTerminoEntrada);
                nota.setValor(notaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Projeto projeto(matricula, codigo_projeto, data_inicio, data_termino, nota);

            try {
                protocoloProjeto->cadastrar(projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
        }
        break;
        
        case OPCAO_REMOVER: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Remover projeto do sistema." << endl << endl;

            cout << "Digite o codigo de projeto do projeto a ser removido : ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
                                  
            try {
                protocoloProjeto->remover(codigo_projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            
            
            }
        break;
        
        case OPCAO_PESQUISAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Pesquisar um projeto do sistema." << endl << endl;

            cout << "Insira os dados do projeto a ser pesquisado"<<endl;
            cout << "Digite a matricula : ";
            cin >> matriculaEntrada ;
            cout << "Digite o codigo de projeto : ";
            cin >> codigoEntrada;
            cout << "Digite a data de inicio (DDMMAAAA): ";
            cin >> dataInicioEntrada;
            cout << "Digite a data de termino (DDMMAAAA) : ";
            cin >> dataTerminoEntrada;
            cout << "Digite a nota: ";
            cin >> notaEntrada;

            try {
                matricula.setValor(matriculaEntrada);
                codigo_projeto.setValor(codigoEntrada);
                data_inicio.setValor(dataInicioEntrada);
                data_termino.setValor(dataTerminoEntrada);
                nota.setValor(notaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Projeto projeto(matricula, codigo_projeto, data_inicio, data_termino, nota);                  
            
            try {
                protocoloProjeto->pesquisar(codigo_projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

             }
        break;

        case OPCAO_ATUALIZAR: 
            {
            CLR_SCR;            
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Atualizar um projeto do sistema." << endl << endl;

            cout << "Insira os dados do projeto a sererm atualizados"<<endl;
            cout << "Digite a matricula : ";
            cin >> matriculaEntrada ;
            cout << "Digite o codigo de projeto : ";
            cin >> codigoEntrada;
            cout << "Digite a data de inicio (DDMMAAAA): ";
            cin >> dataInicioEntrada;
            cout << "Digite a data de termino (DDMMAAAA) : ";
            cin >> dataTerminoEntrada;
            cout << "Digite a nota: ";
            cin >> notaEntrada;

            try {
                matricula.setValor(matriculaEntrada);
                codigo_projeto.setValor(codigoEntrada);
                data_inicio.setValor(dataInicioEntrada);
                data_termino.setValor(dataTerminoEntrada);
                nota.setValor(notaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Projeto projeto(matricula, codigo_projeto, data_inicio, data_termino, nota);                  
    
            try {
                protocoloProjeto->atualizar(&projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            }
        break;
 
        case OPCAO_VOLTAR: return;
            break;
    
        case OPCAO_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
    }
}



//Classe CntrIntModulo
void CntrIntModulo::apresentarOpcoes(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;

     cout << "Servicos relacionados a Modulos." << endl << endl;
     cout << "1 - Cadastrar modulo." << endl;
     cout << "2 - Remover modulo." << endl;
     cout << "3 - Pesquisar modulo." << endl;
     cout << "4 - Atualizar modulo." << endl;
     cout << "5 - Voltar." << endl;
     cout << "6 - Encerrar." << endl << endl;
}

void CntrIntModulo::executar(){

    unsigned int escolha;

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES) {
            CLR_SCR;
            apresentarOpcoes();
            cout << "Escolha a opcao : ";
            cin >> escolha;
        }
    
    switch (escolha) {
        case OPCAO_CADASTRAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Cadastrar novo modulo no sistema." << endl << endl;

            cout << "Digite o codigo de modulo : ";
            cin >> codigoEntrada;
            cout << "Digite o nome do arquivo: ";
            cin >> nomeEntrada;
            cout << "Digite o tamanho do modulo: ";
            cin >> tamanhoEntrada;

            try {
                codigo_modulo.setValor(codigoEntrada);
                nome_arquivo.setValor(nomeEntrada);
                tamanho.setValor(tamanhoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Modulo modulo(codigo_modulo,nome_arquivo,tamanho);
    
            try {
                protocoloModulo->cadastrar(modulo);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            
            }
        break;
        
        case OPCAO_REMOVER: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Remover modulo no sistema." << endl << endl;

            cout << "Digite o codigo do modulo que vai ser removido: ";
            cin >> codigoEntrada;

            try {
                codigo_modulo.setValor(codigoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            try {
                protocoloModulo->remover(codigo_modulo);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            }
        break;
        
        case OPCAO_PESQUISAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Pesquisar um modulo no sistema." << endl << endl;

            cout << "Digite o codigo de modulo : ";
            cin >> codigoEntrada;
            cout << "Digite o nome do arquivo: ";
            cin >> nomeEntrada;
            cout << "Digite o tamanho do modulo: ";
            cin >> tamanhoEntrada;

            try {
                codigo_modulo.setValor(codigoEntrada);
                nome_arquivo.setValor(nomeEntrada);
                tamanho.setValor(tamanhoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Modulo modulo(codigo_modulo,nome_arquivo,tamanho);
            
            try {
            protocoloModulo->pesquisar(codigo_modulo);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

             }
        break;        

        case OPCAO_ATUALIZAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Atualizar um modulo no sistema." << endl << endl;

            cout << "Digite o codigo de modulo : ";
            cin >> codigoEntrada;
            cout << "Digite o nome do arquivo: ";
            cin >> nomeEntrada;
            cout << "Digite o tamanho do modulo: ";
            cin >> tamanhoEntrada;

            try {
                codigo_modulo.setValor(codigoEntrada);
                nome_arquivo.setValor(nomeEntrada);
                tamanho.setValor(tamanhoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Modulo modulo(codigo_modulo,nome_arquivo,tamanho);
            
            try {
            protocoloModulo->atualizar(&modulo);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

            }
        break;
        
        case OPCAO_VOLTAR: return;
           break;
        
        case OPCAO_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
}
}
//Classe CntrIntFase
void CntrIntFase::apresentarOpcoes(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;

     cout << "Servicos relacionados a Fases dos Modulos." << endl << endl;
     cout << "1 - Cadastrar tempo estimado e efetivo." << endl;
     cout << "2 - Atualizar tempo." << endl;
     cout << "3 - Voltar." << endl;
     cout << "4 - Encerrar." << endl << endl;
}

void CntrIntFase::escolherFase(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;
    cout << "Servicos relacionados a Fases dos Modulos." << endl << endl;
    cout << "1 - Planejamento." << endl;
    cout << "2 - Projeto." << endl;
    cout << "3 - Codificacao." << endl;
    cout << "4 - Compilacao." << endl;
    cout << "5 - Teste." << endl;
    cout << "6 - Postmortem." << endl;
    cout << "7 - Voltar." << endl;
    cout << "8 - Encerrar." << endl << endl;
    
}
     
void CntrIntFase::executar(){

    unsigned int escolha;

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES_FASES) {
            CLR_SCR;
            escolherFase();
            cout << "Escolha a opcao : ";
            cin >> escolha;

        }
    
    switch (escolha) {
        case OPCAO_FASE_PLANEJAMENTO: 
            {
            opcoesFase();
            }
        break;
        
        case OPCAO_FASE_PROJETO: 
            {
            opcoesFase();
            }
        break;
        
        case OPCAO_FASE_CODIFICACAO: 
            {
            opcoesFase();
             }
        break;        

        case OPCAO_FASE_COMPILACAO: 
            {
            opcoesFase();
            }
        break;
        
        case OPCAO_FASE_TESTE: 
            {
            opcoesFase();
            }
        break;
        
        case OPCAO_FASE_POSTMORTEM: 
            {
            opcoesFase();
            }
        break;
        
        case OPCAO_FASE_VOLTAR: return;
            break;

        case OPCAO_FASE_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
}
}
     
void CntrIntFase::opcoesFase(){  
    unsigned int escolha; 

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES) {
            CLR_SCR;
            apresentarOpcoes();
            cout << "Escolha a opcao : ";
            cin >> escolha;
        }
    
    switch (escolha) {
        case OPCAO_CADASTRAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Cadastrar tempo da fase no sistema." << endl << endl;

            cout << "Digite o codigo de fase : ";
            cin >> codigoEntrada;
            cout << "Digite o tempo estimado gasto: ";
            cin >> tempoEstimadoEntrada;
            cout << "Digite o tempo efetivo gasto: ";
            cin >> tempoEfetivoEntrada;

            try {
                codigo_fase.setValor(codigoEntrada);
                tempo_estimado.setValor(tempoEstimadoEntrada);
                tempo_efetivo.setValor(tempoEfetivoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Fase fase(codigo_fase,tempo_estimado,tempo_efetivo);
            
            try {
            protocoloFase->cadastrar(fase);           
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            }
        break;  

        case OPCAO_ATUALIZAR: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Atualizar fase no sistema." << endl << endl;

            cout << "Digite o codigo de fase : ";
            cin >> codigoEntrada;
            cout << "Digite o tempo estimado gasto: ";
            cin >> tempoEstimadoEntrada;
            cout << "Digite o tempo efetivo gasto: ";
            cin >> tempoEfetivoEntrada;

            try {
                codigo_fase.setValor(codigoEntrada);
                tempo_estimado.setValor(tempoEstimadoEntrada);
                tempo_efetivo.setValor(tempoEfetivoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Fase fase(codigo_fase,tempo_estimado,tempo_efetivo);


            try {
                protocoloFase->atualizar(fase);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
        }
        break;

        case OPCAO_VOLTAR: return;
            break;

        case OPCAO_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
}
     }


//Classe CntrIntMetrica
void CntrIntMetrica::apresentarOpcoes(){
    cout << "********************************" << endl << endl;
    cout << " Sistema de Projetos dos Alunos " << endl << endl;
    cout << "********************************" << endl << endl;
    
     cout << "Servicos relacionados a Metricas." << endl << endl;
     cout << "1 - Obter numero de linhas de codigo no projeto." << endl;
     cout << "2 - Obter o tempo gasto para a realizacao do projeto." << endl;
     cout << "3 - Obter o tempo gasto para a realizacao do modulo." << endl;
     cout << "4 - Obter a produtividade media do aluno no projeto." << endl;
     cout << "5 - Obter a produtividade do aluno em cada modulo." << endl;
     cout << "6 - Obter a nota media." << endl;
     cout << "7 - Obter o tamanho medio." << endl;
     cout << "8 - Obter a produtividade media." << endl;
     cout << "9 - Voltar." << endl;     
     cout << "10 - Encerrar." << endl << endl;
     
}

void CntrIntMetrica::executar(){

    unsigned int escolha;

    while (true) {
        escolha = 0;
        while(escolha == 0 || escolha > NUMERO_OPCOES) {
            CLR_SCR;
            apresentarOpcoes();
            cout << "Escolha a opcao : ";
            cin >> escolha;
        }
    
    switch (escolha) {
        case OPCAO_NUMERO_LINHAS: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular numero de linhas de codigo no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada;
            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
                matricula.setValor(matriculaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(matricula,codigo_projeto);

            try {
            protocoloMetrica->numero_linhas(metrica);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

            }
        break;
        
        case OPCAO_TEMPO_GASTO_PROJETO: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular o tempo gasto no projeto no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada;
            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
                matricula.setValor(matriculaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(matricula,codigo_projeto);


            try {
                protocoloMetrica->tempo_gasto_projeto(metrica);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

            }
        break;
        
        case OPCAO_TEMPO_GASTO_MODULO: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular o tempo gasto no modulo no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada;
            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
                matricula.setValor(matriculaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(matricula,codigo_projeto);


            try {
                protocoloMetrica->tempo_gasto_modulo(metrica);             
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

             }
        break;        

        case OPCAO_PRODUTIVIDADE_PROJETO: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular a produtividade media do projeto no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada;
            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
                matricula.setValor(matriculaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(matricula,codigo_projeto);


            try {
            protocoloMetrica->produtividade_projeto(metrica);             
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

            }
        break;
        
        case OPCAO_PRODUTIVIDADE_MODULO: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular a produtividade media do modulo no sistema." << endl << endl;

            cout << "Digite a matricula : ";
            cin >> matriculaEntrada;
            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
                matricula.setValor(matriculaEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(matricula,codigo_projeto);      

            try {
                protocoloMetrica->produtividade_modulo(metrica);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
    

            }
        break;
        
        case OPCAO_NOTA: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular a nota media dos alunos no sistema." << endl << endl;

            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(codigo_projeto);

            
            try {
                protocoloMetrica->nota(codigo_projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            
            }
        break;
        
   case OPCAO_TAMANHO_MEDIO: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular o tamanho medio de numero de linhas de codigo no sistema." << endl << endl;

            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(codigo_projeto);


            
            try {
                protocoloMetrica->tamanho_medio(codigo_projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }

            
            
            }
        break;
        
   case OPCAO_PRODUTIVIDADE_MEDIA: 
            {
            CLR_SCR;
            cout << "********************************" << endl << endl;
            cout << " Sistema de Projetos dos Alunos " << endl << endl;
            cout << "********************************" << endl << endl;
            cout << "Calcular a produtividade media (numero de linhas de codigo por hora) do projeto no sistema." << endl << endl;

            cout << "Digite o codigo de projeto: ";
            cin >> codigoEntrada;

            try {
                codigo_projeto.setValor(codigoEntrada);
            }
            catch(invalid_argument& e){
                cout << "\nErro encontrado: " << e.what() << endl;
                system("pause");
                return;
            }
    
            Metrica metrica(codigo_projeto);

            
            
            try {
                protocoloMetrica->produtividade_media(codigo_projeto);
            }
            catch(invalid_argument& e){
                cout << e.what() << endl;
                cout<<"Pressione qualquer tecla para continuar."<<endl;
                getch();
                return;
            }
            
            }
        break;

 
        case OPCAO_VOLTAR: return;
        break;
        
        case OPCAO_ENCERRAR: 
            exit(EXIT_SUCCESS);
    }
}
}

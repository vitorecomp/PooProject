//---------------------------------------------------------------------------
#include "StubPersistencia.h"
#include <iostream>
//#include <cstdlib>
//#include <conio.h>
//---------------------------------------------------------------------------
//#define CLR_SCR system("cls");
using namespace std;
//---------------------------------------------------------------------------

list<ElementoResultado> ComandoBD::listaResultado;

//Classe ErroPersistencia
EErroPersistencia::EErroPersistencia(string mensagem) {
    this->mensagem = mensagem;
}

string EErroPersistencia::what() {
    return mensagem;
}


//Classe CntrPersistencia
void CntrPersistencia::conectar(){

}

void CntrPersistencia::desconectar(){

}

void CntrPersistencia::executar(ComandoBD* cmd) {

}

//---------------------------------------------------------------------------
//Classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}

//Classe ComandoBD
void ComandoBD::executar(sqlite3& bd) throw (EErroPersistencia) {

}

int ComandoBD::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna) {

}


//---------------------------------------------------------------------------
//Classe ComandoCadastrarProjeto.

ComandoCadastrarProjeto::ComandoCadastrarProjeto(Projeto projeto) {

}

ComandoRemoverProjeto::ComandoRemoverProjeto(Codigo_Projeto codigo_projeto){ 


}

ComandoPesquisarProjeto::ComandoPesquisarProjeto(Codigo_Projeto codigo_projeto){ 

}

Projeto ComandoPesquisarProjeto::getResultado() throw (EErroPersistencia) {
        ElementoResultado resultado;
        Projeto projeto;
        
        // Remover codigo do projeto;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        projeto.setCodigo_Projeto(Codigo_Projeto(resultado.getValorColuna()));

        // Remover matricula;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        projeto.setMatricula(Matricula(resultado.getValorColuna()));

        // Remover data de inicio;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        projeto.setData_Inicio(Data_Inicio(resultado.getValorColuna()));

        // Remover data de termino;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        projeto.setData_Termino(Data_Termino(resultado.getValorColuna()));

        // Remover nota;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");        
        resultado = listaResultado.back();
        listaResultado.pop_back();
        projeto.setNota(Nota(resultado.getValorColuna()));

        return projeto;
}


ComandoAtualizarProjeto::ComandoAtualizarProjeto(Projeto projeto){
                     cout << "ComandoAtualizarProjeto" <<endl;    
}

//Comandos de Modulo----------------------------------------------------------
ComandoCadastrarModulo::ComandoCadastrarModulo(Modulo modulo){
    cout << "ComandoCadastrarModulo" <<endl; 
}

ComandoRemoverModulo::ComandoRemoverModulo(Codigo_Modulo codigo_modulo){
    cout << "ComandoRemoverModulo" <<endl; 
}

ComandoPesquisarModulo::ComandoPesquisarModulo(Codigo_Modulo codigo_modulo){
    cout << "ComandoPesquisarModulo" <<endl; 
}

Modulo ComandoPesquisarModulo::getResultado() throw (EErroPersistencia){
        ElementoResultado resultado;
        Modulo modulo;
        
        // Remover codigo do projeto;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        modulo.setCodigo_Modulo(Codigo_Modulo(resultado.getValorColuna()));

        // Remover codigo do modulo;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        modulo.setCodigo_Modulo(Codigo_Modulo(resultado.getValorColuna()));

        // Remover nome;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        modulo.setNome_Arquivo(Nome_Arquivo(resultado.getValorColuna()));
        
        // Remover tamanho;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        modulo.setTamanho(Tamanho(resultado.getValorColuna()));
                                                          
        return modulo;

}

ComandoAtualizarModulo::ComandoAtualizarModulo(Modulo modulo){

}

//Comandos de Fase----------------------------------------------------------
ComandoCadastrarFase::ComandoCadastrarFase(Fase fase){
    
}

ComandoRemoverFase::ComandoRemoverFase(Codigo_Fase codigo_fase){
    
}

ComandoPesquisarFase::ComandoPesquisarFase(Fase *fase){
    
}

Fase ComandoPesquisarFase::getResultado()throw (EErroPersistencia){
    Fase fase;
    return fase;
}

ComandoAtualizarFase::ComandoAtualizarFase(Fase fase){
    
}

//Comandos de Metrica----------------------------------------------------------
ComandoNumeroLinhas::ComandoNumeroLinhas(Metrica metrica){
    
}

ComandoTempoGastoProjeto::ComandoTempoGastoProjeto(Metrica metrica){
    
}

ComandoTempoGastoModulo::ComandoTempoGastoModulo(Metrica metrica){
    
}

ComandoProdutividadeProjeto::ComandoProdutividadeProjeto(Metrica metrica){
    
}

ComandoProdutividadeModulo::ComandoProdutividadeModulo(Metrica metrica){
    
}

ComandoNota::ComandoNota(Metrica metrica){
    
}

ComandoTamanhoMedio::ComandoTamanhoMedio(Metrica metrica){
    
}

ComandoProdutividadeMedia::ComandoProdutividadeMedia(Metrica metrica){
    
}

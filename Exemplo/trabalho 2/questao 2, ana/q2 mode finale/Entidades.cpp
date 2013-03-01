//---------------------------------------------------------------------------
#include "Entidades.h"
//---------------------------------------------------------------------------

//Classe Projeto
Projeto::Projeto(Matricula matricula, Codigo_Projeto codigo_projeto, Data_Inicio data_inicio, Data_Termino data_termino, Nota nota): matricula(matricula), codigo_projeto(codigo_projeto), data_inicio(data_inicio), data_termino(data_termino), nota(nota){}

void Projeto::setMatricula(const Matricula& matricula){
     this->matricula = matricula;
     }

void Projeto::setCodigo_Projeto(const Codigo_Projeto& codigo_projeto){
     this->codigo_projeto = codigo_projeto;
     }
     
void Projeto::setData_Inicio(const Data_Inicio& data_inicio){
     this->data_inicio = data_inicio;
     }

void Projeto::setData_Termino(const Data_Termino& data_termino){
     this->data_termino = data_termino;
     }

void Projeto::setNota(const Nota& nota){
     this->nota = nota;
     }
     
//---------------------------------------------------------------------------
//Classe Modulo
Modulo::Modulo(Codigo_Modulo codigo_modulo, Nome_Arquivo nome_arquivo, Tamanho tamanho): codigo_modulo(codigo_modulo), nome_arquivo(nome_arquivo), tamanho(tamanho){}

void Modulo::setCodigo_Modulo(const Codigo_Modulo& codigo_modulo){
     this->codigo_modulo = codigo_modulo;
     }

void Modulo::setNome_Arquivo(const Nome_Arquivo& nome_arquivo){
     this->nome_arquivo = nome_arquivo;
     }

void Modulo::setTamanho(const Tamanho&){
     this->tamanho = tamanho;
     }
     
//---------------------------------------------------------------------------
//Classe Fase
Fase::Fase(Codigo_Fase codigo_fase, Tempo tempo_estimado, Tempo tempo_efetivo): codigo_fase(codigo_fase), tempo_estimado(tempo_estimado), tempo_efetivo(tempo_efetivo){}

void Fase::setCodigo_Fase(const Codigo_Fase& codigo_fase){
     this->codigo_fase = codigo_fase;
     }
     
void Fase::setTempo_Estimado(const Tempo& tempo_estimado){
     this->tempo_estimado = tempo_estimado;
     }
     
void Fase::setTempo_Efetivo(const Tempo& tempo_efetivo){
     this->tempo_efetivo = tempo_efetivo;
     }

//---------------------------------------------------------------------------
//Classe Metrica
Metrica::Metrica(Matricula matricula, Codigo_Projeto codigo_projeto): matricula(matricula), codigo_projeto(codigo_projeto) {}

void Metrica::setMatricula(const Matricula& matricula){
     this->matricula = matricula;
     }

void Metrica::setCodigo_Projeto(const Codigo_Projeto& codigo_projeto){
     this->codigo_projeto = codigo_projeto;
     }

Metrica::Metrica(Codigo_Projeto codigo_projeto): codigo_projeto(codigo_projeto) {}

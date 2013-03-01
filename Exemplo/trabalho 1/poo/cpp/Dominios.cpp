//---------------------------------------------------------------------------
#include <iostream>
#include "../header/Dominios.h"
//---------------------------------------------------------------------------

//Classe Codigo_Projeto
Codigo_Projeto::Codigo_Projeto(string codigo) throw (invalid_argument){
     validar(codigo);
     valor = codigo;
     }

void Codigo_Projeto::validar(string codigo) throw (invalid_argument){
     if(codigo.size() != 5) 
                    throw invalid_argument("Codigo com formato incorreto.");    
    
     for (unsigned int i = 0; i < codigo.size(); i++) {
         if(!isdigit(codigo.at(i)))              
                      throw invalid_argument("Codigo deve ter somente numeros.");
                      }
         }

//Classe Codigo_Modulo
Codigo_Modulo::Codigo_Modulo(string codigo) throw (invalid_argument){
     validar(codigo);
     valor = codigo;
     }
     
void Codigo_Modulo::validar(string codigo) throw (invalid_argument){
     if(codigo.size() != 5)
                      throw invalid_argument("Codigo com formato incorreto.");
     for (unsigned int i = 0; i < codigo.size(); i++) {
         if(!isdigit(codigo.at(i)))              
                      throw invalid_argument("Codigo deve ter somente numeros.");
                      }
         }
         
//Classe Codigo_Fase
Codigo_Fase::Codigo_Fase(string codigo) throw (invalid_argument){
     validar(codigo);
     valor = codigo;
     }
     
void Codigo_Fase::validar(string codigo) throw (invalid_argument){
    if(codigo.size() != 1)
                      throw invalid_argument("Codigo com formato incorreto.");
     //planejamento (1), projeto (2), codificação (3), compilação (4), teste (5) e postmortem (6)
     if(!(codigo == "1" || codigo == "2" || codigo == "3" || codigo == "4" || codigo == "5" || codigo == "6"))
                      throw invalid_argument("Codigo deve estar entre 1 e 6.");
                      }
                    
//Classe Data_Inicio
Data_Inicio::Data_Inicio(unsigned int data) throw (invalid_argument){
     validar(data);
     valor = data;
     }
     
void Data_Inicio::validar(unsigned int data) throw (invalid_argument){                         
     unsigned int dia, mes, ano;
     
     dia = data/1000000;
     mes = (data/10000) - dia*100;
     ano = data - (data/10000)*10000;
     
     if(mes > 0 && mes % 2 != 0 && mes <=7)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
     if(mes > 0 && mes % 2 == 0 && mes <=7){
            if(mes == 2 && dia > 28)
                   throw invalid_argument("Data invalida.");
            else if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
            }
     if(mes > 0 && mes % 2 != 0 && mes > 7 && mes <= 12)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
     if(mes > 0 && mes % 2 == 0 && mes > 7 && mes <= 12)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
                   
     }

//Classe Data_Termino
Data_Termino::Data_Termino(unsigned int data) throw (invalid_argument){
     validar(data);
     valor = data;
     }
              
void Data_Termino::validar(unsigned int data) throw (invalid_argument){
     unsigned int dia, mes, ano;
     
     dia = data/1000000;
     mes = (data/10000) - dia*100;
     ano = data - (data/10000)*10000;
     
     if(mes > 0 && mes % 2 != 0 && mes <=7)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
     if(mes > 0 && mes % 2 == 0 && mes <=7){
            if(mes == 2 && dia > 28)
                   throw invalid_argument("Data invalida.");
            else if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
            }
     if(mes > 0 && mes % 2 != 0 && mes > 7 && mes <= 12)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
     if(mes > 0 && mes % 2 == 0 && mes > 7 && mes <= 12)
            if(dia < 0 || dia >= 31)
                   throw invalid_argument("Data invalida.");
                   
     }                                                
    
//Classe Matricula
Matricula::Matricula(string matricula) throw (invalid_argument){
     validar(matricula);
     valor = matricula;
     }
      
void Matricula::validar(string matricula) throw (invalid_argument){
     if(matricula.size() != 5)
                   throw invalid_argument("Matricula com formato incorreto.");
     for(unsigned int i = 0; i < matricula.size(); i++) {
         if (!isdigit(matricula.at(i)))
            throw invalid_argument("Matricula com formato incorreto.");
        }
    }
    
//Classe Nome_Arquivo
Nome_Arquivo::Nome_Arquivo(string nome) throw (invalid_argument){
     validar(nome);
     valor = nome;
     }
     
void Nome_Arquivo::validar(string nome) throw (invalid_argument){
     if(nome.size() > 10)
                    throw invalid_argument("Nome invalido.");         
     }

//Classe Nota
Nota::Nota(unsigned int nota) throw (invalid_argument){
     validar(nota);
     valor = nota;
     }
     
void Nota::validar(unsigned int nota) throw (invalid_argument){
     if(nota > 10)
             throw invalid_argument("Nota invalida.");
     }

//Classe Tamanho
Tamanho::Tamanho(unsigned int tamanho) throw (invalid_argument){
     validar(tamanho);
     valor = tamanho;
     }
     
void Tamanho::validar(unsigned int tamanho) throw (invalid_argument){
     if(tamanho > 1000)
                throw invalid_argument("Tamanho invalido.");
     }

//Classe Tempo
Tempo::Tempo(unsigned int tempo) throw (invalid_argument){
     validar(tempo);
     valor = tempo;
     }
     
void Tempo::validar(unsigned int tempo) throw (invalid_argument){
     if(tempo > 2000)
              throw invalid_argument("Tempo invalido.");
     }

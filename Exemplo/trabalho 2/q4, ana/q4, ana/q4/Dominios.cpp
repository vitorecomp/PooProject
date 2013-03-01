//---------------------------------------------------------------------------
#include <iostream>
#include "Dominios.h"
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
Data_Inicio::Data_Inicio(string data) throw (invalid_argument){
     validar(data);
     valor = data;
     }
     
void Data_Inicio::validar(string data) throw (invalid_argument){ 
                            
     if (data.size() != 8)
                throw invalid_argument("Data invalida.");
                
     for (unsigned int i = 0; i < data.size(); i++) {
            if (!isdigit(data.at(i)))
                    throw invalid_argument("Data invalida.");
        }
        
     int dia,mes,ano;
        dia = (data[0]-48)*10 + (data[1]-48);
        mes = (data[2]-48)*10 + (data[3]-48);
        ano = (data[4]-48)*1000 + (data[5]-48)*100 + (data[6]-48)*10 + (data[7]-48);
        
     if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)){ //verifica se os numeros sao validos
            if ((dia == 29 && mes == 2) && ((ano % 4) != 0)) throw invalid_argument("Data invalida."); //verifica se o ano e bissexto
            if (dia >= 28 && mes == 2) throw invalid_argument("Data invalida."); //verifica o mes de feveireiro
            if ((dia >= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) throw invalid_argument("Data invalida."); //verifica os meses de 30 dias
            if ((dia >=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12))throw invalid_argument("Data invalida."); //verifica os meses de 31 dias
      }
     else throw invalid_argument("Data invalida.");
                   
     }

//Classe Data_Termino
Data_Termino::Data_Termino(string data) throw (invalid_argument){
     validar(data);
     valor = data;
     }
              
void Data_Termino::validar(string data) throw (invalid_argument){
    
     if (data.size() != 8)
                throw invalid_argument("Data invalida.");
                
     for (unsigned int i = 0; i < data.size(); i++) {
            if (!isdigit(data.at(i)))
                    throw invalid_argument("Data invalida.");
        }
        
     int dia,mes,ano;
        dia = (data[0]-48)*10 + (data[1]-48);
        mes = (data[2]-48)*10 + (data[3]-48);
        ano = (data[4]-48)*1000 + (data[5]-48)*100 + (data[6]-48)*10 + (data[7]-48);
        
     if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)){ //verifica se os numeros sao validos
            if ((dia == 29 && mes == 2) && ((ano % 4) != 0)) throw invalid_argument("Data invalida."); //verifica se o ano e bissexto
            if (dia >= 28 && mes == 2) throw invalid_argument("Data invalida."); //verifica o mes de feveireiro
            if ((dia >= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) throw invalid_argument("Data invalida."); //verifica os meses de 30 dias
            if ((dia >=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12))throw invalid_argument("Data invalida."); //verifica os meses de 31 dias
      }
     else throw invalid_argument("Data invalida.");
                   
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
Nota::Nota(string nota) throw (invalid_argument){
     validar(nota);
     valor = nota;
     }
     
void Nota::validar(string nota) throw (invalid_argument){
     unsigned int aux;
     stringstream ss(nota);
     ss >> aux;
     if(aux > 10)
             throw invalid_argument("Nota invalida.");
     }

//Classe Tamanho
Tamanho::Tamanho(string tamanho) throw (invalid_argument){
     validar(tamanho);
     valor = tamanho;
     }
     
void Tamanho::validar(string tamanho) throw (invalid_argument){
     unsigned int aux;
     stringstream ss(tamanho);
     ss >> aux;
     if(aux > 1000)
                throw invalid_argument("Tamanho invalido.");
     }

//Classe Tempo
Tempo::Tempo(string tempo) throw (invalid_argument){
     validar(tempo);
     valor = tempo;
     }
     
void Tempo::validar(string tempo) throw (invalid_argument){
     unsigned int aux;
     stringstream ss(tempo);
     ss >> aux;
     if(aux > 2000)
              throw invalid_argument("Tempo invalido.");
     }

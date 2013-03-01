//--------------------------------------------------------------------------
#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "testestipos.h"
using std::invalid_argument;
//--------------------------------------------------------------------------

//Classe TesteUnidadeCodigo_Projeto
void TesteUnidadeCodigo_Projeto::testarValido(){
    try{
        const string CodigoP_Valido = "12345";
        codigo_projeto->setValor(CodigoP_Valido);
        if(codigo_projeto->getValor()!= CodigoP_Valido) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Projeto Valido OK! \n";
}

void TesteUnidadeCodigo_Projeto::testarInvalido(){
    try{
        const string CodigoP_Invalido = "123456";
        codigo_projeto->setValor(CodigoP_Invalido);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Projeto Invalido OK!\n\n";
}

//Classe TesteUnidadeCodigo_Modulo
void TesteUnidadeCodigo_Modulo::testarValido(){
    try{
        const string CodigoM_Valido = "12345";
        codigo_modulo->setValor(CodigoM_Valido);
        if(codigo_modulo->getValor()!= CodigoM_Valido) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Modulo Valido OK! \n";
}

void TesteUnidadeCodigo_Modulo::testarInvalido(){
    try{
        const string CodigoM_Invalido = "123456";
        codigo_modulo->setValor(CodigoM_Invalido);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Modulo Invalido Ok!\n\n";
}

//Classe TesteUnidadeCodigo_Fase
void TesteUnidadeCodigo_Fase::testarValido(){
    try{
        const string CodigoF_Valido = "1";
        codigo_fase->setValor(CodigoF_Valido);
        if(codigo_fase->getValor() != CodigoF_Valido) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Fase Valido OK! \n";
}

void TesteUnidadeCodigo_Fase::testarInvalido(){
    try{
        const string CodigoF_Invalido = "7";
        codigo_fase->setValor(CodigoF_Invalido);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Codigo de Fase Invalido OK! \n\n";
    }


//Classe TesteUnidadeData_Inicio
void TesteUnidadeData_Inicio::testarValido(){
    try{
        const unsigned int Data_Valida = 11102011;
        data_inicio->setValor(Data_Valida);
        if(data_inicio->getValor() != Data_Valida) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Data de Inicio Valida OK! \n";
}        

void TesteUnidadeData_Inicio::testarInvalido(){
    try{
        const unsigned int Data_Invalida = 31022011;
        data_inicio->setValor(Data_Invalida);
    }
    catch(invalid_argument& f){
        cout << "Erro encontrado: " << f.what() << endl;
    }

    cout << "Teste de Data de Inicio Invalida OK! \n\n";

}

//Classe TesteUnidadeData_Termino
void TesteUnidadeData_Termino::testarValido(){
    try{
        const unsigned int Data_Valida = 11102011;
        data_termino->setValor(Data_Valida);
        if (data_termino->getValor() != Data_Valida) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Data de Termino Valida OK! \n";
}

void TesteUnidadeData_Termino::testarInvalido(){
    try{
        const unsigned int Data_Invalida = 31022011;
        data_termino->setValor(Data_Invalida);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Data de Termino Invalida OK! \n\n";
}

//Classe TesteUnidadeMatricula
void TesteUnidadeMatricula::testarValido(){
        try{
            const string Matricula_Valida = "12345";           
            matricula->setValor(Matricula_Valida);
            if(matricula->getValor()!=Matricula_Valida) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
        
    cout << "Teste de Matricula Valida OK! \n";
}
    
void TesteUnidadeMatricula::testarInvalido(){
    try{
        const string Matricula_Invalida = "123456";
        matricula->setValor(Matricula_Invalida);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }     
    cout << "Teste de Matricula Invalida OK! \n\n";
}
        
//Classe TesteUnidadeNome_Arquivo
void TesteUnidadeNome_Arquivo::testarValido(){
    try{
        const string NomeValido = "nome";
        nome_arquivo->setValor(NomeValido);
        if (nome_arquivo->getValor() != NomeValido) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Nome de Arquivo Valido OK!\n";
}

void TesteUnidadeNome_Arquivo::testarInvalido(){
    try{
        const string NomeInvalido = "nomearquivo";
        nome_arquivo->setValor(NomeInvalido);   
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    
    cout << "Teste de Nome de Arquivo Invalido OK!\n\n";
}

//Classe TesteUnidadeNota
void TesteUnidadeNota::testarValido(){
    try{
        const unsigned int NotaValida = 8;
        nota->setValor(NotaValida);
        if(nota->getValor() != NotaValida) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Nota Valida OK!\n";
}

void TesteUnidadeNota::testarInvalido(){
    try{
        const unsigned int NotaInvalida = 11;
        nota->setValor(NotaInvalida);
    }
   catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Nota Invalida OK!\n\n";
}

//Classe TesteUnidadeTamanho
void TesteUnidadeTamanho::testarValido(){
    try{
        const unsigned int TamanhoValido = 999;
        tamanho->setValor(TamanhoValido);
        if (tamanho->getValor() != TamanhoValido) throw invalid_argument("Erro");
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Tamanho Valido OK!\n";
}

void TesteUnidadeTamanho::testarInvalido(){
    try{
        const unsigned int TamanhoInvalido = 1001;
        tamanho->setValor(TamanhoInvalido);
    }
    catch(invalid_argument& e){
        cout << "Erro encontrado: " << e.what() << endl;
    }
    cout << "Teste de Tamanho Invalido OK!\n\n";
}


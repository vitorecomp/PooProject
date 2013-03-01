//---------------------------------------------------------------------------
#include <cstdlib>
#include <iostream>

#include "testestipos.h"
#include "testestipos.cpp"
#include "../header/Dominios.h"
#include "../cpp/Dominios.cpp"
#include "../header/Entidades.h"
#include "../cpp/Entidades.cpp"
//---------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Testes de Argumentos Validos e Invalidos: \n" <<endl;
 
    //Teste de Unidade da Classe Codigo_Projeto
    TesteUnidadeCodigo_Projeto *TesteProjeto;
    TesteProjeto = new TesteUnidadeCodigo_Projeto;
    
    TesteProjeto->run();
    
    //Teste de Unidade da Classe Codigo_Modulo
    TesteUnidadeCodigo_Modulo *TesteModulo;
    TesteModulo = new TesteUnidadeCodigo_Modulo;
    
    TesteModulo->run();
    
    //Teste de Unidade da Classe Codigo_Fase
    TesteUnidadeCodigo_Fase *TesteFase;
    TesteFase = new TesteUnidadeCodigo_Fase;
    
    TesteFase->run();

    //Teste de Unidade da Classe Data_Inicio
    TesteUnidadeData_Inicio *TesteData_Inicio;
    TesteData_Inicio = new TesteUnidadeData_Inicio;

    TesteData_Inicio->run();

    //Teste de Unidade da Classe Data_Termino
    TesteUnidadeData_Termino *TesteData_Termino;
    TesteData_Termino = new TesteUnidadeData_Termino;

    TesteData_Termino->run();

    //Teste de Unidade da Classe Matricula
    TesteUnidadeMatricula *TesteMatricula;
    TesteMatricula = new TesteUnidadeMatricula;
    
    TesteMatricula->run();
    
    //Teste de Unidade da Classe Nome_Arquivo
    TesteUnidadeNome_Arquivo *TesteNome;
    TesteNome = new TesteUnidadeNome_Arquivo;
    
    TesteNome->run();

    //Teste de Unidade da Classe Nota
    TesteUnidadeNota *TesteNota;
    TesteNota = new TesteUnidadeNota;
    
    TesteNota->run();
    
    //Teste de Unidade da Classe Tamanho
    TesteUnidadeTamanho *TesteTamanho;
    TesteTamanho = new TesteUnidadeTamanho;
    
    TesteTamanho->run();

    cout << "Todos os testes estao OK!" <<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

//---------------------------------------------------------------------------
#ifndef testestiposH
#define testestiposH

#include <iostream>
#include "..\header\Dominios.h"
#include "..\header\Entidades.h"
//---------------------------------------------------------------------------

/**
 * \mainpage Testes do Sistema de Projetos de Alunos
 * Esse sistema realiza os testes dos tipos basicos definidos no Sistema de Projeto de Alunos.
 * Para cada tipo basico realiza-se um teste usando um argumento valido e um invalido.
 *
*/

/// Classe TesteUnidade
/** Classe basica para realizacao dos testes*/
class TesteUnidade {
    public:
        virtual void setUp() = 0;
        virtual void tearDown() = 0;
        virtual void run() = 0;
};

/// Classe TesteUnidadeCodigo_Projeto
/** Realiza o teste de validez da classe Codigo_Projeto */
class TesteUnidadeCodigo_Projeto: public TesteUnidade, public Codigo_Projeto {
    private:
        Codigo_Projeto *codigo_projeto;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Codigo_Projeto
 */
        void setUp(){
            codigo_projeto = new Codigo_Projeto;
        }
/**
 * \brief deleta a instancia da classe Codigo_Projeto
 */
        void tearDown(){
            delete codigo_projeto;
        }
 /**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};

/// Classe TesteUnidadeCodigo_Modulo
/** Realiza o teste de validez da classe Codigo_Modulo */
class TesteUnidadeCodigo_Modulo: public TesteUnidade, public Codigo_Modulo{
    private:
        Codigo_Modulo *codigo_modulo;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Codigo_Modulo
 */
        void setUp(){
            codigo_modulo = new Codigo_Modulo;
        }
/**
 * \brief deleta a instancia da classe Codigo_Modulo
 */
        void tearDown(){
            delete codigo_modulo;
        }
 /**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};

/// Classe TesteUnidadeCodigo_Fase
/** Realiza o teste de validez da classe Codigo_Fase */
class TesteUnidadeCodigo_Fase: public TesteUnidade, public Codigo_Fase{
    private:
        Codigo_Fase *codigo_fase;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Codigo_Fase
 */
        void setUp(){
            codigo_fase = new Codigo_Fase;
        }
/**
 * \brief deleta a instancia da classe Codigo_Fase
 */
        void tearDown(){
            delete codigo_fase;
        }
 /**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};
       
/// Classe TesteUnidadeData_Inicio
/** Realiza o teste de validez da classe Data_Inicio */
class TesteUnidadeData_Inicio: public TesteUnidade, public Data_Inicio{
    private:
        Data_Inicio *data_inicio;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Data_Inicio
 */
        void setUp(){
            data_inicio = new Data_Inicio;
        }
/**
 * \brief deleta a instancia da classe Data_Inicio
 */
        void tearDown(){
            delete data_inicio;
        }
 /**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};

/// Classe TesteUnidadeData_Termino
/** Realiza o teste de validez da classe Data_Termino*/
class TesteUnidadeData_Termino: public TesteUnidade, public Data_Termino{
    private:
        Data_Termino *data_termino;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Data_Termino
 */
        void setUp(){
            data_termino = new Data_Termino;
        }
/**
 * \brief deleta a instancia da classe Data_Termino
 */
        void tearDown(){
            delete data_termino;
        }
/**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};
      
/// Classe TesteUnidadeMatricula
/** Realiza o teste de validez da classe Matricula */
class TesteUnidadeMatricula: public TesteUnidade, public Matricula {
    private:
        Matricula *matricula;
        void testarValido();
        void testarInvalido();
    
    public:
/**
 * \brief cria uma instancia da classe Matricula
 */
        void setUp(){
            matricula = new Matricula;
        }
/**
 * \brief deleta a instancia da classe Matricula
 */
        void tearDown(){
            delete matricula;
        }
/**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run() {
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        } 
};

/// Classe TesteUnidadeNome_Arquivo
/** Realiza o teste de validez da classe Nome_Arquivo*/
class TesteUnidadeNome_Arquivo: public TesteUnidade, public Nome_Arquivo {
    private:
        Nome_Arquivo *nome_arquivo;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Nome_Arquivo
 */
        void setUp(){
            nome_arquivo = new Nome_Arquivo;
        }
/**
 * \brief deleta a instancia da classe Nome_Arquivo
 */
        void tearDown(){
            delete nome_arquivo;
        }
/**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};

/// Classe TesteUnidadeNota
/** Realiza o teste de validez da classe Nota */
class TesteUnidadeNota: public TesteUnidade, public Nota{
    private:
        Nota *nota;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Nota
 */
        void setUp(){
            nota = new Nota;
        }
/**
 * \brief deleta a instancia da classe Nota
 */
        void tearDown(){
            delete nota;
        }
/**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
};

/// Classe TesteUnidadeTamanho
/** Realiza o teste de validez da classe Tamanho*/
class TesteUnidadeTamanho: public TesteUnidade, public Tamanho{
    private:
        Tamanho *tamanho;
        void testarValido();
        void testarInvalido();
    public:
/**
 * \brief cria uma instancia da classe Tamanho
 */
        void setUp(){
            tamanho = new Tamanho;
        }
/**
 * \brief deleta a instancia da classe Tamanho
 */
        void tearDown(){
            delete tamanho;
        }
/**
 * \brief executa o setUp(), testarValido() , testarInvalido(), tearDown().
 */
        void run(){
            setUp();
            testarValido();
            testarInvalido();
            tearDown();
        }
    };

#endif

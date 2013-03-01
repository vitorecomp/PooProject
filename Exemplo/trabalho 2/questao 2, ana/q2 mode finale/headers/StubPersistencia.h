//---------------------------------------------------------------------------
#ifndef StubPersistenciaH
#define StubPersistenciaH
//---------------------------------------------------------------------------
#include "ProtocoloPersistencia.h"
#include "Protocolos.h"
#include "Entidades.h"
#include <list>
#include "sqlite3.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
//---------------------------------------------------------------------------

class ComandoBD;

///Classe que representa o Erro Persistencia
/**Retorna mensagem de erro, caso exista erro no banco de dados*/
class EErroPersistencia {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

///Classe que representa a Controladora de Persistencia
/**Recebe os dados da camada de negocio e manda os servicos pro banco de dados*/
class CntrPersistencia: public ProtocoloPersistencia {
private:
    const char *nomeBancoDados;
    int rc;
protected:
    sqlite3 *bd;
    void conectar();
    void desconectar();
public:
    CntrPersistencia() {
        nomeBancoDados = "testedb";
    }
    void executar(ComandoBD*);
};

///Classe que representa o ElementoResultado
/**Armazena valores e resultados do banco de dados*/
class ElementoResultado {
private:
        string nomeColuna;
        string valorColuna;
public:
        void setNomeColuna(const string&);
        string getNomeColuna() const;
        void setValorColuna(const string&);
        string getValorColuna() const;
};

inline string ElementoResultado::getNomeColuna() const {
        return nomeColuna;
}

inline string ElementoResultado::getValorColuna() const {
        return valorColuna;
}

///Classe que representa os Comandos do Bando de Dados
/**Executa os comandos internos do banco de dados*/
class ComandoBD {
private:
        char *mensagem;
        int rc;
        static int callback(void *, int, char **, char **);
protected:
        static list<ElementoResultado> listaResultado;
        string comandoBD;
public:
        void executar(sqlite3&) throw (EErroPersistencia);
};


//Comandos de Projeto----------------------------------------------------------
///Classe ComandosProjeto herda a classe ComandosBD e prove servicos pros comandos de Projetos
class ComandosProjeto: public ComandoBD{
    protected:
        Projeto projeto;
        Codigo_Projeto codigo_projeto;
    public:
        void setProjeto(Projeto);
        void setCodigoProjeto(Codigo_Projeto);
    };

/**
 * \brief Seta o parametro projeto de ComandosProjeto
 * \param projeto
 */
    
inline void ComandosProjeto::setProjeto(Projeto projeto){
    this->projeto = projeto;
}

/**
 * \brief Seta o codigo_projeto de ComandosProjeto
 * \param codigo_projeto
 */ 
inline void ComandosProjeto::setCodigoProjeto(Codigo_Projeto codigo_projeto){
    this->codigo_projeto = codigo_projeto;
}

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de cadastrar um projeto na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoCadastrarProjeto: public ComandosProjeto{
public:
    ComandoCadastrarProjeto(Projeto);  
    void setProjeto(Projeto *);
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de remover um codigo de projeto na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoRemoverProjeto: public ComandosProjeto{
protected:
    Codigo_Projeto codigo_projeto;
public:
    ComandoRemoverProjeto(Codigo_Projeto);  
    void setCodigoProjeto(Codigo_Projeto);    
};

/**
 * \brief Seta o codigo_projeto de ComandoRemoverProjeto
 * \param codigo_projeto
 */
inline void ComandoRemoverProjeto::setCodigoProjeto(Codigo_Projeto codigo_projeto){
    this->codigo_projeto = codigo_projeto;
}

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de pesquisar um codigo de projeto na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoPesquisarProjeto: public ComandosProjeto{
public:
    ComandoPesquisarProjeto(Codigo_Projeto);  
    Projeto getResultado() throw (EErroPersistencia);
    void setProjeto(Projeto *);    
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de atualizar um codigo de projeto na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoAtualizarProjeto: public ComandosProjeto{
public:
    ComandoAtualizarProjeto(Projeto);   
    void setProjeto(Projeto);    
};

//Comandos de Modulo----------------------------------------------------------
///Classe ComandosModulo herda a classe ComandosBD e prove servicos pros comandos de Modulos
class ComandosModulo: public ComandoBD{
    protected:
        Modulo modulo;
        Codigo_Modulo codigo_modulo;
    public:
        void setModulo(Modulo);
        void setCodigoModulo(Codigo_Modulo);
    };

/**
 * \brief Seta o parametro modulo de ComandosModulo
 * \param modulo
 */ 
 
inline void ComandosModulo::setModulo(Modulo modulo){
    this->modulo = modulo;
}

/**
 * \brief Seta o codigo_modulo de ComandosModulo
 * \param codigo_modulo
 */ 

inline void ComandosModulo::setCodigoModulo(Codigo_Modulo codigo_modulo){
    this->codigo_modulo = codigo_modulo;
}

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de cadastrar um modulo na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoCadastrarModulo: public ComandosModulo{
public:
    ComandoCadastrarModulo(Modulo);  
     void setModulo(Modulo*);
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de remover um codigo de modulo na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoRemoverModulo: public ComandosModulo{
protected:
    Codigo_Modulo codigo_modulo;
public:
    ComandoRemoverModulo(Codigo_Modulo);  
    void setCodigoModulo(Codigo_Modulo);
};

/**
 * \brief Seta o codigo_modulo de ComandoRemoverModulo
 * \param codigo_modulo
 */
inline void ComandoRemoverModulo::setCodigoModulo(Codigo_Modulo codigo_modulo){
    this->codigo_modulo = codigo_modulo;
}

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de pesquisar um codigo de modulo na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoPesquisarModulo: public ComandosModulo{
public:
    ComandoPesquisarModulo(Codigo_Modulo);
    Modulo getResultado()  throw (EErroPersistencia);
    void setModulo(Modulo*);
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de atualizar um codigo de modulo na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoAtualizarModulo: public ComandosModulo{
public:
    ComandoAtualizarModulo(Modulo);
    void setModulo(Modulo);
};

//Comandos de Fase----------------------------------------------------------
///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de cadastrar uma fase na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoCadastrarFase: public ComandoBD{
public:
    ComandoCadastrarFase(Fase);  
    
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de remover um codigo de fase na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoRemoverFase: public ComandoBD{
public:
    ComandoRemoverFase(Codigo_Fase);  
    
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de pesquisar um codigo de fase na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoPesquisarFase: public ComandoBD{
public:
    ComandoPesquisarFase(Fase*);  
    Fase getResultado()  throw (EErroPersistencia);
};

///Classe que simula servicos da classe ProtocoloPersistencia
/**Simula a acao de atualizar uma fase na camada de persistencia e retorna o resultado para as camadas superiores*/
class ComandoAtualizarFase: public ComandoBD{
public:
    ComandoAtualizarFase(Fase);  
    
};

//Comandos de Metrica----------------------------------------------------------
///Classe ComandoNumeroLinhas herda a classe comandoBD e prove servicos para calcular o numero de linhas
class ComandoNumeroLinhas: public ComandoBD{
public:
    ComandoNumeroLinhas(Metrica);   
    
};

///Classe ComandoTempoGastoProjeto herda a classe comandoBD e prove servicos para calcular o tempo gasto no projeto
class ComandoTempoGastoProjeto: public ComandoBD{
public:
    ComandoTempoGastoProjeto(Metrica);  
    
};

///Classe ComandoTempoGastoModulo herda a classe comandoBD e prove servicos para calcular o tempo gasto no modulo
class ComandoTempoGastoModulo: public ComandoBD{
public:
    ComandoTempoGastoModulo(Metrica);
       
};

///Classe ComandoProdutividadeProjeto herda a classe comandoBD e prove servicos para calcular a produtividade do projeto
class ComandoProdutividadeProjeto: public ComandoBD{
public:
    ComandoProdutividadeProjeto(Metrica);  
    
};

///Classe ComandoProdutividadeModulo herda a classe comandoBD e prove servicos para calcular a produtividade do modulo
class ComandoProdutividadeModulo: public ComandoBD{
public:
    ComandoProdutividadeModulo(Metrica);
    
};

///Classe ComandoNota herda a classe comandoBD e prove servicos para calcular as notas
class ComandoNota: public ComandoBD{
public:
    ComandoNota(Metrica);
    
};

///Classe ComandoTamanhoMedio herda a classe comandoBD e prove servicos para calcular o tamanho medio
class ComandoTamanhoMedio: public ComandoBD{
public:
    ComandoTamanhoMedio(Metrica);  
    
};

///Classe ComandoProdutividadeMedia herda a classe comandoBD e prove servicos para calcular a produtividade media
class ComandoProdutividadeMedia: public ComandoBD{
public:
    ComandoProdutividadeMedia(Metrica);  
    
};

#endif


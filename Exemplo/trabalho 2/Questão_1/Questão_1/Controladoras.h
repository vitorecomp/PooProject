//---------------------------------------------------------------------------
#ifndef ControladorasH
#define ControladorasH
//---------------------------------------------------------------------------
#include "Dominios.h"
#include "Entidades.h"
#include "Protocolos.h"
#include "Stubs.h"
//---------------------------------------------------------------------------
#define CLR_SCR system("cls");
//---------------------------------------------------------------------------

///Classe que representa a controladora de interacao Usuario/Projeto
/**Recebe a opcao escolhida pelo usuario acerca dos servicos do modulo de Projeto e encaminha servico escolhido para a logica de negocio*/
class CntrIntProjeto : public ProtocoloIntProjeto {
  //Constantes para identificar a op��o escolhida
  static const unsigned int NUMERO_OPCOES   = 6;
  static const unsigned int OPCAO_CADASTRAR = 1;
  static const unsigned int OPCAO_REMOVER   = 2;
  static const unsigned int OPCAO_PESQUISAR = 3;
  static const unsigned int OPCAO_ATUALIZAR = 4;
  static const unsigned int OPCAO_VOLTAR    = 5;
  static const unsigned int OPCAO_ENCERRAR  = 6;

  void apresentarOpcoes();

protected:
    ProtocoloProjeto *protocoloProjeto; //classe protocolo

public:
        CntrIntProjeto(){}
        void executar();
        void setCntr(ProtocoloProjeto*);  //set na classe protocolo

            string matriculaEntrada;
            string codigoEntrada;
            unsigned int dataInicioEntrada;
            unsigned int dataTerminoEntrada;
            unsigned int notaEntrada;

            Matricula matricula;
            Codigo_Projeto codigo_projeto;
            Data_Inicio data_inicio;
            Data_Termino data_termino;
            Nota nota;

};
/**
 *\brief Seta a controladora de interacao com o projeto
 *\param *protocoloProjeto
 */
inline void CntrIntProjeto::setCntr(ProtocoloProjeto *protocoloProjeto){
    this->protocoloProjeto = protocoloProjeto;
}

///Classe que representa a controladora de interacao Usuario/Modulo
/**Recebe a opcao escolhida pelo usuario acerca dos servicos do Modulo e encaminha servico escolhido para a logica de negocio*/
class CntrIntModulo : public ProtocoloIntModulo {
  //Constantes para identificar a op��o escolhida
  static const unsigned int NUMERO_OPCOES   = 6;
  static const unsigned int OPCAO_CADASTRAR = 1;
  static const unsigned int OPCAO_REMOVER   = 2;
  static const unsigned int OPCAO_PESQUISAR = 3;
  static const unsigned int OPCAO_ATUALIZAR = 4;
  static const unsigned int OPCAO_VOLTAR    = 5;
  static const unsigned int OPCAO_ENCERRAR  = 6;

  void apresentarOpcoes();

protected:
    ProtocoloModulo *protocoloModulo; //classe protocolo

public:
    CntrIntModulo(){}
    void executar();
    void setCntr(ProtocoloModulo*);  //set na classe protocolo

    string codigoEntrada;
    string nomeEntrada;
    unsigned int tamanhoEntrada;

    Codigo_Modulo codigo_modulo;
    Nome_Arquivo nome_arquivo;
    Tamanho tamanho;


};
/**
 *\brief Seta a controladora de interacao com o modulo
 *\param *protocoloModulo
 */
inline void CntrIntModulo::setCntr(ProtocoloModulo *protocoloModulo){
    this->protocoloModulo = protocoloModulo;
}

///Classe que representa a controladora de interacao Usuario/Fase
/**Recebe a opcao escolhida pelo usuario acerca dos servicos do modulo de Fase e encaminha servico escolhido para a logica de negocio*/
class CntrIntFase : public ProtocoloIntFase {
      //Constantes para identificar a op��o escolhida
  static const unsigned int NUMERO_OPCOES   = 4;
  static const unsigned int OPCAO_CADASTRAR = 1;
  static const unsigned int OPCAO_ATUALIZAR = 2;
  static const unsigned int OPCAO_VOLTAR    = 3;
  static const unsigned int OPCAO_ENCERRAR  = 4;

  static const unsigned int NUMERO_OPCOES_FASES        = 8;  //pra escolher a fase: planejamento, projeto, codifica��o, compila��o, teste e postmortem.
  static const unsigned int OPCAO_FASE_PLANEJAMENTO    = 1;
  static const unsigned int OPCAO_FASE_PROJETO         = 2;
  static const unsigned int OPCAO_FASE_CODIFICACAO     = 3;
  static const unsigned int OPCAO_FASE_COMPILACAO      = 4;
  static const unsigned int OPCAO_FASE_TESTE           = 5;
  static const unsigned int OPCAO_FASE_POSTMORTEM      = 6;
  static const unsigned int OPCAO_FASE_VOLTAR          = 7;
  static const unsigned int OPCAO_FASE_ENCERRAR        = 8;

  void escolherFase();
  void apresentarOpcoes();

protected:
    ProtocoloFase *protocoloFase; //classe protocolo

public:
        CntrIntFase(){}
        void opcoesFase();
        void executar();
        void setCntr(ProtocoloFase*);  //set na classe protocolo

        string codigoEntrada;
        unsigned int tempoEstimadoEntrada;
        unsigned int tempoEfetivoEntrada;

        Codigo_Fase codigo_fase;
        Tempo tempo_estimado;
        Tempo tempo_efetivo;

};
/**
 *\brief Seta a controladora de interacao com a Fase
 *\param *protocoloFase
 */
inline void CntrIntFase::setCntr(ProtocoloFase *protocoloFase){
    this->protocoloFase = protocoloFase;
}

///Classe que representa a controladora de interacao Usuario/Metrica
/**Recebe a opcao escolhida pelo usuario acerca dos servicos do modulo de Metrica e encaminha servico escolhido para a logica de negocio*/
class CntrIntMetrica : public ProtocoloIntMetrica {
      //Constantes para identificar a op��o escolhida
  static const unsigned int NUMERO_OPCOES               = 10;
  static const unsigned int OPCAO_NUMERO_LINHAS         = 1;
  static const unsigned int OPCAO_TEMPO_GASTO_PROJETO   = 2;
  static const unsigned int OPCAO_TEMPO_GASTO_MODULO    = 3;
  static const unsigned int OPCAO_PRODUTIVIDADE_PROJETO = 4;
  static const unsigned int OPCAO_PRODUTIVIDADE_MODULO  = 5;
  static const unsigned int OPCAO_NOTA                  = 6;
  static const unsigned int OPCAO_TAMANHO_MEDIO         = 7;
  static const unsigned int OPCAO_PRODUTIVIDADE_MEDIA   = 8;
  static const unsigned int OPCAO_VOLTAR                = 9;
  static const unsigned int OPCAO_ENCERRAR              = 10;

  void apresentarOpcoes();

protected:
    ProtocoloMetrica *protocoloMetrica; //classe protocolo

public:
        CntrIntMetrica(){}
        void executar();
        void setCntr(ProtocoloMetrica*);  //set na classe protocolo

        string codigoEntrada;
        string matriculaEntrada;

        Codigo_Projeto codigo_projeto;
        Matricula matricula;

};
/**
 *\brief Seta a controladora de interacao com a Metrica
 *\param *protocoloMetrica
 */
inline void CntrIntMetrica::setCntr(ProtocoloMetrica *protocoloMetrica){
    this->protocoloMetrica = protocoloMetrica;
}


///Classe que representa a controladora de interacao Usuario/Navegacao
/**Recebe a opcao escolhida pelo usuario e encaminha servico para a classe controladora escolhida escolha do usu�rio, atraves do set do ProtocoloInt especifico*/
class CntrIntNavegacao  {
  //Constantes para identificar a op��o escolhida
  static const unsigned int NUMERO_OPCOES   = 5;
  static const unsigned int OPCAO_PROJETOS  = 1;
  static const unsigned int OPCAO_MODULOS   = 2;
  static const unsigned int OPCAO_FASES     = 3;
  static const unsigned int OPCAO_METRICAS  = 4;
  static const unsigned int OPCAO_ENCERRAR  = 5;
  void apresentarOpcoes();

    //Classes Protocolos para escolha
    protected:
    ProtocoloInt *protocoloIntProjeto, *protocoloIntModulo, *protocoloIntFase, *protocoloIntMetrica;

    public:
    CntrIntNavegacao() {}
    void setCntrIntProjeto(ProtocoloInt*);
    void setCntrIntModulo(ProtocoloInt*);
    void setCntrIntFase(ProtocoloInt*);
    void setCntrIntMetrica(ProtocoloInt*);
    void executar();
};
/**
 *\brief Seta a controladora de interacao da navegacao com o Projeto
 *\param *protocoloIntProjeto
 */
inline void CntrIntNavegacao::setCntrIntProjeto(ProtocoloInt* cntr){
    this->protocoloIntProjeto = cntr;
}
/**
 *\brief Seta a controladora de interacao da navegacao com o Modulo
 *\param *protocoloIntModulo
 */
inline void CntrIntNavegacao::setCntrIntModulo(ProtocoloInt* cntr){
    this->protocoloIntModulo = cntr;
}
/**
 *\brief Seta a controladora de interacao da navegacao com a Fase
 *\param *protocoloIntFase
 */
inline void CntrIntNavegacao::setCntrIntFase(ProtocoloInt* cntr){
    this->protocoloIntFase = cntr;
}
/**
 *\brief Seta a controladora de interacao da navegacao com a Metrica
 *\param *protocoloIntMetrica
 */
inline void CntrIntNavegacao::setCntrIntMetrica(ProtocoloInt* cntr){
    this->protocoloIntMetrica = cntr;
}

#endif

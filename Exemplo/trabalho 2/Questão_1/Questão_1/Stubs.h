//---------------------------------------------------------------------------
#ifndef StubsH
#define StubsH
//---------------------------------------------------------------------------
#include "Protocolos.h"
//---------------------------------------------------------------------------


//Classes STUB -------------------------------------------------------------

///Classe que simula servicos da classe ProtocoloProjeto
/**Simula acoes como cadastrar, remover, pesquisar e atualizar Projeto*/
class StubProjeto : public ProtocoloProjeto, public Projeto {
    public:
        StubProjeto(){}
        void cadastrar(Projeto);
        void remover(Codigo_Projeto);
        void pesquisar(Projeto *);
        void atualizar(Projeto);
        string matriculaSaida;
        string codigoSaida;
        unsigned int dataInicioSaida;
        unsigned int dataTerminoSaida;
        unsigned int notaSaida;

};


///Classe que simula servicos da classe ProtocoloProjeto
/**Simula acoes como cadastrar, remover, pesquisar e atualizar Projeto*/
class StubModulo : public ProtocoloModulo, public Modulo {
    public:
        StubModulo(){}
        void cadastrar(Modulo);
        void remover(Codigo_Modulo);
        void pesquisar(Modulo *);
        void atualizar(Modulo);
        string codigoSaida;
        string nomeSaida;
        unsigned int tamanhoSaida;
};

///Classe que simula a logica de negocio de Fase
/**Simula acoes como cadastrar e atualizar Fase, alem de apresentar tempo efetivo e tempo estimado do projeto*/
class StubFase : public ProtocoloFase, public Fase {
    public:
        StubFase(){}
        void cadastrar(Fase);
        void atualizar(Fase);
        string codigoSaida;
        unsigned int tempoEfetivo;
        unsigned int tempoEstimado;

};
///Classe que simula servicos da classe ProtocoloMetrica
/**Realiza acoes como mostrar numero de linhas, tempo gasto do projeto, tempo gasto do modulo, produtividade do modulo, notas, tamanho medio e produtividade media de Metrica*/
class StubMetrica : public ProtocoloMetrica, public Metrica {
      public:
             StubMetrica(){}
             void numero_linhas(Metrica);
             void tempo_gasto_projeto(Metrica);
             void tempo_gasto_modulo(Metrica);
             void produtividade_projeto(Metrica);
             void produtividade_modulo(Metrica);
             void nota(Metrica);
             void tamanho_medio(Metrica);
             void produtividade_media(Metrica);

             string matriculaSaida;
             string codigoSaida;

};

#endif

//---------------------------------------------------------------------------
#ifndef ControladorasLNH
#define ControladorasLNH
//---------------------------------------------------------------------------
#include "Protocolos.h"
#include "ProtocoloPersistencia.h"
//---------------------------------------------------------------------------

//Classe Controladora de Negocio Projeto --------------------------------------

///Classe que representa a controladora de logica de negocio relacionada aos projetos
/**Recebe os dados da camada de apresentacao e prove os servicos relacionados aos projetos para a camada de persistencia. Aqui tambem sao executados os servicos de regra de negocio.*/
class CntrLNProjeto : public ProtocoloProjeto {  
    protected:
        ProtocoloPersistencia *protocoloPersistencia;
    public:
        CntrLNProjeto(){}
        void cadastrar(const Projeto&);
        void remover(Codigo_Projeto);
        Projeto pesquisar(Codigo_Projeto);
        void atualizar(Projeto*);
        
        void setPersistencia(ProtocoloPersistencia*);
};

/**
 *\brief Seta a controladora de logica de negocio de projetos
 *\param *protocoloPersistencia
 */
inline void CntrLNProjeto::setPersistencia(ProtocoloPersistencia *protocoloPersistencia){
    this->protocoloPersistencia = protocoloPersistencia;
}

///Classe que representa a controladora de logica de negocio relacionada aos modulos
/**Recebe os dados da camada de apresentacao e prove os servicos relacionados aos modulos para a camada de persistencia. Aqui tambem sao executados os servicos de regra de negocio.*/
class CntrLNModulo : public ProtocoloModulo{  
    protected:
        ProtocoloPersistencia *protocoloPersistencia;
    public:
        CntrLNModulo(){}
        void cadastrar(const Modulo&);
        void remover(Codigo_Modulo);
        Modulo pesquisar(Codigo_Modulo);
        void atualizar(Modulo*);

        void setPersistencia(ProtocoloPersistencia*);
};

/**
 *\brief Seta a controladora de logica de negocio de modulos
 *\param *protocoloPersistencia
 */
inline void CntrLNModulo::setPersistencia(ProtocoloPersistencia *protocoloPersistencia){
    this->protocoloPersistencia = protocoloPersistencia;
}

///Classe que representa a controladora de logica de negocio relacionada as fases
/**Recebe os dados da camada de apresentacao e prove os servicos relacionados as fases para a camada de persistencia. Aqui tambem sao executados os servicos de regra de negocio.*/
class CntrLNFase : public ProtocoloFase{  
    protected:
        ProtocoloPersistencia *protocoloPersistencia;

    public:
        CntrLNFase(){}
        void cadastrar(Fase);
        void atualizar(Fase);

        void setPersistencia(ProtocoloPersistencia*);
};

/**
 *\brief Seta a controladora de logica de negocio de fases
 *\param *protocoloPersistencia
 */
inline void CntrLNFase::setPersistencia(ProtocoloPersistencia *protocoloPersistencia){
    this->protocoloPersistencia = protocoloPersistencia;
}

///Classe que representa a controladora de logica de negocio relacionada as metricas
/**Recebe os dados da camada de apresentacao e prove os servicos relacionados as metricas para a camada de persistencia. Aqui tambem sao executados os calculos das metricas solicitadas que recebem as informacoes da camada de persistencia.*/
class CntrLNMetrica : public ProtocoloMetrica{
    protected:
        ProtocoloPersistencia *protocoloPersistencia;

      public:
             CntrLNMetrica(){}
             void numero_linhas(Metrica);
             void tempo_gasto_projeto(Metrica);
             void tempo_gasto_modulo(Metrica);
             void produtividade_projeto(Metrica);
             void produtividade_modulo(Metrica);
             void nota(Metrica);
             void tamanho_medio(Metrica);
             void produtividade_media(Metrica);

            void setPersistencia(ProtocoloPersistencia*);
};

/**
 *\brief Seta a controladora de logica de negocio de metricas
 *\param *protocoloPersistencia
 */
inline void CntrLNMetrica::setPersistencia(ProtocoloPersistencia *protocoloPersistencia){
    this->protocoloPersistencia = protocoloPersistencia;
}

#endif

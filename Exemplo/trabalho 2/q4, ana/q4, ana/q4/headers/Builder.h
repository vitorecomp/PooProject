//---------------------------------------------------------------------------
#ifndef BUILDER_H
#define BUILDER_H
//---------------------------------------------------------------------------

#include "Controladoras.h"
#include "ControladorasLN.h"
#include "StubPersistencia.h"

//---------------------------------------------------------------------------

///Classe do padrão de projeto Builder
/**Cria objetos das classes controladoras e de protocolo e que realiza ligacoes entre eles.*/
class Criar {
private:
    CntrIntNavegacao* criarCntrIntNavegacao();
    ProtocoloIntProjeto* criarCntrIntProjeto();
    ProtocoloIntModulo* criarCntrIntModulo();
    ProtocoloIntFase* criarCntrIntFase();
    ProtocoloIntMetrica* criarCntrIntMetrica();
    ProtocoloProjeto* criarProtocoloProjeto();
    ProtocoloModulo* criarProtocoloModulo();
    ProtocoloFase* criarProtocoloFase();
    ProtocoloMetrica* criarProtocoloMetrica();
    ProtocoloPersistencia* criarProtocoloPersistencia();
protected:
    CntrIntNavegacao *a;
    ProtocoloIntProjeto *b;
    ProtocoloIntModulo *c;
    ProtocoloIntFase *d;
    ProtocoloIntMetrica *e;
    ProtocoloProjeto *f;
    ProtocoloModulo *g;
    ProtocoloFase *h;
    ProtocoloMetrica *i;
    ProtocoloPersistencia *j;
public:
    void criar();
};

//Metodos inline

/**
 * \brief  Cria e retorna uma nova instancia de CntrIntNavegacao
 * \return CntrIntNavegacao
 */
inline CntrIntNavegacao* Criar::criarCntrIntNavegacao(){
    return new CntrIntNavegacao();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrIntProjeto
 * \return CntrIntProjeto
 */
inline ProtocoloIntProjeto* Criar::criarCntrIntProjeto(){
    return new CntrIntProjeto();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrIntModulo
 * \return CntrIntModulo
 */
inline ProtocoloIntModulo* Criar::criarCntrIntModulo(){
    return new CntrIntModulo();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrIntFase
 * \return CntrIntFase
 */
inline ProtocoloIntFase* Criar::criarCntrIntFase(){
    return new CntrIntFase();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrIntMetrica
 * \return CntrIntMetrica
 */
inline ProtocoloIntMetrica* Criar::criarCntrIntMetrica(){
    return new CntrIntMetrica();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrLNProjeto
 * \return CntrLNProjeto
 */
inline ProtocoloProjeto* Criar::criarProtocoloProjeto(){
    return new CntrLNProjeto();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrLNModulo
 * \return CntrLNModulo
 */
inline ProtocoloModulo* Criar::criarProtocoloModulo(){
    return new CntrLNModulo();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrLNFase
 * \return CntrLNFase
 */
inline ProtocoloFase* Criar::criarProtocoloFase(){
    return new CntrLNFase();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrLNMetrica
 * \return CntrLNMetrica
 */
inline ProtocoloMetrica* Criar::criarProtocoloMetrica(){
    return new CntrLNMetrica();
}

/**
 * \brief  Cria e retorna uma nova instancia de CntrPersistencia
 * \return CntrPersistencia
 */
inline ProtocoloPersistencia* Criar::criarProtocoloPersistencia(){
    return new CntrPersistencia();
}

#endif

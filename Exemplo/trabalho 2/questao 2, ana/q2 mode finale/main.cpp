//---------------------------------------------------------------------------
#include <cstdlib>
#include <iostream>
//---------------------------------------------------------------------------
#include "Controladoras.h"
#include "ControladorasLN.h"
#include "StubPersistencia.h"
//---------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
//Instancia as classes controladoras de interacao
CntrIntNavegacao *cntrIntNavegacao;
cntrIntNavegacao = new CntrIntNavegacao();

ProtocoloIntProjeto *cntrIntProjeto;
cntrIntProjeto = new CntrIntProjeto();

ProtocoloIntModulo *cntrIntModulo;
cntrIntModulo = new CntrIntModulo();

ProtocoloIntFase *cntrIntFase;
cntrIntFase = new CntrIntFase();

ProtocoloIntMetrica *cntrIntMetrica;
cntrIntMetrica = new CntrIntMetrica();

//Instancia as classes controladoras de negocio
ProtocoloProjeto *protocoloProjeto;
protocoloProjeto = new CntrLNProjeto();

ProtocoloModulo *protocoloModulo;
protocoloModulo = new CntrLNModulo();

ProtocoloFase *protocoloFase;
protocoloFase = new CntrLNFase();

ProtocoloMetrica *protocoloMetrica;
protocoloMetrica = new CntrLNMetrica();

//Instancia a classe controladora de persistencia
ProtocoloPersistencia *protocoloPersistencia;
protocoloPersistencia = new CntrPersistencia();

//Set dos protocolos
cntrIntNavegacao->setCntrIntProjeto((ProtocoloInt*)cntrIntProjeto);
cntrIntProjeto->setCntr(protocoloProjeto);

cntrIntNavegacao->setCntrIntModulo((ProtocoloInt*)cntrIntModulo);
cntrIntModulo->setCntr(protocoloModulo);

cntrIntNavegacao->setCntrIntFase((ProtocoloInt*)cntrIntFase);
cntrIntFase->setCntr(protocoloFase);

cntrIntNavegacao->setCntrIntMetrica((ProtocoloInt*)cntrIntMetrica);
cntrIntMetrica->setCntr(protocoloMetrica);




protocoloProjeto->setPersistencia(protocoloPersistencia);
/*protocoloModulo->setPersistencia(protocoloPersistencia);
protocoloFase->setPersistencia(protocoloPersistencia);
protocoloMetrica->setPersistencia(protocoloPersistencia);*/


cntrIntNavegacao->executar();

    system("PAUSE");
    return EXIT_SUCCESS;
}


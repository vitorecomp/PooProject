//---------------------------------------------------------------------------
#include "Builder.h"
//---------------------------------------------------------------------------
//Classe Criar

void Criar::criar() {

//Criando as controladoras de interacao
    a = criarCntrIntNavegacao();
    b = criarCntrIntProjeto();
    c = criarCntrIntModulo();
    d = criarCntrIntFase();
    e = criarCntrIntMetrica();

    a->setCntrIntProjeto((ProtocoloInt*)b);
    a->setCntrIntModulo((ProtocoloInt*)c);
    a->setCntrIntFase((ProtocoloInt*)d);
    a->setCntrIntMetrica((ProtocoloInt*)e);

   
//Criando os protocolos de negocio
    f = criarProtocoloProjeto();
    g = criarProtocoloModulo();
    h = criarProtocoloFase();
    i = criarProtocoloMetrica();

    b->setCntr(f);
    c->setCntr(g);
    d->setCntr(h);
    e->setCntr(i);

//Setando a persistencia
    j = criarProtocoloPersistencia();

    f->setPersistencia(j);
    g->setPersistencia(j);
    h->setPersistencia(j);
    i->setPersistencia(j);

//Rodar o programa
    a->executar();
}

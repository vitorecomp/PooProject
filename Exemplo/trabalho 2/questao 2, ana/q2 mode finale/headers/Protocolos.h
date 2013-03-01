//---------------------------------------------------------------------------
#ifndef ProtocolosH
#define ProtocolosH
//---------------------------------------------------------------------------
#include "Entidades.h"
#include "ProtocoloPersistencia.h"
//---------------------------------------------------------------------------
///Classe abstrata que e utilizada para a escolha das Controladoras de Interacao, atraves dos protocolos especificos
class ProtocoloInt{
    public:
        virtual ~ProtocoloInt(){};
        virtual void executar() = 0;
    };

///Classe abstrata que faz a ligacao entre interacao do usuario e logica de negocio
/**Manda os servicos de cadastrar, remover, pesquisar e atualizar Projeto e encaminha para a logica de negocio*/
class ProtocoloProjeto {
    public:
        virtual ~ProtocoloProjeto(){};
        virtual void cadastrar(const Projeto&)= 0;
        virtual void remover(Codigo_Projeto) = 0;
        virtual Projeto pesquisar(Codigo_Projeto) = 0;
        virtual void atualizar(Projeto*) = 0;
        virtual void setPersistencia(ProtocoloPersistencia*) = 0;
};
///Classe abstrata que faz a ligacao entre interacao do usuario e logica de negocio
/**Manda os servicos de cadastrar, remover, pesquisar e atualizar Modulo e encaminha para a logica de negocio*/
class ProtocoloModulo {
    public:
        virtual ~ProtocoloModulo(){};
        virtual void cadastrar(const Modulo&) = 0;
        virtual void remover(Codigo_Modulo) = 0;
        virtual Modulo pesquisar(Codigo_Modulo) = 0;
        virtual void atualizar(Modulo*) = 0;
        virtual void setPersistencia(ProtocoloPersistencia*) = 0;
};
///Classe abstrata que faz a ligacao entre camada de interacao do usuario e logica de negocio
/**Manda os servicos de cadastrar e atualizar Fase e encaminha para a logica de negocio*/
class ProtocoloFase {
    public:
        virtual ~ProtocoloFase(){};
        virtual void cadastrar(Fase) = 0;
        virtual void atualizar(Fase) = 0;
        virtual void setPersistencia(ProtocoloPersistencia*) = 0;        
};
///Classe abstrata que faz a ligacao entre interacao do usuario e logica de negocio
/**Manda os servicos de calcular numero de linhas, tempo gasto no projeto e tempo gasto no modulo, a produtividade do projeto e do modulo, nota, o tamanho medio
 e a produtividade medio da Metrica encaminha para a logica de negocio*/
class ProtocoloMetrica {
      public:
             virtual ~ProtocoloMetrica(){};
             virtual void numero_linhas(Metrica) = 0;
             virtual void tempo_gasto_projeto(Metrica) = 0;
             virtual void tempo_gasto_modulo(Metrica) = 0;
             virtual void produtividade_projeto(Metrica) = 0;
             virtual void produtividade_modulo(Metrica) = 0;
             virtual void nota(Metrica) = 0;
             virtual void tamanho_medio(Metrica) = 0;
             virtual void produtividade_media(Metrica) = 0;
             virtual void setPersistencia(ProtocoloPersistencia*) = 0;
};

///Classe abstrata que seleciona a Controladora de Projeto
/**Herda os servicos da classe ProtocoloInt e seleciona a Controladora de Projeto*/
class ProtocoloIntProjeto: public ProtocoloInt {
     public:
        virtual void setCntr(ProtocoloProjeto*) = 0;
};
///Classe abstrata que seleciona a Controladora de Modulo
/**Herda os servicos da classe ProtocoloInt e seleciona a Controladora de Modulo */
class ProtocoloIntModulo: public ProtocoloInt {
     public:
        virtual void setCntr(ProtocoloModulo*) = 0;
};
///Classe abstrata que seleciona a Controladora de Fase
/**Herda os servicos da classe ProtocoloInt e seleciona a Controladora de Fase */
class ProtocoloIntFase: public ProtocoloInt {
     public:
        virtual void setCntr(ProtocoloFase*) = 0;
};
///Classe abstrata que seleciona a Controladora de Metrica
/**Herda os servicos da classe ProtocoloInt e seleciona a Controladora de Metrica */
class ProtocoloIntMetrica: public ProtocoloInt {
     public:
        virtual void setCntr(ProtocoloMetrica*) = 0;
};

#endif

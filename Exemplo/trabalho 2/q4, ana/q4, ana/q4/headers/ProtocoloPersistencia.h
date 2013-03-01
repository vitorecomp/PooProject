//---------------------------------------------------------------------------
#ifndef ProtocoloPersistenciaH
#define ProtocoloPersistenciaH
//---------------------------------------------------------------------------

class ComandoBD;
class EErroPersistencia;

///Classe abstrata que representa o Protocolo de Persistencia
/**E utilizada para a ligacao da camada de Logica de Negocio e a camada de Persistencia, atraves dos protocolos especificos*/

class ProtocoloPersistencia {
    protected:
        void conectar();
        void desconectar();
    public:
        virtual ~ProtocoloPersistencia(){};
        virtual void executar(ComandoBD*) = 0;  
};


#endif

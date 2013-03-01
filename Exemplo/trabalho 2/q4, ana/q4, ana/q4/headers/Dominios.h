//---------------------------------------------------------------------------
#ifndef DominiosH
#define DominiosH
//---------------------------------------------------------------------------
#include <stdlib.h>
#include <stdexcept>
#include <sstream>
using namespace std;
//---------------------------------------------------------------------------

/**
 * \mainpage Sistema de Projetos de Alunos
 * Esse sistema de software visa facilitar o uso do PSP (Personal Software Process) nos projetos realizados pelos alunos.
O sistema possibilitara o acesso a dados variados acerca de tais projetos.
*
*/


/// Classe que representa o dominio Codigo_Projeto
/** Armazena os atributos de Codigo De Projeto apos validacao: numero decimal composto por 5 digitos */
class Codigo_Projeto{
    private:
        void validar(string) throw (invalid_argument);
        string valor;
    public: 
        Codigo_Projeto(){};
        Codigo_Projeto(string) throw (invalid_argument); 
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};
 
/**
 * \brief Seta o valor de Codigo de Projeto
 * \param valor
 */
inline void Codigo_Projeto::setValor(const string& valor) throw (invalid_argument) {
    validar(valor);
    this->valor = valor;
}

/**
 * \brief Retorna o valor de Codigo de Projeto
 * \return valor
 */
inline string Codigo_Projeto::getValor()const {
    return valor;
}

/// Classe que representa o dominio Codigo_Modulo
/** Armazena os atributos de Codigo De Modulo apos validacao: numero decimal composto por 5 digitos */
class Codigo_Modulo{
    private:
        void validar(string) throw (invalid_argument);
        string valor;
    public:
        Codigo_Modulo(){};
        Codigo_Modulo(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Codigo de Modulo
 * \param valor
 */      
inline void Codigo_Modulo::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief Retorna o valor de Codigo de Modulo
 * \return valor
 */
inline string Codigo_Modulo::getValor() const{
    return valor;
    }
   
/// Classe que representa o dominio Codigo_Fase
/** Armazena os atributos de Codigo De Fase apos validacao: numero decimal composto por 1 digito */
class Codigo_Fase{
    private:
        void validar(string) throw (invalid_argument);        
        string valor;
    public:
        Codigo_Fase(){};
        Codigo_Fase(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Codigo de Fase
 * \param valor
 */
inline void Codigo_Fase::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief Retorna o valor de Codigo de Fase
 * \return valor
 */
inline string Codigo_Fase::getValor() const{
    return valor;
}

/// Classe que representa o dominio Data_Inicio
/** Armazena os atributos de Data Inicio apos validacao: DD/MM/AAAA*/
class Data_Inicio{
    private:
        void validar(string) throw (invalid_argument);
        string valor;
    public:
        Data_Inicio(){};
        Data_Inicio(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Data de Inicio
 * \param valor
 */
inline void Data_Inicio::setValor(const string& valor)throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief Retorna o valor de Data de Inicio
 * \return valor
 */
inline string Data_Inicio::getValor() const{
    return valor;
}

/// Classe que representa o dominio Data_Termino
/** Armazena os atributos de Data Termino apos validacao: DD/MM/AAAA */
class Data_Termino{
    private:
        void validar(string) throw (invalid_argument);
        string valor;
    public:
        Data_Termino(){};
        Data_Termino(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Data de Termino
 * \param valor
 */
inline void Data_Termino::setValor(const string& valor)throw (invalid_argument) {
    validar(valor);
    this->valor = valor;
}

/**
 * \brief  Retorna o valor de Data de Termino
 * \return valor
 */
inline string Data_Termino::getValor() const{
    return valor;
}

/// Classe que representa o dominio Matricula
/** Armazena os atributos de Matricula apos validacao: numero decimal composto por 5 digitos*/
class Matricula{
    private:
        void validar(string) throw (invalid_argument);
        string valor;
    public:
        Matricula(){};
        Matricula(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
    };

/**
 * \brief Seta o valor de Matricula
 * \param valor
 */
inline void Matricula::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief  Retorna o valor de Matricula
 * \return valor
 */
inline string Matricula::getValor() const{
    return valor;
}

/// Classe que representa o dominio Nome_Arquivo  
/** Armazena os atributos de Nome de Arquivo apos validacao: 10 caracteres quaisquer*/
class Nome_Arquivo{
    void validar(string) throw (invalid_argument);
    private:
        string valor;
    public:
        Nome_Arquivo(){};
        Nome_Arquivo(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Nome do Arquivo
 * \param valor
 */
inline void Nome_Arquivo::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief  Retorna o valor de Nome do Arquivo
 * \return valor
 */
inline string Nome_Arquivo::getValor() const{
    return valor;
}

/// Classe que representa o dominio Nota
/** Armazena os atributos de Nota apos validacao: valor de 0 a 10*/
class Nota{
    void validar(string) throw (invalid_argument);
    private:
        string valor;
    public:
        Nota(){};
        Nota (string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Nota
 * \param valor
 */
inline void Nota::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief  Retorna o valor de Nota
 * \return valor
 */       
inline string Nota::getValor() const{
    return valor;
}

/// Classe que representa o dominio Tamanho
/** Armazena os atributos de Tamanho Em Linhas De Codigo apos validacao: valor de 0 a 1000*/
class Tamanho{
    void validar(string) throw (invalid_argument);
    private:
        string valor;
    public:
        Tamanho(){};
        Tamanho(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Tamanho
 * \param valor
 */
inline void Tamanho::setValor(const string& valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}
/**
 * \brief  Retorna o valor de Tamanho
 * \return valor
 */   
inline string Tamanho::getValor() const{
    return valor;
}

/// Classe que representa o dominio Tempo
/** Armazena os atributos de Tempo apos validacao: valor de 0 a 2000*/
class Tempo{
    void validar(string) throw (invalid_argument);
    private:
        string valor;
    public:
        Tempo(){};
        Tempo(string) throw (invalid_argument);
        void setValor(const string&) throw (invalid_argument);
        string getValor() const;
};

/**
 * \brief Seta o valor de Tempo
 * \param valor
 */
inline void Tempo::setValor(const string& valor)throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

/**
 * \brief  Retorna o valor de Tamanho
 * \return valor
 */   
inline string Tempo::getValor() const{
    return valor;
}

#endif

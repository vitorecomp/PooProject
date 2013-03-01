//---------------------------------------------------------------------------
#ifndef EntidadesH
#define EntidadesH
//---------------------------------------------------------------------------
#include "Dominios.h"
//using namespace std;
//---------------------------------------------------------------------------

/// Classe que representa a entidade Projeto
/** Contem os atributos que sao instancias das classes Matricula, Codigo_Projeto, Data_Inicio, Data_Termino e Nota*/
class Projeto{
      private:
              Matricula matricula;
              Codigo_Projeto codigo_projeto;
              Data_Inicio data_inicio;
              Data_Termino data_termino;
              Nota nota;
      public:
             Projeto() {}
             Projeto(Matricula, Codigo_Projeto, Data_Inicio, Data_Termino, Nota);
             Matricula getMatricula() const;
/**
 * \brief Seta o valor de Matricula da entidade Projeto
 * \param Matricula&
*/
             void setMatricula(const Matricula&);
             Codigo_Projeto getCodigo_Projeto() const;
/**
 * \brief Seta o valor de Codigo de Projeto da entidade Projeto
 * \param Codigo_Projeto&
*/
             void setCodigo_Projeto(const Codigo_Projeto&);
             Data_Inicio getData_Inicio() const;
/**
 * \brief Seta o valor de Data de Inicio da entidade Projeto
 * \param Data_Inicio&
*/
             void setData_Inicio(const Data_Inicio&);
             Data_Termino getData_Termino() const;
/**
 * \brief Seta o valor de Data de Termino da entidade Projeto
 * \param Data_Termino&
*/
             void setData_Termino(const Data_Termino&);
             Nota getNota() const;
/**
 * \brief Seta o valor de Nota da entidade Projeto
 * \param Nota&
*/
             void setNota(const Nota&);
      };
      
//---------------------------------------------------------------------------
/// Classe que representa a entidade Modulo
/** Contem os atributos que sao instancias das classes Codigo_Modulo, Nome_Arquivo e Tamanho*/      
class Modulo{
      private:
              Codigo_Modulo codigo_modulo;
              Nome_Arquivo nome_arquivo;
              Tamanho tamanho;
      public:
             Modulo() {}
             Modulo(Codigo_Modulo, Nome_Arquivo, Tamanho);
             Codigo_Modulo getCodigo_Modulo() const;
/**
 * \brief Seta o valor de Codigo de Modulo da entidade Modulo
 * \param Codigo_Modulo&
*/
             void setCodigo_Modulo(const Codigo_Modulo&);
             Nome_Arquivo getNome_Arquivo() const;
/**
 * \brief Seta o valor de Nome de Arquivo da entidade Modulo
 * \param Nome_Arquivo&
*/
             void setNome_Arquivo(const Nome_Arquivo&);
             Tamanho getTamanho() const;
/**
 * \brief Seta o valor de Tamanho da entidade Modulo
 * \param Tamanho&
*/
             void setTamanho(const Tamanho&);
      };
      
//---------------------------------------------------------------------------
/// Classe que representa a entidade Fase
/** Contem os atributos que sao instancias das classes Codigo_Fase e Tempo*/
class Fase{
      private:
              Codigo_Fase codigo_fase;
              Tempo tempo_estimado;
              Tempo tempo_efetivo;
      public:
             Fase() {}
             Fase(Codigo_Fase, Tempo, Tempo);
             Codigo_Fase getCodigo_Fase() const;
/**
 * \brief Seta o valor de Codigo de Fase da entidade Fase
 * \param Codigo_Fase&
*/
             void setCodigo_Fase(const Codigo_Fase&);
             Tempo getTempo_Estimado() const;
/**
 * \brief Seta o valor de Tempo Estimado da entidade Fase
 * \param Tempo&
*/
             void setTempo_Estimado(const Tempo&);
             Tempo getTempo_Efetivo() const;
/**
 * \brief Seta o valor de Tempo Efetivo da entidade Fase
 * \param Tempo&
*/
             void setTempo_Efetivo(const Tempo&);    
      };

//---------------------------------------------------------------------------
/// Classe que representa a entidade Metrica
/** Contem os atributos que sao instancias das classes Matricula e Codigo_Projeto*/      
class Metrica{
    private:
        Matricula matricula;
        Codigo_Projeto codigo_projeto;
    public:
        Metrica (){}
        Metrica(Matricula, Codigo_Projeto);
        Metrica(Codigo_Projeto);
        Matricula getMatricula() const;
/**
 * \brief Seta o valor de Matricula da entidade Metrica
 * \param Matricula&
*/
        void setMatricula(const Matricula&);
        Codigo_Projeto getCodigo_Projeto() const;
/**
 * \brief Seta o valor de Codigo de Projeto da entidade Metrica
 * \param Codigo_Projeto&
*/
        void setCodigo_Projeto(const Codigo_Projeto&);
    };
        
//---------------------------------------------------------------------------
//Métodos inline

/**
 * \brief  Retorna o valor de Matricula da entidade Projeto
 * \return matricula
 */  
inline Matricula Projeto::getMatricula() const{
       return matricula;
       }

/**
 * \brief  Retorna o valor de Codigo de Projeto da entidade Projeto
 * \return codigo_projeto
 */
inline Codigo_Projeto Projeto::getCodigo_Projeto() const{
       return codigo_projeto;
       }

/**
 * \brief  Retorna o valor de Data de Inicio da entidade Projeto
 * \return data_inicio
 */
inline Data_Inicio Projeto::getData_Inicio() const{
       return data_inicio;
       }

/**
 * \brief  Retorna o valor de Data de Termino da entidade Projeto
 * \return data_termino
 */
inline Data_Termino Projeto::getData_Termino() const{
       return data_termino;
       }

/**
 * \brief  Retorna o valor de Nota da entidade Projeto
 * \return nota
 */
inline Nota Projeto::getNota() const{
       return nota;
       }

/**
 * \brief  Retorna o valor de Codigo de Modulo da entidade Modulo
 * \return codigo_modulo
 */       
inline Codigo_Modulo Modulo::getCodigo_Modulo() const{
       return codigo_modulo;
       }

/**
 * \brief  Retorna o valor de Nome de Arquivo da entidade Modulo
 * \return nome_arquivo
 */   
inline Nome_Arquivo Modulo::getNome_Arquivo() const{
       return nome_arquivo;
       }

/**
 * \brief  Retorna o valor de Tamanho da entidade Modulo
 * \return tamanho
 */       
inline Tamanho Modulo::getTamanho() const{
       return tamanho;
       }

/**
 * \brief  Retorna o valor de Codigo de Fase da entidade Fase
 * \return codigo_fase
 */       
inline Codigo_Fase Fase::getCodigo_Fase() const{
       return codigo_fase;
       }

/**
 * \brief  Retorna o valor de Tempo Estimado da entidade Fase
 * \return tempo_estimado
 */    
inline Tempo Fase::getTempo_Estimado() const{
       return tempo_estimado;
       }

/**
 * \brief  Retorna o valor de Tempo Efetivo da entidade Fase
 * \return tempo_efetivo
 */
inline Tempo Fase::getTempo_Efetivo() const{
       return tempo_efetivo;
       }

/**
 * \brief  Retorna o valor de Matricula da entidade Metrica
 * \return matricula
 */  
inline Matricula Metrica::getMatricula() const{
       return matricula;
       }
       
/**
 * \brief  Retorna o valor de Codigo de Projeto da entidade Metrica
 * \return codigo_projeto
 */
inline Codigo_Projeto Metrica::getCodigo_Projeto() const{
       return codigo_projeto;
       }


#endif

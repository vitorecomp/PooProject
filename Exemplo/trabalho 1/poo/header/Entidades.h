//---------------------------------------------------------------------------
#ifndef EntidadesH
#define EntidadesH
//---------------------------------------------------------------------------
#include "Dominios.h"

using namespace std;
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
 * \brief  Seta o valor de Matricula
 * \param valor
*/
             void setMatricula(const Matricula&);
             Codigo_Projeto getCodigo_Projeto() const;
/**
 * \brief  Seta o valor de Codigo de Projeto
 * \param valor
*/
             void setCodigo_Projeto(const Codigo_Projeto&);
             Data_Inicio getData_Inicio() const;
/**
 * \brief  Seta o valor de Data de Inicio
 * \param valor
*/
             void setData_Inicio(const Data_Inicio&);
             Data_Termino getData_Termino() const;
/**
 * \brief  Seta o valor de Data de Termino
 * \param valor
*/
             void setData_Termino(const Data_Termino&);
             Nota getNota() const;
/**
 * \brief  Seta o valor de Nota
 * \param valor
*/
             void setNota(const Nota&);
      };

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
 * \brief  Seta o valor de Codigo de Modulo
 * \param valor
*/
             void setCodigo_Modulo(const Codigo_Modulo&);
             Nome_Arquivo getNome_Arquivo() const;
/**
 * \brief  Seta o valor de Nome de Arquivo
 * \param valor
*/
             void setNome_Arquivo(const Nome_Arquivo&);
             Tamanho getTamanho() const;
/**
 * \brief  Seta o valor de Tamanho
 * \param valor
*/
             void setTamanho(const Tamanho&);
      };
      
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
 * \brief  Seta o valor de Codigo de Fase
 * \param valor
*/
             void setCodigo_Fase(const Codigo_Fase&);
             Tempo getTempo_Estimado() const;
/**
 * \brief  Seta o valor de Tempo Estimado
 * \param valor
*/
             void setTempo_Estimado(const Tempo&);
             Tempo getTempo_Efetivo() const;
/**
 * \brief  Seta o valor de Tempo Efetivo
 * \param valor
*/
             void setTempo_Efetivo(const Tempo&);    
      };
      
//Métodos inline

/**
 * \brief  Retorna o valor de Matricula
 * \return valor
 */  
inline Matricula Projeto::getMatricula() const{
       return matricula;
       }

/**
 * \brief  Retorna o valor de Codigo de Projeto
 * \return valor
 */
inline Codigo_Projeto Projeto::getCodigo_Projeto() const{
       return codigo_projeto;
       }

/**
 * \brief  Retorna o valor de Data de Inicio
 * \return valor
 */
inline Data_Inicio Projeto::getData_Inicio() const{
       return data_inicio;
       }

/**
 * \brief  Retorna o valor de Data de Termino
 * \return valor
 */
inline Data_Termino Projeto::getData_Termino() const{
       return data_termino;
       }

/**
 * \brief  Retorna o valor de Nota
 * \return valor
 */
inline Nota Projeto::getNota() const{
       return nota;
       }

/**
 * \brief  Retorna o valor de Codigo de Modulo
 * \return valor
 */       
inline Codigo_Modulo Modulo::getCodigo_Modulo() const{
       return codigo_modulo;
       }

/**
 * \brief  Retorna o valor de Nome de Arquivo
 * \return valor
 */   
inline Nome_Arquivo Modulo::getNome_Arquivo() const{
       return nome_arquivo;
       }

/**
 * \brief  Retorna o valor de Tamanho
 * \return valor
 */       
inline Tamanho Modulo::getTamanho() const{
       return tamanho;
       }

/**
 * \brief  Retorna o valor de Codigo de Fase
 * \return valor
 */       
inline Codigo_Fase Fase::getCodigo_Fase() const{
       return codigo_fase;
       }

/**
 * \brief  Retorna o valor de Tempo Estimado
 * \return valor
 */    
inline Tempo Fase::getTempo_Estimado() const{
       return tempo_estimado;
       }

/**
 * \brief  Retorna o valor de Tempo Efetivo
 * \return valor
 */
inline Tempo Fase::getTempo_Efetivo() const{
       return tempo_efetivo;
       }
       
#endif

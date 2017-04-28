/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SODA
   #define SODA

#include <string>
#include "../Liquid/Liquid.hpp"

using namespace std;

class Soda : public Liquid
   {
       
   public:
      Soda(string,float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

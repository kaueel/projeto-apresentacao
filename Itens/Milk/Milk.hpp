/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MILK
   #define MILK

#include <string>
#include "../Liquid/Liquid.hpp"

using namespace std;

class Milk : public Liquid
   {
       
   public:
      Milk(string,float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

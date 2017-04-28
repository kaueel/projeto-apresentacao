/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BEER
   #define BEER

#include <string>
#include "../Liquid/Liquid.hpp"

using namespace std;

class Beer : public Liquid
   {
       
   public:
      Beer(string,float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

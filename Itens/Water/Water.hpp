/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef WATER
   #define WATER

#include <string>
#include "../Liquid/Liquid.hpp"

using namespace std;

class Water : public Liquid
   {
       
   public:
      Water(string,float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

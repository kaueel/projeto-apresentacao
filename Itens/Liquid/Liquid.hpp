/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef LIQUID
   #define LIQUID

#include <string>
#include "../Food/Food.hpp"

using namespace std;

class Liquid : public Food
   {
   protected:
	  string tipo;
      float volume;
      
   public:
      Liquid(string,float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

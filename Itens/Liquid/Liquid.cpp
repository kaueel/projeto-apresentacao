/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Food/Food.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(string tipo,float volume, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->volume = volume;
   };
   
string Liquid::getDescricao()
   { 
   return ("Liquid - "+tipo+" - " + to_string(volume) + " L.");
   };
   
/* fim de arquivo */

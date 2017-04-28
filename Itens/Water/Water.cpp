/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Liquid/Liquid.hpp"
#include "Water.hpp"

using namespace std;

Water::Water(string tipo,float volume, double valor) : Liquid(tipo,volume,valor){};
   
string Water::getDescricao()
   { 
   return ("Water - "+tipo+" - " + to_string(volume) + " L.");
   };
   
/* fim de arquivo */

/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Liquid/Liquid.hpp"
#include "Soda.hpp"

using namespace std;

Soda::Soda(string tipo,float volume, double valor) : Liquid(tipo,volume,valor){};
   
string Soda::getDescricao()
   { 
   return ("Soda - "+tipo+" - " + to_string(volume) + " L.");
   };
   
/* fim de arquivo */

/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Liquid/Liquid.hpp"
#include "Milk.hpp"

using namespace std;

Milk::Milk(string tipo, float volume, double valor) : Liquid(tipo, volume, valor) {};

string Milk::getDescricao() {
    return ("Milk - " + tipo + " - " + to_string(volume) + " L.");
};

/* fim de arquivo */

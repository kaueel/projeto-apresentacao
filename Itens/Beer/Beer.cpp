/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "../Liquid/Liquid.hpp"
#include "Beer.hpp"

using namespace std;

Beer::Beer(string tipo, float volume, double valor) : Liquid(tipo, volume, valor) {};

string Beer::getDescricao() {
    return ("Beer - " + tipo + " - " + to_string(volume) + " L.");
};

/* fim de arquivo */

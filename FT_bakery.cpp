/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2015


*/

#include "Process/MyProgram/MyProgram.hpp"

void verifyArguments(int, char* [],MyProgram * myProgram);

int main(int argc, char* argv[]){
	MyProgram * myProgram = new MyProgram;
	verifyArguments(argc, argv,myProgram);
    myProgram->start(argc, argv);

    return 1;
}

void verifyArguments(int argc, char *argv[], MyProgram * myProgram) {
	
	
    if (myProgram->getVerboseMode()) { myProgram->deleteVerboseMode();};
    if (myProgram->getShortMessageMode()) { myProgram->deleteShortMessageMode(); };

    myProgram->setVerboseMode(NULL);
    myProgram->setShortMessageMode(NULL);

    for (int count = 1; count < argc; count++) {
        if (string(argv[count]) == "-v") { myProgram->setVerboseMode(new MyBooleanClass(true)); };
        if (string(argv[count]) == "-s") { myProgram->setShortMessageMode(new MyBooleanClass(true)); };
    };

    if (!myProgram->getVerboseMode()) { myProgram->setVerboseMode(new MyBooleanClass()); };  // default is false
    if (!myProgram->getShortMessageMode()) { myProgram->setShortMessageMode(new MyBooleanClass()); };  // default is false
}

/* fim de arquivo */

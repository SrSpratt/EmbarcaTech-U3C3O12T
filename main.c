#include<stdlib.h>
#include "program.h"

int main(){
    system("CHCP 65001>consoleConfig"); //Configura a coleção de caracteres do console e salva em consoleConfig
    GetHeader(); //Chama o cabeçalho
    GetMenu(); //Chama o menu
    GetFooter(); //Chama o rodapé
    return 0;
}
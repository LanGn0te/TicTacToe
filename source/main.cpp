/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 26 de Junho de 2014, 21:02
 */

#include "tictactoe.h"

int main() {

    bool sair;
    while (sair) {

        /* Variaveis! */

        int optEsc, numJog, tabP[9], player, aux;
        numJog = 0;
        tabP[1] = 0;
        tabP[2] = 0;
        tabP[3] = 0;
        tabP[4] = 0;
        tabP[5] = 0;
        tabP[6] = 0;
        tabP[7] = 0;
        tabP[8] = 0;
        tabP[9] = 0;

        /* Sessao de boas vindas! Eeeee! */

        cout << endl << endl << endl << endl;
        cout << "      Bem vindo ao TicTacToe!";
        cout << endl << endl;
        cout << "  1 - Jogar" << endl;
        cout << "  0 - Sair" << endl << endl;
        cout << "Sua escolha: ";
        cin >> optEsc;

        /* Lugar da jogatina */

        switch (optEsc) {
            case 1: //Caso o usuario escolha jogar
                while (checkWinner(tabP[1], tabP[2], tabP[3], tabP[4], tabP[5], tabP[6], tabP[7], tabP[8], tabP[9])) {
                    numJog++;
                    aux = numJog % 2;
                    if (aux = 1)
                        player = 1;
                    else if (aux = 0)
                        player = 2;
                    cout << endl << endl;
                    showTabIns();
                    cout << endl;
                    showTab(tabP[1], tabP[2], tabP[3], tabP[4], tabP[5], tabP[6], tabP[7], tabP[8], tabP[9]);
                    cout << endl << "Player " << player << ": ";
                    cin >> optEsc;
                }
                break;

            case 2: //Caso ele queira virar presunto
                sair = true;
                break;
        }
    }
    cout << endl << "Bye";
    return EXIT_SUCCESS;
}

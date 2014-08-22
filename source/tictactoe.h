/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 26 de Junho de 2014, 21:02
 */

/*
 * Tasks
 * 
 * * Terminar metodo de movimentacao impossivel
 * * que sera usado como base paea movimentacao normal
 * 
 */

//Defines da vida
#define bar "|"
//Includes da vida
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <ctime>

using namespace std;

/*
 * Versao beta
 */

//Functions

int checkWinner(int pl1,int pl2,int pl3,int pl4,int pl5,int pl6,int pl7,int pl8,int pl9){
    /*
     * Return 0 means no one won
     * Return 1 means that the user wins
     * Return 2 means that the pc wins 
     * Return 3 means a draw
     */
    if(pl1 == 1 && pl2 == 1 && pl3 == 1) 
        return 1;
    else if(pl1 == 2 && pl2 == 2 && pl3 == 2) 
        return 2;
    else if(pl4 == 1 && pl5 == 1 && pl6 == 1)          
        return 1;
    else if(pl4 == 2 && pl5 == 2 && pl6 == 2)
        return 2;
    else if(pl7 == 1 && pl8 == 1 && pl9 == 1)
        return 1;
    else if(pl7 == 2 && pl8 == 2 && pl9 == 2)
        return 2;
    else if(pl1 == 1 && pl4 == 1 && pl7 == 1)
        return 1;
    else if(pl1 == 2 && pl4 == 2 && pl7 == 2)
        return 2;
    else if(pl2 == 1 && pl5 == 1 && pl8 == 1)
        return 1;
    else if(pl2 == 2 && pl5 == 2 && pl8 == 2)
        return 2;
    else if(pl3 == 1 && pl6 == 1 && pl9 == 1)
        return 1;
    else if(pl3 == 2 && pl6 == 2 && pl9 == 2)
        return 2;
    else if(pl1 == 1 && pl5 == 1 && pl9 == 1)
        return 1;
    else if(pl1 == 2 && pl5 == 2 && pl9 == 2)
        return 2;
    else if(pl3 == 1 && pl5 == 1 && pl7 == 1)
        return 1;
    else if(pl3 == 2 && pl5 == 2 && pl7 == 2)
        return 2;
    else
        return 0;
}
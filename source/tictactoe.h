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

void showTabIns() {                 //Completed
    cout << "1|2|3" << endl;        //This void function just shows the
    cout << "4|5|6" << endl;        //numbers of the places for be
    cout << "7|8|9" << endl;        //easier to the user locate the place he wants
}

void showTab(int pl1,int pl2,int pl3,int pl4,int pl5,int pl6,int pl7,int pl8,int pl9) {
    string plC[9];
    //If for plC[1]
    if(pl1 == 0)
        plC[1] = " ";
    else if(pl1 == 1)
        plC[1] = "X";
    else
        plC[1] = "O";
    
    if(pl2 == 0)
        plC[2] = " ";
    else if(pl2 == 1)
        plC[2] = "X";
    else
        plC[2] = "O";
    
    if(pl3 == 0)
        plC[3] = " ";
    else if(pl3 == 1)
        plC[3] = "X";
    else
        plC[3] = "O";
    
    if(pl4 == 0)
        plC[4] = " ";
    else if(pl4 == 1)
        plC[4] = "X";
    else
        plC[4] = "O";
    
    if(pl5 == 0)
        plC[5] = " ";
    else if(pl5 == 1)
        plC[5] = "X";
    else
        plC[5] = "O";
    
    if(pl6 == 0)
        plC[6] = " ";
    else if(pl6 == 1)
        plC[6] = "X";
    else
        plC[6] = "O";
    
    if(pl7 == 0)
        plC[7] = " ";
    else if(pl7 == 1)
        plC[7] = "X";
    else
        plC[7] = "O";
    
    if(pl8 == 0)
        plC[8] = " ";
    else if(pl8 == 1)
        plC[8] = "X";
    else
        plC[8] = "O";
    
    if(pl9 == 0)
        plC[9] = " ";
    else if(pl9 == 1)
        plC[9] = "X";
    else
        plC[9] = "O";
    
    cout << endl << endl;                               //Skip 2 lines to make it more handsome
    showTabIns();                                       //Show the place numbers to make easier to our user to find the place that he wants
    cout << endl << endl;                               //Skip 2 lines to make it more handsome
    cout << plC[1] << bar << plC[2] << bar << plC[3];   //Shows the first line
    cout << endl;                                       //Skips to next line
    cout << plC[4] << bar << plC[5] << bar << plC[6];   //Shows the second line
    cout << endl;                                       //Skips to next line
    cout << plC[7] << bar << plC[8] << bar << plC[9];   //Show the thirth
    cout << endl;                                       //Skips 2 lines to make it more handsome
    
}
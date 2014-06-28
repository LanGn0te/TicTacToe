/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 26 de Junho de 2014, 21:02
 */

//Defines da vida
#define bar "|"
//Includes da vida
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

/*
 * Versao beta
 */

//Functions
void showTabIns(){
    cout << "1|2|3" << endl;
    cout << "4|5|6" << endl;
    cout << "7|8|9" << endl;
}

void showTab(int pl1,int pl2,int pl3,int pl4,int pl5,int pl6,int pl7,int pl8,int pl9) {
    string plC[9];
    system("cls");
    int x;
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
    
    cout << endl << endl;
    showTabIns();
    cout << endl << endl;
    cout << plC[1] << bar << plC[2] << bar << plC[3];
    cout << endl;
    cout << plC[4] << bar << plC[5] << bar << plC[6];
    cout << endl;
    cout << plC[7] << bar << plC[8] << bar << plC[9];
    cout << endl << endl;
    
}

int sysMovImp(int pl1,int pl2,int pl3,int pl4,int pl5,int pl6,int pl7,int pl8,int pl9) {
    
}

int checkWinner(){

    return 0;
}

int main() {
    //Variable declaration section - Like Pascal
    int csOp;    
    //Variable value
    csOp = 0;
    //Welcome section
    cout << "Welcome to Tic Tac Toe Beta\n";    //Say welcome to our dear user
    cout << "Choose the game tipe:" << endl;    //Say to he choose the game tipe
    cout << "1 - Normal" << endl;               //Normal difficult option - For normal playes
    cout << "2 - Impossible\n";                 //Impossible difficult - For hardcore players
    cout << "3 - Exit\n\n";                     //An exit option - For moron players rsrsrsrs
    cout << " You choose:";                     //Line where the user will type the choosen option
    cin >> csOp;
    switch(csOp) {
        case 1:                                 //Normal gamemode IN DEVELOMPMENT
            int pl[9], x, y;
            for(x = 1; x <= 9; x++) {           //A FOR loop that set all the places value to 0
                pl[x] = 0;                      //Setting the pl[x] to 0
            }
            while(checkWinner() == 0){
                showTab(pl[1], pl[2], pl[3], pl[4], pl[5], pl[6], pl[7], pl[8], pl[9]);
                cout << endl << "Your movement: ";
                cin >> y;
                pl[y] = 1;
                system("pause");
            }
            break;
            
        case 2:                                 //Impossible gamemode IN DEVELOPMENT
            for(x = 1; x <= 9; x++) {           //A FOR loop that set all the places value to 0
                pl[x] = 0;                      //Setting the pl[x] to 0
            }
            while(checkWinner() == 0){
                showTab(pl[1], pl[2], pl[3], pl[4], pl[5], pl[6], pl[7], pl[8], pl[9]);
                cout << endl << "Your movement: ";
                cin >> y;
                pl[y] = 1;
                system("pause");
            }
            break;
            
        case 3:                                 //Exit COMPLETED
            system("pause");
            return 0;
    }
    return 0;
}


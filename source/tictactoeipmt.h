/* 
 * File:   tictactoeipmt.h
 * Author: langn0te
 *
 * Created on 22 de Agosto de 2014, 13:56
 */

#include "tictactoe.h"

void showTabIns() {                 //Completed
    cout << "1|2|3" << endl;        //This void function just shows the
    cout << "4|5|6" << endl;        //numbers of the places for be
    cout << "7|8|9" << endl;        //easier to the user locate the place he wants
}

void showTab(int pl1,int pl2,int pl3,int pl4,int pl5,int pl6,int pl7,int pl8,int pl9) {
    string plC[9];
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
    
    cout << endl << endl;                               //Skip 2 lines to make it more handsome
    showTabIns();                                       //Show the place numbers to make easier to our user to find the place that he wants
    cout << endl << endl;                               //Skip 2 lines to make it more handsome
    cout << plC[1] << bar << plC[2] << bar << plC[3];   //Shows the first line
    cout << endl;                                       //Skips to next line
    cout << plC[4] << bar << plC[5] << bar << plC[6];   //Shows the second line
    cout << endl;                                       //Skips to next line
    cout << plC[7] << bar << plC[8] << bar << plC[9];   //Show the thirth
    cout << endl << endl;                               //Skips 2 lines to make it more handsome
    
}


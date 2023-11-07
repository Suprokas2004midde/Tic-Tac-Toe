#include<iostream>
#include<stdlib.h>
using namespace std;
char display_num[3][3]={'1','2','3','4','5','6','7','8','9'};
// For Printing Which player's turn...
char turn='X';
//To store ther index of the element which player had selected....
int row,column;
void Display_Main_Board(){
    // adding main display area.....
    system("cls");
    //Adding Game Name....
    cout<<"TIC-TAC-TOE GAME"<<endl;
    // The Constrains Of The Game......
    // Player 1 sign is 'X'...And Player 2 sign is 'O'... 
    cout<<"Player 1<X>     "<<"player 2<O>"<<endl<<endl;
    cout<<"     "<<"  "<<display_num[0][0]<<"  |"<<"  "<<display_num[0][1]<<"  |"<<"  "<<display_num[0][2]<<"  "<<endl;
    cout<<"     "<<"_____!"<<"_____!"<<"_____"<<endl;
    cout<<"     "<<"  "<<display_num[1][0]<<"  |"<<"  "<<display_num[1][1]<<"  |"<<"  "<<display_num[1][2]<<"  "<<endl;
    cout<<"     "<<"_____!"<<"_____!"<<"_____"<<endl;
    cout<<"     "<<"  "<<display_num[2][0]<<"  |"<<"  "<<display_num[2][1]<<"  |"<<"  "<<display_num[2][2]<<"  "<<endl;
    cout<<"     "<<"     !"<<"     !"<<"     "<<endl<<endl;
}
void Replace_Number(){
    int choice;
    if(turn=='X')
    {
        cout<<" Player1 [X]  turn: ";
    }
    if(turn=='O')
    {
        cout<<" Player2 [O] turn: ";
    }
    cin>>choice;
    switch (choice)
    {
    case 1: row=0; column=0; break;
    case 2: row=0; column=1; break;
    case 3: row=0; column=2; break;
    case 4: row=1; column=0; break;
    case 5: row=1; column=1; break;
    case 6: row=1; column=2; break;
    case 7: row=2; column=0; break;
    case 8: row=2; column=1; break;
    case 9: row=2; column=2; break;
    default: cout<<"Invalid Input"<<endl;
        break;
    }
    // thiis if condition will apply only for player 1....
    if(turn=='X')
    {
        // this line is to check wheather the line is already filled or not...
        if(display_num[row][column]!='X' && display_num[row][column]!='O')
        {
            display_num[row][column]='X';
            turn='O';
        }
        else 
        {
            cout<<"This is already filled\n";
            Replace_Number();
        }
    }
    // thiis if condition will apply only for player 2....
    else if(turn == 'O')
    {
        // this line is to check wheather the line is already filled or not...
        if(display_num[row][column]!='X' && display_num[row][column]!='O')
        {
            display_num[row][column]='O';
            turn='X';
        }
        else 
        {
            cout<<"This is already filled\n";
            //if we dont put this line, the program will not print the line as it called display function
            Replace_Number();
        }
    }
}
int main()
{
    while(true){
    Display_Main_Board();
    Replace_Number();
    Display_Main_Board();
    }
    return 0;
}
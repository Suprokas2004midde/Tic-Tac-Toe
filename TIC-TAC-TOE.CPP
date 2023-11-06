#include<iostream>
using namespace std;
char display_num[3][3]={'1','2','3','4','5','6','7','8','9'};
void Display_Main_Board(){
    // adding main display area.....
    cout<<"     "<<"  "<<display_num[0][0]<<"  |"<<"  "<<display_num[0][1]<<"  |"<<"  "<<display_num[0][2]<<"  "<<endl;
    cout<<"     "<<"_____!"<<"_____!"<<"_____"<<endl;
    cout<<"     "<<"  "<<display_num[1][0]<<"  |"<<"  "<<display_num[1][1]<<"  |"<<"  "<<display_num[1][2]<<"  "<<endl;
    cout<<"     "<<"_____!"<<"_____!"<<"_____"<<endl;
    cout<<"     "<<"  "<<display_num[2][0]<<"  |"<<"  "<<display_num[2][1]<<"  |"<<"  "<<display_num[2][2]<<"  "<<endl;
    cout<<"     "<<"     !"<<"     !"<<"     "<<endl;
}
int main()
{
    //Adding Game Name....
    cout<<"TIC-TAC-TOE GAME"<<endl;
    // The Constrains Of The Game......
    // Player 1 sign is 'X'...And Player 2 sign is 'O'... 
    cout<<"Player 1<X>     "<<"player 2<O>"<<endl<<endl;
    Display_Main_Board();
    return 0;
}
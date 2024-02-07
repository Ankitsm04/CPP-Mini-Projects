#include<iostream>
using namespace std;
char arr[3][3] = {'1','2','3','4','5','6','7','8','9'};
char XO='X';
int a;
void SHOW(){
    system("cls");
    cout<<"##--TIC TAC TOE GAME--##\n";
    cout<<"POSITIONS OF CONTROL:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void PLAY(){
    cout<<"ENTER POSITION OF "<<XO<<" (Which are unfilled!) :\n";
    cin>>a;

    if (a==1)
       arr[0][0]=XO;
    else if (a==2)
        arr[0][1]=XO;
    else if (a==3)
        arr[0][2]=XO;
    else if (a==4)
        arr[1][0]=XO;
    else if (a==5)
        arr[1][1]=XO;
    else if (a==6)
        arr[1][2]=XO;
    else if (a==7)
        arr[2][0]=XO;
    else if (a==8)
        arr[2][1]=XO;
    else if (a==9)
        arr[2][2]=XO;
    else{
        cout<<"INVALID POSITION!";
    }
}
void Player(){
    if (XO=='X')
        XO='O';
    else
        XO='X';
}
char Win(){
    if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X')
        return 'X';
    if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X')
        return 'X';
    if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')
        return 'X';
    if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')
        return 'X';
    if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')
        return 'X';
    if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')
        return 'X';
    if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')
        return 'O';
    if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')
        return 'O';
    if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O')
        return 'O';
    if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')
        return 'O';
    if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')
        return 'O';
    if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')
        return 'O';

    return '.';

}
int main(){
    SHOW();
    while(1){
        PLAY();
        if(a<9 && a==0){
            break;
        }
        SHOW();
        if(Win()=='X'){
            cout<<"X Wins!\n";
            break;
        }
        else if(Win()=='O'){
            cout<<"O Wins!\n";
            break;
        }
        Player();
    }
    system("pause");
    return 0;


}
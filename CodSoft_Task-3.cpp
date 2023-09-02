#include<iostream>
using namespace std;
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
void display();
bool player1();
bool player2();
bool winCheckingPlayer1();
bool winCheckingPlayer2();
bool TieCheck();
int main(){
    int ans,check=0;
    bool ans2=false,ans3=false;
    cout<<endl<<"         WELCOME TO TIC TAC TOE GAME"<<endl<<endl;
    cout<<endl<<"1. Start Game"<<endl<<"2. Exit"<<endl<<endl<<"Enter Option: ";
      cin>>ans;
    while (true)
    {
      if (ans==1)
      {
        while (true)
        {
            display();
            ans2=player1();
            if (ans2==true)
            {
                display();
                cout<<endl<<"Congratulation Player 1 Wins !"<<endl;
                check=1;
                break;
            }
            ans3=TieCheck();
            if (ans3==true)
            {
                display();
                cout<<endl<<"Game Has Been Tie !"<<endl;
                check=1;
                break;
            }
            display();
            ans2=player2();
            if (ans2==true)
            {
                display();
                cout<<endl<<"Congratulation Player 2 Wins !"<<endl;
                check=1;
                break;
            }
            ans3=TieCheck();
            if (ans3==true)
            {
                display();
                cout<<endl<<"Game Has Been Tie !"<<endl;
                check=1;
                break;
            }

        }
        
      }
      else if (ans==2)
      {
        break;
      }
      else{
        cout<<endl<<"Invalid Input !"<<endl<<endl<<"Enter Option Again: ";
        cin>>ans;
      }
      if (check==1)
      {
        int playAgain,checkPlayAgain=0;
        while(true){
        cout<<endl<<"Do You Want To Play Again ?"<<endl<<endl<<"1. Yes"<<endl<<"2. No"<<endl<<endl<<"Enter Option: ";
        cin>>playAgain;
        if (playAgain==1)
        {
            int asciiNum=49;
            char converNum;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    converNum=asciiNum;
                    arr[i][j]=converNum;
                    asciiNum=asciiNum+1;
                }
                
            }
            
            break;
        }
        else if (playAgain==2)
        {
            checkPlayAgain=1;
            break;
        }
        else{
            cout<<endl<<"Invalid Option !"<<endl;
        }
        }
        if (checkPlayAgain==1)
        {
            cout<<endl<<"Game Has Been Ended !"<<endl;
            break;
        }
        
      }
      
    }
    
}
void display(){
cout<<endl<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<endl<<"----------"<<endl<<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<endl<<"----------"<<endl<<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<endl<<endl;
}
bool player1(){
    int num;
    cout<<endl<<"Player 1"<<endl<<endl;
    cout<<endl<<"Enter Option: ";
    cin>>num;
    while(true){
     if (num>0&&num<10)
     {
        if ((num==1)&&(arr[0][0]!='X'&&arr[0][0]!='O'))
        {
         arr[0][0]='X';
         return winCheckingPlayer1();
        }
        else if ((num==2)&&(arr[0][1]!='X'&&arr[0][1]!='O'))
        {
        arr[0][1]='X';
         return winCheckingPlayer1();
        }
        else if ((num==3)&&(arr[0][2]!='X'&&arr[0][2]!='O'))
        {
        arr[0][2]='X';
         return winCheckingPlayer1();
        }
        else if ((num==4)&&(arr[1][0]!='X'&&arr[1][0]!='O'))
        {
        arr[1][0]='X';
         return winCheckingPlayer1();
        }
        else if ((num==5)&&(arr[1][1]!='X'&&arr[1][1]!='O'))
        {
        arr[1][1]='X';
         return winCheckingPlayer1();
        }
        else if ((num==6)&&(arr[1][2]!='X'&&arr[1][2]!='O'))
        {
        arr[1][2]='X';
         return winCheckingPlayer1();
        }
        else if ((num==7)&&(arr[2][0]!='X'&&arr[2][0]!='O'))
        {
        arr[2][0]='X';
         return winCheckingPlayer1();
        }
        else if ((num==8)&&(arr[2][1]!='X'&&arr[2][1]!='O'))
        {
         arr[2][1]='X';
         return winCheckingPlayer1();
        }
        else if ((num==9)&&(arr[2][2]!='X'&&arr[2][2]!='O'))
        {
         arr[2][2]='X';
         return winCheckingPlayer1();
        }
        else{
            cout<<endl<<"This Option is Already Marked !"<<endl;
            cout<<"Enter Your Value Again: ";
            cin>>num;
        }
     }
     else{
        cout<<endl<<"Invalid your Value Again !"<<endl;
        display();
        cout<<"Enter Your Value Again: ";
        cin>>num;
     }
    }
}
bool winCheckingPlayer1(){
    int check=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                if (arr[i][j]!='X')
                {
                    check=0;
                    break;
                }
                
            }
            
        }
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    int a=3;
    for (int i = 0; i < 3; i++)
    {
         --a;   
        if (arr[i][a]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][1]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][2]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i]!='X')
        {
            check=0;
        }
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[1][i]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[2][i]!='X')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }

    return false;
}
bool winCheckingPlayer2(){
    int check=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                if (arr[i][j]!='O')
                {
                    check=0;
                    break;
                }
                
            }
            
        }
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    int a=3;
    for (int i = 0; i < 3; i++)
    {
         --a;   
        if (arr[i][a]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][1]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][2]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[1][i]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }
    check=1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[2][i]!='O')
        {
            check=0;
        }
        
        if (check==0)
        {
            break;
        }  
    }
    if (check==1)
    {
        return true;
    }

    return false;
}
bool TieCheck(){
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]!='X'&&arr[i][j]!='O')
            {
                return false;
            }
        }
     }
     return true;
}
bool player2(){
    int num;
    cout<<endl<<"Player 2"<<endl<<endl;
    cout<<endl<<"Enter Option: ";
    cin>>num;
    while(true){
     if (num>0&&num<10)
     {
        if ((num==1)&&(arr[0][0]!='X'&&arr[0][0]!='O'))
        {
         arr[0][0]='O';
         return winCheckingPlayer2();
        }
        else if ((num==2)&&(arr[0][1]!='X'&&arr[0][1]!='O'))
        {
        arr[0][1]='O';
         return winCheckingPlayer2();
        }
        else if ((num==3)&&(arr[0][2]!='X'&&arr[0][2]!='O'))
        {
        arr[0][2]='O';
         return winCheckingPlayer2();
        }
        else if ((num==4)&&(arr[1][0]!='X'&&arr[1][0]!='O'))
        {
        arr[1][0]='O';
         return winCheckingPlayer2();
        }
        else if ((num==5)&&(arr[1][1]!='X'&&arr[1][1]!='O'))
        {
        arr[1][1]='O';
         return winCheckingPlayer2();
        }
        else if ((num==6)&&(arr[1][2]!='X'&&arr[1][2]!='O'))
        {
        arr[1][2]='O';
         return winCheckingPlayer2();
        }
        else if ((num==7)&&(arr[2][0]!='X'&&arr[2][0]!='O'))
        {
        arr[2][0]='O';
         return winCheckingPlayer2();
        }
        else if ((num==8)&&(arr[2][1]!='X'&&arr[2][1]!='O'))
        {
         arr[2][1]='O';
         return winCheckingPlayer2();
        }
        else if ((num==9)&&(arr[2][2]!='X'&&arr[2][2]!='O'))
        {
         arr[2][2]='O';
         return winCheckingPlayer2();
        }
        else{
            cout<<endl<<"This Option is Already Marked !"<<endl;
            cout<<"Enter Your Value Again: ";
            cin>>num;
        }
     }
     else{
        cout<<endl<<"Invalid your Value Again !"<<endl;
        display();
        cout<<"Enter Your Value Again: ";
        cin>>num;
     }
    }
}

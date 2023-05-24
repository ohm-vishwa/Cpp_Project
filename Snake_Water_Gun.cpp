#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
using namespace std;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    string userName;
    string ComputerName;
    string computer;
    string ask;
    string user;

    int score = 0;
    int counter = 10;
    int i = 0;

    void intro();                
    void interFace();
    int rungame();
    void printstring(string printinloop);
    void printstringfast(string printinloop);

    int main(){
    interFace();
       
    system("cls");
    Sleep(1000); 
        
    intro();
     
    SetConsoleTextAttribute(h,11);

    while (counter > 0){
        SetConsoleTextAttribute(h,8);
        cout<<"You have remaining --> "<<counter;
        cout<<" times";
        int check = rungame();

        SetConsoleTextAttribute(h,5);
        for(int i = 0 ; i <= 65 ; i++){
        cout<<"-";
        Sleep(1);
        }

        counter--;

        SetConsoleTextAttribute(h,11);
        if(check == 9){
            counter++;
        }
        else if(counter == 0){
            cout<<"\nyour score is : "<<score<<" out of 10"<<endl;
            score = 0;
        SetConsoleTextAttribute(h,5);

        for(int i = 0 ; i <= 65 ; i++){
        cout<<"-";
        Sleep(1);
        }

        SetConsoleTextAttribute(h,9);
        cout<<"\n\nAre you want to play again?"<<endl;
        printstring("Enter 'y' for yes, or 'n' for no/exit.");
        cout<<endl;

        cout<<"---> "; 

        SetConsoleTextAttribute(h,6);
        cin>>ask;
        
        if(ask[0] == 'y'){
            counter = 10;
        }
        }

        SetConsoleTextAttribute(h,10);
        cout<<endl;
    } 

        printstring("@ohm_vishwa/> ");
        SetConsoleTextAttribute(h,7);
        printstring("Thanks ");
        SetConsoleTextAttribute(h,12);
        cout<<(char)3<<" ";
        SetConsoleTextAttribute(h,10);
        printstring(userName);
        SetConsoleTextAttribute(h,7);
        printstring(" for playing... ");

        Sleep(5000);
        return 0;
    }

    // <---------------------------------------------------------------------------------------------->
    void intro(){

    SetConsoleTextAttribute(h,5);
    cout<<endl<<endl;
    cout<<"********************************************************************************"<<endl;
    Sleep(50);
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##          ## ######## ##       ######## ########## ####      #### ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *"<<endl;
    Sleep(50);   
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##   ####   ## ##       ##       ##       ##      ## ## ##    ## ## ##      "; 
    SetConsoleTextAttribute(h,5);
    cout<<" *"<<endl;
    Sleep(50);   
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##  ##  ##  ## ######## ##       ##       ##      ## ##  ##  ##  ## ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    Sleep(50);   
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"## ##    ## ## ##       ##       ##       ##      ## ##   ####   ## ##      "; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    Sleep(50);   
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"####      #### ######## ######## ######## ########## ##          ## ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    SetConsoleTextAttribute(h,5);
    Sleep(50);
    cout<<"********************* TO THE";
    SetConsoleTextAttribute(h,6);
    cout<<" SNAKE, WATER, GUN";
    SetConsoleTextAttribute(h,5);
    cout<<" [GAME] **************************"<<endl<<endl<<endl;
    }


    void interFace(){
    SetConsoleTextAttribute(h,4);
    printstringfast("maximize Terminal for better experience.");
    Sleep(1500);
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,14);

    printstringfast("Enter your nick name ---> ");
    getline(cin,userName);
    printstringfast("Give name to your PC ---> ");
    getline(cin,ComputerName); 
    cout<<endl;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int T = ltm->tm_hour;

    SetConsoleTextAttribute(h,10);

     if(T <= 11){
        printstring("Good Morning ");
     }
     else if(T >= 12 && T <= 14){
        printstring("Good Afternoon ");
     }
     else if(T >= 15){
        printstring("Good Evening ");
     }

    SetConsoleTextAttribute(h,14);
    printstringfast(userName);
    cout<<",\n\n";

    Sleep(500);
    printstring("your opponent is your PC -> ");
    SetConsoleTextAttribute(h,10);

    printstring(ComputerName);
    SetConsoleTextAttribute(h,14);
    cout<<endl<<endl;
    Sleep(500);

    SetConsoleTextAttribute(h,14);
    printstringfast("<------- RULE OF THE GAME ------->\n\n");
    Sleep(200);

    printstringfast("\'SNAKE\' + \'WATER\' ---> SNAKE win \n");
    Sleep(200);

    printstringfast("\'SNAKE\' +  \'GUN\'  ---> GUN win \n");
    Sleep(200);

    printstringfast("\'WATER\' + \'SNAKE\' ---> SNAKE win \n");
    Sleep(200);

    printstringfast("\'WATER\' +  \'GUN\'  ---> WATER win \n");
    Sleep(200);

    printstringfast(" \'GUN\'  + \'SNAKE\' ---> GUN win \n");
    Sleep(200);

    printstringfast(" \'GUN\'  + \'WATER\' ---> WATER win \n\n");
    system("pause");
    }

    int rungame(){
    srand(time(0));
    computer = (rand()/counter)%3 + 49;

    SetConsoleTextAttribute(h,9);
    cout<<"\nPress:" ;
    SetConsoleTextAttribute(h,11);
    cout<<" [1]-> ";
    SetConsoleTextAttribute(h,14);
    cout<<"SANKE";
    SetConsoleTextAttribute(h,11);
    cout<<" [2]-> ";
    SetConsoleTextAttribute(h,14);
    cout<<"WATER";
    SetConsoleTextAttribute(h,11);
    cout<<" [3]-> ";
    SetConsoleTextAttribute(h,14);
    cout<<"GUN";
    SetConsoleTextAttribute(h,11);
    cout<<" ===> ";
    cin>>user;
    cout<<endl;

    SetConsoleTextAttribute(h,11); 
    if(user[0] != '1' || user[0] != '2' ||user[0] != '3'){
        if(computer[0] == '1' && user[0] == '2'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" WATER "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800); 
        SetConsoleTextAttribute(h,192); 
        cout<<" "; cout<<ComputerName<<" win "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl;  // user lose
        return 0;
    }
    else if(computer[0] == '2' && user[0] == '3'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" GUN "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" WATER "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,192); 
        cout<<" "; 
        cout<<ComputerName<<" win "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl; 
        return 0;
    }
    else if(computer[0] == '3' && user[0] == '1'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" GUN "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,192); 
        cout<<" ";
        cout<<ComputerName<<" win "; 
        SetConsoleTextAttribute(h,11);
        cout<<endl<<endl; 
        return 0;
    }
    else if(computer[0] == '1' && user[0] == '3'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" GUN "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,160); 
        cout<<" ";
        cout<<userName<<" win "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl;   // user win
        score++;
        return 1;
    }
    else if(computer[0] == '2' && user[0] == '1'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" WATER "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,160); 
        cout<<" ";
        cout<<userName<<" win "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl;
        score++;
        return 1;
    }
    else if(computer[0] == '3' && user[0] == '2'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" WATER "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" GUN "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,160); 
        cout<<" ";
        cout<<userName<<" win "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl;
        score++;
        return 1;
    }
    else if(computer[0] == '1' &&  user[0] == '1'){
        cout<<userName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,5); 
        cout<<"  "<<(char)6<<"  "; 
        SetConsoleTextAttribute(h,11); 
        cout<<ComputerName<<" : "; 
        SetConsoleTextAttribute(h,112); 
        cout<<" SNAKE "; 
        SetConsoleTextAttribute(h,11); 
        cout<<" ---> "; 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        SetConsoleTextAttribute(h,224); 
        cout<<" Match Drawn "; 
        SetConsoleTextAttribute(h,11); 
        cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else if(computer[0] == '2' && user[0] == '2'){
         cout<<userName<<" : "; 
         SetConsoleTextAttribute(h,112); 
         cout<<" WATER "; 
         SetConsoleTextAttribute(h,5); 
         cout<<"  "<<(char)6<<"  "; 
         SetConsoleTextAttribute(h,11); 
         cout<<ComputerName<<" : "; 
         SetConsoleTextAttribute(h,112); 
         cout<<" WATER "; 
         SetConsoleTextAttribute(h,11); 
         cout<<" ---> "; 
         Sleep(200); 
         cout<<(char)2<<" ";
         Sleep(800);  
         SetConsoleTextAttribute(h,224); 
         cout<<" Match Drawn "; 
         SetConsoleTextAttribute(h,11); 
         cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else if(computer[0] == '3' && user[0] == '3'){
         cout<<userName<<" : "; 
         SetConsoleTextAttribute(h,112); 
         cout<<" GUN "; 
         SetConsoleTextAttribute(h,5); 
         cout<<"  "<<(char)6<<"  "; 
         SetConsoleTextAttribute(h,11); 
         cout<<ComputerName<<" : "; 
         SetConsoleTextAttribute(h,112); 
         cout<<" GUN "; 
         SetConsoleTextAttribute(h,11); 
         cout<<" ---> "; 
         Sleep(200); 
         cout<<(char)2<<" ";
         Sleep(800);  
         SetConsoleTextAttribute(h,224); 
         cout<<" Match Drawn "; 
         SetConsoleTextAttribute(h,11); 
         cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else{
        SetConsoleTextAttribute(h,4);
        cout<<"Invalid input\n\n";
        SetConsoleTextAttribute(h,11);
        return 9;
    }
    }
        return 0;
    }
    void printstring(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            Sleep(30);
        }
    }
    void printstringfast(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            Sleep(5);
        }
    }

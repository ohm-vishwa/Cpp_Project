#include <iostream>
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
        string agree7 = "Enter 'y' for yes, or 'n' for no/exit.";
        printstring(agree7);
        cout<<endl;

        SetConsoleTextAttribute(h,9);
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
        string thanks = "Thanks ";
        string forplaying = " for playing... ";
        printstring("@ohm_prakash/> ");
        SetConsoleTextAttribute(h,7);
        printstring(thanks);
        SetConsoleTextAttribute(h,12);
        cout<<(char)3<<" ";
        SetConsoleTextAttribute(h,10);
        printstring(userName);
        SetConsoleTextAttribute(h,7);
        printstring(forplaying);

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
    string firstline = "maximize Terminal for better experience.";
    printstringfast(firstline);
    Sleep(1500);
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,14);

    string user = "Enter your nick name ---> ";
    string pc = "Give name to your PC ---> "; 
    printstringfast(user);
    getline(cin,userName);
    printstringfast(pc);
    getline(cin,ComputerName); 
    cout<<endl;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int T = ltm->tm_hour;

    SetConsoleTextAttribute(h,10);

     if(T <= 11){
        string greet = "Good Morning ";
        printstring(greet);
     }
     else if(T >= 12 && T <= 14){
        string greet1 = "Good Afternoon ";
        printstring(greet1);
     }
     else if(T >= 15){
        string greet2 = "Good Evening ";
        printstring(greet2);
     }

    SetConsoleTextAttribute(h,14);
    printstringfast(userName);
    cout<<","<<endl<<endl;

    Sleep(500);
    string opponent = "your opponent is your PC -> ";
    printstring(opponent);
    SetConsoleTextAttribute(h,10);

    printstring(ComputerName);
    SetConsoleTextAttribute(h,14);
    cout<<endl<<endl;
    Sleep(500);

    SetConsoleTextAttribute(h,4);
    string aboutGame = "Before starting, I would like to show.";
    printstring(aboutGame);
    cout<<endl<<endl;
    Sleep(400);

    string rule = "<------- RULE OF THE GAME ------->";
    string rule1 = "\'SNAKE\' + \'WATER\' ---> SNAKE win ";
    string rule3 = "\'WATER\' + \'SNAKE\' ---> SNAKE win ";
    string rule4 = "\'WATER\' +  \'GUN\'  ---> WATER win ";
    string rule2 = "\'SNAKE\' +  \'GUN\'  ---> GUN win ";
    string rule5 = " \'GUN\'  + \'SNAKE\' ---> GUN win ";
    string rule6 = " \'GUN\'  + \'WATER\' ---> WATER win ";
    
    SetConsoleTextAttribute(h,14);
    printstringfast(rule);
    cout<<endl<<endl;
    Sleep(200);

    printstringfast(rule1);
    Sleep(200);
    cout<<endl;

    printstringfast(rule2);
    Sleep(200);
    cout<<endl;

    printstringfast(rule3);
    Sleep(200);
    cout<<endl;

    printstringfast(rule4);
    Sleep(200);
    cout<<endl;

    printstringfast(rule5);
    Sleep(200);
    cout<<endl;

    printstringfast(rule6);
    cout<<endl<<endl;
    system("pause");
    }

    int rungame(){
    srand(time(0));
    computer = rand()%3 + 49;

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
        cout<<"Invalid counter\n\n";
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

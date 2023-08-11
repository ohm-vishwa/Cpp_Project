#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    string userName;
    string ComputerName;
    string computer;
    string ask;
    string user;

    int score = 0;
    int counter = 10;

    void intro();                
    void interFace();
    int rungame();
    void printstring(string printinloop);
    void printstringfast(string printinloop);
    void printstringfast2(string printinloop);
    void setColor(int color);

    int main(){
    interFace();
       
    system("Color A");
    Sleep(300);
    system("cls");
        
    intro();
    Sleep(500);
    setColor(11);

    while (counter > 0){
        setColor(8);
        if(counter < 10){
            printstringfast("You have remaining --> ");
            cout<<counter;
            printstringfast(" times");
            Sleep(400);
        }
        int check = rungame();

        setColor(5);
    for(int i = 0 ; i <= 65 ; i++){
        cout<<"-";
        if(i%2 == 0){
                Sleep(1);
            }
        }
        
        counter--;
        setColor(11);
        if(check == 9){
            counter++;
        }
        else if(counter == 0){
            cout<<"\nyour score is : "<<score<<" out of 10"<<endl;
            score = 0;
        setColor(5);

    for(int i = 0 ; i <= 65 ; i++){
        cout<<"-";
        if(i%2 == 0){
                Sleep(1);
            }
        }

        setColor(9);
        printstring("\n\nAre you want to play again ?\n");
        printstring("Enter 'y' for yes, or 'n' for no/exit.\n");
        cout<<"---> "; 

        setColor(6);
        cin>>ask;
        
        if(ask[0] == 'y'){
            counter = 10;
        }
        }

        setColor(10);
        cout<<endl;
        } 
        
        printstring("@ohm_vishwa/> ");
        setColor(7);
        printstring("Thanks ");
        setColor(12);
        cout<<(char)3<<" ";
        setColor(10);
        printstring(userName);
        setColor(7);
        printstring(" for playing... ");
        Sleep(5000);   

        return 0;
    }

    // <---------------------------------------------------------------------------------------------->

    void printstring(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            Sleep(15);
        }
    }

    void printstringfast(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            if(i%2 == 0){
                Sleep(1);
            }
        }
    }

    void printstringfast2(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
        if(i%4 == 0){
            Sleep(1);
        }
        }
    }

    void setColor(int color){
        SetConsoleTextAttribute(h,color);
    }

    void interFace(){
    setColor(4);
    printstring("maximize Terminal for better experience.\n\n");
    Sleep(500);
    setColor(14);

    printstring("Enter your nick name ---> ");
    getline(cin,userName);
    printstring("Give name to your PC ---> ");
    getline(cin,ComputerName); 
    cout<<endl;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int T = ltm->tm_hour;

    setColor(10);

     if(T <= 11){
        printstring("Good Morning ");
     }
     else if(T >= 12 && T <= 14){
        printstring("Good Afternoon ");
     }
     else if(T >= 15){
        printstring("Good Evening ");
     }

    setColor(14);
    printstring(userName);
    cout<<",\n\n";

    Sleep(500);
    printstring("your opponent is your PC -> ");
    setColor(10);

    printstring(ComputerName);
    setColor(14);
    cout<<endl<<endl;
    Sleep(500);

    setColor(14);
    printstring("<------- RULE OF THE GAME ------->\n\n");
    Sleep(30);

    printstring("\'SNAKE\' + \'WATER\' ---> SNAKE win \n");
    printstring("\'SNAKE\' +  \'GUN\'  ---> GUN win \n");
    printstring("\'WATER\' + \'SNAKE\' ---> SNAKE win \n");
    printstring("\'WATER\' +  \'GUN\'  ---> WATER win \n");
    printstring(" \'GUN\'  + \'SNAKE\' ---> GUN win \n");
    printstring(" \'GUN\'  + \'WATER\' ---> WATER win \n\n");
    system("pause");
    }

    int rungame(){
    setColor(9);
    printstringfast("\nPress:");
    setColor(11);
    printstringfast(" [1]-> ");
    setColor(14);
    printstringfast("SANKE");
    setColor(11);
    printstringfast(" [2]-> ");
    setColor(14);
    printstringfast("WATER");
    setColor(11);
    printstringfast(" [3]-> ");
    setColor(14);
    printstringfast("GUN");
    setColor(11);
    printstringfast(" ===> ");
    cin>>user;
    cout<<endl;
        
    srand(time(0));
    computer = (rand()/counter)%3 + 49;
        
    setColor(11); 
    if(user[0] != '1' || user[0] != '2' ||user[0] != '3'){
        if(computer[0] == '1' && user[0] == '2'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" WATER "); 
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800); 
        setColor(192); 
        cout<<" "; 
        printstringfast(ComputerName);
        printstringfast(" win "); 
        setColor(11); 
        cout<<endl<<endl;  // user lose
        return 0;
    }
    else if(computer[0] == '2' && user[0] == '3'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" GUN ");  
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" WATER "); 
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(192); 
        printstringfast(" "); 
        printstringfast(ComputerName);
        printstringfast(" win "); 
        setColor(11); 
        cout<<endl<<endl;  // user lose
        return 0;
    }
    else if(computer[0] == '3' && user[0] == '1'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" GUN ");  
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(192); 
        printstringfast(" ");
        printstringfast(ComputerName);
        printstringfast(" win "); 
        setColor(11);
        cout<<endl<<endl;  // user lose
        return 0;
    }
    else if(computer[0] == '1' && user[0] == '3'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" GUN ");  
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(160); 
        printstringfast(" ");
        printstringfast(userName);
        printstringfast(" win "); 
        setColor(11); 
        cout<<endl<<endl;   // user win
        score++;
        return 1;
    }
    else if(computer[0] == '2' && user[0] == '1'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" WATER "); 
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(160); 
        printstringfast(" ");
        printstringfast(userName);
        printstringfast(" win "); 
        setColor(11); 
        cout<<endl<<endl; // user win
        score++;
        return 1;
    }
    else if(computer[0] == '3' && user[0] == '2'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" WATER "); 
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" GUN ");  
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(160); 
        printstringfast(" ");
        printstringfast(userName);
        printstringfast(" win "); 
        setColor(11); 
        cout<<endl<<endl; // user win
        score++;
        return 1;
    }
    else if(computer[0] == '1' &&  user[0] == '1'){
        printstringfast(userName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(5); 
        cout<<"  "<<(char)6<<"  "; 
        setColor(11); 
        printstringfast(ComputerName);
        cout<<" : "; 
        setColor(112); 
        printstringfast(" SNAKE "); 
        setColor(11); 
        printstringfast(" ---> "); 
        Sleep(200); 
        cout<<(char)2<<" ";
        Sleep(800);  
        setColor(224); 
        printstringfast(" Match Drawn "); 
        setColor(11); 
        cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else if(computer[0] == '2' && user[0] == '2'){
         printstringfast(userName);
         cout<<" : "; 
         setColor(112); 
         printstringfast(" WATER "); 
         setColor(5); 
         cout<<"  "<<(char)6<<"  "; 
         setColor(11); 
         printstringfast(ComputerName);
         cout<<" : "; 
         setColor(112); 
         printstringfast(" WATER "); 
         setColor(11); 
         printstringfast(" ---> "); 
         Sleep(200); 
         cout<<(char)2<<" ";
         Sleep(800);  
         setColor(224); 
         printstringfast(" Match Drawn "); 
         setColor(11); 
         cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else if(computer[0] == '3' && user[0] == '3'){
         printstringfast(userName);
         cout<<" : "; 
         setColor(112); 
         printstringfast(" GUN ");  
         setColor(5); 
         cout<<"  "<<(char)6<<"  "; 
         setColor(11); 
         printstringfast(ComputerName);
         cout<<" : "; 
         setColor(112); 
         printstringfast(" GUN ");  
         setColor(11); 
         printstringfast(" ---> "); 
         Sleep(200); 
         cout<<(char)2<<" ";
         Sleep(800);  
         setColor(224); 
         printstringfast(" Match Drawn "); 
         setColor(11); 
         cout<<endl<<endl;   // match drawn
        counter++;
        return 2;
    }
    else{
        setColor(4);
        printstringfast("Invalid input\n\n");
        setColor(11);
        return 9;
    }
    }
        return 0;
    }

    void intro(){
    setColor(5);
    printstringfast2("\n\n\t\t\t********************************************************************************\n");
    printstringfast2("\t\t\t* ");
    setColor(7); 
    printstringfast2("##          ## ######## ##       ######## ########## ####      #### ########"); 
    setColor(5);
    printstringfast2(" *\n");
    printstringfast2("\t\t\t* ");
    setColor(7); 
    printstringfast2("##   ####   ## ##       ##       ##       ##      ## ## ##    ## ## ##      "); 
    setColor(5);
    printstringfast2(" *\n");
    printstringfast2("\t\t\t* ");
    setColor(7); 
    printstringfast2("##  ##  ##  ## ######## ##       ##       ##      ## ##  ##  ##  ## ########"); 
    setColor(5);
    printstringfast2(" *\n");
    printstringfast2("\t\t\t* ");
    setColor(7); 
    printstringfast2("## ##    ## ## ##       ##       ##       ##      ## ##   ####   ## ##      "); 
    setColor(5);
    printstringfast2(" *\n");
    printstringfast2("\t\t\t* ");
    setColor(7); 
    printstringfast2("####      #### ######## ######## ######## ########## ##          ## ########"); 
    setColor(5);
    printstringfast2(" *\n");
    printstringfast2("\t\t\t********************* TO THE");
    setColor(1);
    printstringfast2(" SNAKE, WATER, GUN");
    setColor(5);
    printstringfast2(" [GAME] **************************\n\n");
    }

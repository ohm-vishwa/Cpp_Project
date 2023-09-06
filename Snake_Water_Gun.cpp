/*
This is a game programme based on Snake-Water-Gun similary to the the Rock-Paper-Scissors.
also another guess game in this programme.

Their is no any OOPs concept used in this programme, only basic concepts is used.
playable in code editor terminal or you can compile and run executable file any where on your desktop.

compile only in offline environment.
don`t try to execute on online c++ compiler, online compiler can throw error because online compiler
doesn`t have <windows.h> header file.

I hope you will enjoy my small piece of code. @ohm 
*/

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <limits>
#include <chrono>
#include <thread>

#define frameDelay 50
#define numIterations 8

using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    string userName;        // User name input string itself
    string ComputerName;    // PC name given by User
    string computer;        // PC random number explicit type casted as character at first index;
    string ask;             // ask for play again y/n as ask[0]
    string user;            // for user input 1,2,3 (string: to protect from error)

    int score = 0;
    int counter = 10;

     int rungame();                 // sanke, water, gun game
    void intro();                   // welcome animation
    void interFace();               // for required input or playing rules
    void guessNumber();             // Another guess number game
    void printstring(string);       // print each character of input string in a loop with delay
    void printstringfast(string);   // less delay
    void printstringfast2(string);  // very less delay
    void setColor(int);             // for text color
    void pcNameCall();              // print PC Name given by user like this : @pc_name/>
    void userNameCall();            // print user name @user_name/>
    void loadingAnimation();

    int main(){
        interFace();

        loadingAnimation();

        Sleep(1000);     //for delay


        intro();

        Sleep(500);
        setColor(11);

        while (counter > 0){
                setColor(8);
    
                if(counter < 10){
                    printstringfast("You have remaining --> ");         // show remaining turns
                    cout <<  counter;
                    
                    if(counter != 1){
                        printstringfast(" times");
                    }
                    else{
                        printstringfast(" time");
                    }
                }
    
                int check = rungame();        //<-------- run game
                setColor(5);
    
                for(int i = 0 ; i <= 80 ; i++){
                    cout <<  "-";
                    Sleep(1);
                }
    
                counter--;
                
                setColor(11);
    
                if(check == 9){
                    counter++;
                }
                else if(counter == 0){
                    cout  <<   "\nyour score is : "  <<   score  <<   " out of 10"  <<   endl;
                    score = 0;

                    setColor(5);

                    for(int i = 0 ; i <= 80 ; i++){
                        cout <<  "-";
                        Sleep(1);
                    }
    
                    setColor(14);
                    printstring("\n\nAre you want to play again?\n");
                    printstring("Enter 'y/n' for yes/no ===> ");
                    
                    setColor(9);
                    cin >> ask;
    
                    if(ask[0] == 'y'){
                        counter = 10;
                    }
                }
    
                setColor(10);
                cout <<  endl;
            } 
    
            // Iterate through the string and replace spaces with underscores
            for (char &c : ComputerName) {
                if (c == ' ') {
                    c = '_';
                }
            }
    
            guessNumber();
    
            // Iterate through the string and underscores with replace spaces
            for (char &c : userName) {
                if (c == '_') {
                    c = ' ';
                }
            } 
    
            Sleep(1000);

        setColor(10);
        printstring("\n\n@ohm_vishwa/> ");
        setColor(14);
        printstring("Thanks ");
        setColor(12);
        cout <<  (char)3 <<  " ";      // print heart symboll
        setColor(10);
        printstring(userName);
        setColor(14);
        printstring(" for playing.");
    
        Sleep(5000);   
        setColor(7);

        return 0;
    }


    /* <----------------------------------------Functions Definition------------------------------------------------------> */
    void printstring(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout <<  printinloop[i];
            Sleep(15);
        }
    }


    void printstringfast(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout <<  printinloop[i];
            Sleep(1);
        }
    }


    void printstringfast2(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout <<  printinloop[i];
            if(i%22 == 0){
                Sleep(1);
            }
        }
    }


    void setColor(int color){
        SetConsoleTextAttribute(h,color);
    }


    void pcNameCall(){
        setColor(10);
        printstring("\n@");
        printstring(ComputerName);
        printstring("/> ");
        setColor(14);
    }


    void userNameCall(){
        setColor(11);
        printstring("\n@");
        printstring(userName);
        printstring("/> ");
        setColor(14);
    }


    void loadingAnimation(){
        // Define an array of spinner characters
        char spinner[] = { '|', '/', '-', '\\' };
    
        // Number of spinner frames
        int numFrames = sizeof(spinner) / sizeof(spinner[0]);
    
        for (int iter = 0; iter < numIterations; ++iter) {
            for (int frame = 0; frame < numFrames; ++frame) {

                cout << "\033[2J\033[H"; 
            
                // Print the spinner frame
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading... " << spinner[frame] << flush;
            
                // Delay before the next frame
                this_thread::sleep_for(chrono::milliseconds(frameDelay));
            }
        }
    
        // Clear the console screen after the animation
        cout << "\033[2J\033[H"; 
    }


    void guessNumber(){
        pcNameCall();
        printstring("it`s ok ");
        setColor(10);
        printstring(userName);
        cout <<  endl;
        
        // Iterate through the string and replace spaces with underscores
        for (char &c : userName) {
            if (c == ' ') {
                c = '_';
                }
        }
    

        Sleep(500);

        pcNameCall();
        printstring("Before exit, I want to paly diffrent another game with you.\n");
        Sleep(500);
        pcNameCall();
        printstring("Are you want to paly with me?\n");
        Sleep(500);
        pcNameCall();
        printstring("Enter 'y/n' for yes/no ===> ");
        setColor(9);
        cin >> ask;

        if(ask[0] != 'y'){
            return;
        }
        else{

            srand(time(0));

            // Generate a random number between 1 and 100
            int randomNumber = rand() % 100 + 1;
            int guess;
            int attempts = 0;

            Sleep(500);

            pcNameCall();
            setColor(14);
            printstring("I choose a number between (1-100)\n");
            pcNameCall();
            printstring("guess my number.\n");

            for(int i = 1 ; i ; i++) {

                if(i == 3){
                    pcNameCall();
                    printstring("[Hint] ===> ");
                    setColor(160);
                    printstring(" Use \"Divide & Conquer\" Method ");
                    setColor(7);
                    cout <<  endl;
                }

                userNameCall();
                if(i != 1){
                    printstring("===> ");
                }
                else{
                    printstring("Enter your guess (1-100) ===> ");
                }
                setColor(9);

                cin  >>  guess;

                cin.clear();          // Clear error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                attempts++;

                if (guess < 1 || guess > 100) {
                    pcNameCall();
                    setColor(4);
                    printstring("Please enter a number between 1 and 100.\n");      // when input is not in range or not in integer domain
                    i--;
                    continue;
                }

                if (guess < randomNumber) {
                    pcNameCall();
                    setColor(4);
                    printstring("Too low! Try again with (greater number) ");
                    setColor(10);
                    cout<<(char)24;
                    cout<<endl;
                } else if (guess > randomNumber) {
                    pcNameCall();
                    setColor(4);
                    printstring("Too High! Try again with (lower number) ");
                    setColor(10);
                    cout<<(char)25;
                    cout<<endl;
                } else {
                    Sleep(300);
                    pcNameCall();
                    setColor(5);
                    printstring("Congratulations! You guessed the number ");
                    cout  <<   randomNumber  <<   " in "  <<   attempts  <<   " attempts."  <<  endl;
                    break;
                }
            }
        }
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
        cout <<  endl;

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
        cout <<  ",\n\n";

        Sleep(500);

        printstring("your opponent is your PC -> ");

        setColor(10);
        printstring(ComputerName);
        cout <<  endl <<  endl;

        Sleep(500);

        setColor(14);
        printstring("<------- RULE OF THE GAME ------->\n\n");

        Sleep(50);

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
        printstringfast(" [1]=> ");
        setColor(14);
        printstringfast("SANKE");
        setColor(11);
        printstringfast("  [2]=> ");
        setColor(14);
        printstringfast("WATER");
        setColor(11);
        printstringfast("  [3]=> ");
        setColor(14);
        printstringfast("GUN");
        setColor(9);
        printstringfast(" ==> ");
        
        cin  >>  user;
        cout <<  endl;   

        srand(time(0));
        computer = (rand()/counter)%3 + 49;

        setColor(11); 

        if(user[0] != '1' || user[0] != '2' || user[0] != '3'){
            if(computer[0] == '1' && user[0] == '2'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" WATER "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" SNAKE "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";    
                setColor(192); 
                cout <<  " "; 
                printstringfast(ComputerName);
                printstringfast(" win "); 
                setColor(11); 
                cout <<  endl <<  endl;              // user lose

                return 0;
            }
            else if(computer[0] == '2' && user[0] == '3'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" GUN ");  
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" WATER "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";      
                setColor(192); 
                printstringfast(" "); 
                printstringfast(ComputerName);
                printstringfast(" win "); 
                setColor(11); 
                cout <<  endl <<  endl;              // user lose

                return 0;
            }
            else if(computer[0] == '3' && user[0] == '1'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" SNAKE "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" GUN ");  
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";         
                setColor(192); 
                printstringfast(" ");
                printstringfast(ComputerName);
                printstringfast(" win "); 
                setColor(11);
                cout <<  endl <<  endl;              // user lose
                
                return 0;
            }
            else if(computer[0] == '1' && user[0] == '3'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" GUN ");  
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" SNAKE "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";         
                setColor(160); 
                printstringfast(" ");
                printstringfast(userName);
                printstringfast(" win "); 
                setColor(11); 
                cout <<  endl <<  endl;               // user win

                score++;

                return 1;
            }
            else if(computer[0] == '2' && user[0] == '1'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" SNAKE "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" WATER "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";        
                setColor(160); 
                printstringfast(" ");
                printstringfast(userName);
                printstringfast(" win "); 
                setColor(11); 
                cout <<  endl <<  endl;             // user win

                score++;

                return 1;
            }
            else if(computer[0] == '3' && user[0] == '2'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" WATER "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" GUN ");  
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";         
                setColor(160); 
                printstringfast(" ");
                printstringfast(userName);
                printstringfast(" win "); 
                setColor(11); 
                cout <<  endl <<  endl;             // user win

                score++;

                return 1;
            }
            else if(computer[0] == '1' &&  user[0] == '1'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" SNAKE "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" SNAKE "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";         
                setColor(224); 
                printstringfast(" Match Drawn "); 
                setColor(11); 
                cout <<  endl <<  endl;              // match drawn

                counter++;

                return 2;
            }
            else if(computer[0] == '2' && user[0] == '2'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" WATER "); 
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" WATER "); 
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";           
                setColor(224); 
                printstringfast(" Match Drawn "); 
                setColor(11); 
                cout <<  endl <<  endl;           // match drawn

                counter++;

                return 2;
            }
            else if(computer[0] == '3' && user[0] == '3'){
                printstringfast(userName);
                cout <<  " : "; 
                setColor(112); 
                printstringfast(" GUN ");  
                setColor(5); 
                cout <<  "  " <<  (char)6 <<  "  "; 
                setColor(11); 
                printstringfast(ComputerName);
                cout <<  " : "; 
                setColor(112); 
                Sleep(1100);
                printstringfast(" GUN ");  
                setColor(11); 
                printstringfast(" ---> "); 
                Sleep(200); 
                cout <<  (char)2 <<  " ";         
                setColor(224); 
                printstringfast(" Match Drawn "); 
                setColor(11); 
                cout <<  endl <<  endl;           // match drawn

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


    //welcome
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

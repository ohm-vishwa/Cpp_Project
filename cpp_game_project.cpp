#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    string userName;
    string ComputerName;
    string computer;
    string user;
    string ask;

    int score = 0;
    int input = 10;
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

    while (input > 0){
        SetConsoleTextAttribute(h,8);
        cout<<"You have remaining --> "<<input;
        cout<<" times";
        int check = rungame();

        SetConsoleTextAttribute(h,5);
        for(int i = 0 ; i <= 65 ; i++){
        cout<<"-";
        Sleep(1);
        }

        input--;

        SetConsoleTextAttribute(h,11);
        if(check == 9){
            input++;
        }
        else if(input == 0){
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

        SetConsoleTextAttribute(h,4);
        string careful = "Be Careful, don`t Enter Invalid Input.";
        printstringfast(careful);
        cout<<endl;

        SetConsoleTextAttribute(h,9);
        cout<<"---> "; 

        SetConsoleTextAttribute(h,6);
        cin>>ask;
        cout<<"\n\n";

        if(ask[0] == 'y'){
            input = 10;
        }
        }

        SetConsoleTextAttribute(h,11);
        cout<<endl;
    }

    if(ask[0] != 'n'){
        SetConsoleTextAttribute(h,4);
        string invalid = "You are Entered invalid input.";

        for(int i = 0 ; invalid[i] != '\0' ; i++){
            cout<<invalid[i];
            Sleep(60);
        }
        cout<<endl<<endl;
    
    system("color A");
    Sleep(890);
    string fetchingdata = "Fetching Data";

    for(int i = 0 ; fetchingdata[i] != '\0' ; i++){
        cout<<fetchingdata[i];
        Sleep(20);
    }

    for(int i = 0 ; i <= 8 ; i++){
        cout<<" .";
        Sleep(150);
    }

    Beep(1600,2000);
    cout<<endl;
    
    for(int i = 0 ; i < 4 ; i++){
        for(int i = 0 ; i < 90 ; i++){
    cout<<" 01/08/2023    <DIR>          ."<<endl;
    cout<<" 01/08/2023    <DIR>          .."<<endl;
    cout<<" 01/08/2023    <DIR>          spool"<<endl;
    cout<<" 0 File(s)              0 bytes"<<endl<<endl;
    cout<<"     xx/xx/xxxx  **:**     <DIR>          5f20f79499630e2a12f8ebaf42099b16";
    cout<<"     xx/xx/xxxx  **:**     <DIR>          61716a7498d8294a9674ad25512c35ca"<<endl;
    cout<<"     xx/xx/xxxx  **:**     <DIR>          61dc11ed00fa0e234914d51b2f8f575e"<<endl;
    cout<<"     xx/xx/xxxx  **:**     <DIR>          6416ad942c3ce67b0032685a413c44c8"<<endl;
    cout<<"     xx/xx/xxxx  **:**     <DIR>          66beb4694ee1ac7dc128577ca5164b7e";
    cout<<"     xx/xx/xxxx  **:**     <DIR>          66beb4694ee1ac7dc128577ca5164b7e"<<endl;
    cout<<"         Directory of C:Usersohmdt.gradlecaches7.4scriptsf2sqd9r8jidegkmd286y546qzsettings"<<endl;
    }

    for(int i = 0 ; i < 100 ; i++){
        cout<<"         Directory of C:Usersohmdt.gradlecaches7.4scriptsf2sqd9r8jidegkmd286y546qzsettings"<<endl;
        cout<<""<<endl;
        cout<<"xx/xx/xxxx  --------    <DIR>          ."<<endl;
        cout<<"xx/xx/xxxx  --------    <DIR>          .."<<endl;
        cout<<"xx/xx/xxxx  --------             2,424 _BuildScript_$_run_closure1$_closure2.class";
        cout<<"xx/xx/xxxx  --------             2,781 _BuildScript_$_run_closure1.class"<<endl;
        cout<<"xx/xx/xxxx  --------             2,356 _BuildScript_.class"<<endl;
        cout<<"               3 File(s)          7,561 bytes"<<endl;
    }
    }

    for(int i = 0 ; i < 400 ; i++){
        cout<<"         Directory of C:Usersohmdt.gradlecaches7.4scriptsf2sqd9r8jidegkmd286y546qzsettings"<<endl;
        cout<<""<<endl;
        cout<<"xx/xx/xxxx  --------    <DIR>          ."<<endl;
        cout<<"xx/xx/xxxx  --------    <DIR>          .."<<endl;
        cout<<"xx/xx/xxxx  --------             2,424 _BuildScript_$_run_closure1$_closure2.class";
        cout<<"xx/xx/xxxx  --------             2,781 _BuildScript_$_run_closure1.class"<<endl;
        cout<<"xx/xx/xxxx  --------             2,356 _BuildScript_.class"<<endl;
        cout<<"               3 File(s)          7,561 bytes"<<endl;
    }

    cout<<"Hellow"<<flush;
    system("CLS");

    Sleep(700);
    // cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"ohm@hacker/> ";
    string yoursystem = "Your system is HACKED!";

    for(int i = 0 ; yoursystem[i] != '\0' ; i++){
        cout<<yoursystem[i];
        Sleep(100);
    }

    Sleep(1000);
    system("CLS");

    // After dislplay cleaned
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t   0110        1010            010101                0101010       1010    1010    10101010101010    1010101010101        1010 "<<endl;
    cout<<"\t\t   0110        1010           10101010             1010  1010      0101   1010     10101010101010    10101010101010       1010 "<<endl;
    cout<<"\t\t   0110        1010          0101   0101          0101     0101    0101 0101       0101              1010       1010      1010 "<<endl;
    cout<<"\t\t   0110101010101010         1010     1010        0101              0101010         10101010101010    1010        1010     1010 "<<endl;
    cout<<"\t\t   0110101010101010        010101010010101       1010              10101010        10101010101010    1010        1010     1010 "<<endl;
    cout<<"\t\t   0110        1010       10101010101011010       1010     0101    0101 01010      1010              1010       1010           "<<endl;
    cout<<"\t\t   0110        1010      0101            0101      0101   1010     1010   1010     10101010101010    10101010101010       0101 "<<endl;
    cout<<"\t\t   0110        1010     0101              0101       10101010      1010    1010    10101010101010    1010101010101        0101 "<<endl;
    SetConsoleTextAttribute(h,10);
    cout<<"\n\n\n\n";

    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string hello = "Hello ";
    printstring(hello);
    printstring(userName);
    cout<<",";
    cout<<endl<<endl;


    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string hacked1 = "Your System is under my control.";
    printstring(hacked1);
    cout<<endl<<endl;

    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string hacked = "Dont`t try to exit.";
    printstring(hacked);
    cout<<endl<<endl;

    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string dontworry = "Don`t worry, I will not do any harm to your System.";
    printstring(dontworry);
    cout<<endl<<endl;

    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string hacked2 = "I am going to play a game with you. if You Win, I leave your System.";
    printstring(hacked2);
    cout<<endl<<endl;

    Sleep(1500);
    cout<<"ohm@hacker/> ";
    string hacked3 = "I have chosen a number, between (1 to 100).";
    printstring(hacked3);
    cout<<endl<<endl;

    Sleep(1000);
    cout<<"ohm@hacker/> ";
    string hacked4 = "I give you only five chance to guess.";
    printstring(hacked4);
    cout<<endl<<endl;

    string greater1 = "Your guess is Greater than my number.";
    string smaller1 = "Your guess is Smaller than my number.";
    string GuessNmber = " : Guess number ---> ";
    string GuessAgain = " : Guess again ---> ";
    string lastchance = " : Last Chance ---> ";
    string youareable = "You guessed my number, 'You Win'";

    int guess;
    int notguess = 0;

    srand(time(0));
    int myNumber = rand()% 95 + 6;

    for(int i = 1 ; i <= 5 ; i++){
        Sleep(700);  
        cout<<"ohm@hacker/> ";
        cout<<i;
        if( i == 1 ){
            printstringfast(GuessNmber);
        }
        else if(i == 5){
            printstringfast(lastchance);
        }
        else{
            printstringfast(GuessAgain);
        }
        cin>>guess;
        cout<<endl;

        Sleep(700);  
        cout<<"ohm@hacker/> ";
        if(guess > myNumber){
        printstringfast(greater1);
    }
    else if(guess < myNumber){
        printstringfast(smaller1);
    }
    else{
        printstringfast(youareable);
        cout<<endl;
        notguess = 1;
        break;
    }
    cout<<endl<<endl;
    }

    if(notguess == 0){
    cout<<endl;
    cout<<"ohm@hacker/> ";
    string unabletoguess = "You are unable to Guess my number.";
    printstring(unabletoguess);
    cout<<endl<<endl;
    }

    Sleep(1000);
    cout<<"ohm@hacker/> ";
    string mynumberis = "My number is : ";
    printstring(mynumberis);
    cout<<myNumber<<endl<<endl;
    cout<<endl;

    if(notguess == 0){
    Sleep(1000);
    system("color c");
    string send = "Sending files ";
    printstringfast(send);
    string dot = ". . . . . .";

    for(int i = 0 ; dot[i] != '\0' ; i++){
        cout<<dot[i];
        Sleep(200);
    }

    Sleep(1500);
    system("color a");
    cout<<endl<<endl<<endl;
    }


    cout<<"ohm@hacker/> ";
    Sleep(500);
    string relax = "Relax......... ";
    printstring(relax);
    printstringfast(userName);
    string yoursystemissafe = ", This is only for fun. Your System is Safe.";
    printstringfast(yoursystemissafe);
    cout<<endl<<endl;
    }

    Sleep(1000);
    cout<<"@ohm/> ";
    string bye = "Bye ";
    printstring(bye);
    cout<<(char)3;
    string takecare = " tacke care, Dont`t Click on illegal links.";
    printstring(takecare);
    Sleep(10000);

        return 0;
    }

    // <---------------------------------------------------------------------------------------------->
    void intro(){

    SetConsoleTextAttribute(h,6);
    cout<<"\n\t\t\t\t\t\t\t\t      ";
    string A = " GAME IS GOING TO RUN";

    while(A[i] != '\0'){
        cout<<A[i];
        Sleep(60);
        i++;
    }

    SetConsoleTextAttribute(h,5);
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t       ";
    
    for(int j = 0 ; j < 20 ; j++){
        cout<<"-";
        Sleep(10);
    }

    SetConsoleTextAttribute(h,5);
    cout<<endl;

    i = 5;      //Global variable

    while( i > 1){
        cout<<"\t\t\t\t\t\t\t\t\t       | "<<i<<" |"<<endl;
        Sleep(800);
        i--;
    }

    i=0;

    cout<<"\t\t\t\t\t\t\t\t\t       \\ 1 /"<<endl;
    Sleep(800);
    cout<<"\t\t\t\t\t\t\t\t\t        \\0/"<<endl;
    Sleep(800);

    cout<<"\t\t\t\t      ************************************************************************************"<<endl;
    Sleep(50);
    cout<<"\t\t\t\t      ";
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##          ## ######## ##           ######## ########## ####      #### ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *"<<endl;
    Sleep(50);   
    cout<<"\t\t\t\t      ";
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##   ####   ## ##       ##           ##       ##      ## ## ##    ## ## ##      "; 
    SetConsoleTextAttribute(h,5);
    cout<<" *"<<endl;
    Sleep(50);   
    cout<<"\t\t\t\t      ";
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"##  ##  ##  ## ######## ##           ##       ##      ## ##  ##  ##  ## ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    Sleep(50);   
    cout<<"\t\t\t\t      ";
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"## ##    ## ## ##       ##           ##       ##      ## ##   ####   ## ##      "; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    Sleep(50);   
    cout<<"\t\t\t\t      ";
    SetConsoleTextAttribute(h,5);
    cout<<"* ";
    SetConsoleTextAttribute(h,15); 
    cout<<"####      #### ######## ########     ######## ########## ##          ## ########"; 
    SetConsoleTextAttribute(h,5);
    cout<<" *";
    cout<<endl;
    SetConsoleTextAttribute(h,5);
    Sleep(50);
    cout<<"\t\t\t\t      *********************** TO THE";
    SetConsoleTextAttribute(h,6);
    cout<<" SNAKE,";
    SetConsoleTextAttribute(h,6);
    cout<<" WATER,";
    SetConsoleTextAttribute(h,6);
    cout<<" GUN";SetConsoleTextAttribute(h,5);
    cout<<" [GAME] ****************************"<<endl<<endl<<endl;
    }


    void interFace(){
    SetConsoleTextAttribute(h,4);
    string firstline = "maximize Terminal for better experience.";
    printstringfast(firstline);
    Sleep(1500);
    cout<<endl<<endl;
    SetConsoleTextAttribute(h,6);

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

    SetConsoleTextAttribute(h,6);
    printstringfast(userName);
    cout<<","<<endl<<endl;

    Sleep(500);
    string opponent = "your opponent is your PC -> ";
    printstring(opponent);
    SetConsoleTextAttribute(h,10);

    printstring(ComputerName);
    SetConsoleTextAttribute(h,6);
    cout<<endl<<endl;
    Sleep(500);

    SetConsoleTextAttribute(h,4);
    string aboutGame = "Before starting, I would like to show.";
    printstring(aboutGame);
    cout<<endl<<endl;
    Sleep(400);

    string rule = "<------- RULE OF THE GAME ------->";
    string rule1 = "\'SNAKE\' + \'WATER\' ---> SNAKE win ";
    string rule2 = "\'SNAKE\' +  \'GUN\'  ---> GUN win ";
    string rule3 = "\'WATER\' + \'SNAKE\' ---> SNAKE win ";
    string rule4 = "\'WATER\' +  \'GUN\'  ---> WATER win ";
    string rule5 = " \'GUN\'  + \'SNAKE\' ---> GUN win ";
    string rule6 = " \'GUN\'  + \'WATER\' ---> WATER win ";
    
    SetConsoleTextAttribute(h,6);
    printstringfast(rule);
    cout<<endl<<endl;
    Sleep(800);

    printstringfast(rule1);
    Sleep(800);
    cout<<endl;

    printstringfast(rule2);
    Sleep(800);
    cout<<endl;

    printstringfast(rule3);
    Sleep(800);
    cout<<endl;

    printstringfast(rule4);
    Sleep(800);
    cout<<endl;

    printstringfast(rule5);
    Sleep(800);
    cout<<endl;

    printstringfast(rule6);
    cout<<endl<<endl;
    system("pause");
    }


    int rungame(){
    srand(time(0));
    computer = rand()%3 + 49;
    // cout<<computer<<endl;

    SetConsoleTextAttribute(h,9);
    cout<<"\nPress:" ;
    SetConsoleTextAttribute(h,11);
    cout<<" [1]-> ";
    SetConsoleTextAttribute(h,6);
    cout<<"SANKE";
    SetConsoleTextAttribute(h,11);
    cout<<" [2]-> ";
    SetConsoleTextAttribute(h,6);
    cout<<"WATER";
    SetConsoleTextAttribute(h,11);
    cout<<" [3]-> ";
    SetConsoleTextAttribute(h,6);
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
        input++;
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
        input++;
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
        input++;
        return 2;
    }
    else{
        SetConsoleTextAttribute(h,4);
        cout<<"Invalid Input\n\n";
        SetConsoleTextAttribute(h,11);
        return 9;
    }
    }
        return 0;
    }
    void printstring(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            Sleep(40);
        }
    }
    void printstringfast(string printinloop){
        for(int i = 0 ; printinloop[i] != '\0' ; i++){
            cout<<printinloop[i];
            Sleep(5);
        }
    }

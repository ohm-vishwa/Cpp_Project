#include <bits/stdc++.h>
#include <windows.h>
#define frame_delay 60
#define num_iterations 10 

using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); 

string user_name;     
string computer_name; 

class Game_swg {
    private :
        int user;   
        int computer;        
        int score = 0;

    public :  
        int counter = 5; 

        friend class Game_guess;

        void welcome_animation();        
        void set_name();
        void rules();
        void greet();
        void run_game();                 
        void show_remaing_time();
        void get_Game_swg_input();
        void game_body(string, string, string, int); 
        void your_score();  
        void ask();
        void thanks();     
};   

class Game_guess : public Game_swg {
        private :
            int random_number = rand() % 100 + 1;
            int guess;
            int attempts = 0;
        
        public :
            int is_agree();
            void pc_name_call();
            void user_name_call();
            void run_guess_game();
};

void set_color(int);             
void loading_animation();        
void print_style_1(string);
void print_style_2(string);      
void underline();

int main(){
    Game_swg game1_obj;

    system("cls"); 
    Sleep(700);

    game1_obj.set_name();
    game1_obj.greet();
    game1_obj.rules();

    loading_animation();

    game1_obj.welcome_animation();
    Sleep(900);
    
    do{
        while(game1_obj.counter != 0){
            game1_obj.run_game(); 
        }
            game1_obj.your_score();

        if(game1_obj.counter == 0){
            game1_obj.ask();
        }
    }while(game1_obj.counter != 0);


    Game_guess game2_obj;

    if(game2_obj.is_agree()){
        game2_obj.run_guess_game();
    }
    else{
        game2_obj.thanks();
        return 0;
    }
    game2_obj.thanks();

    cin.ignore();
    return 1513;    
}


/* <-------------------------------------------------------------->*/
void Game_guess :: pc_name_call(){
    set_color(10);
    cout << endl;
    print_style_1(computer_name);
    print_style_1("/> ");
    set_color(14);
}

void Game_guess :: user_name_call(){
    set_color(11);
    cout << endl;
    print_style_1(user_name);
    print_style_1("/> ");
    set_color(14);
}

void Game_guess :: run_guess_game(){
    pc_name_call();
    set_color(14);
    print_style_1("I choose a number between (1-100)\n");
    pc_name_call();
    print_style_1("guess my number.\n");

    for(int i = 1 ; i ; i++) {
        if(i == 3){
            pc_name_call();
            print_style_1("[Hint] ===> ");
            set_color(160);
            print_style_1(" Use \"Binary Search\" Method ");
            set_color(7);
            cout <<  endl;
        }
        user_name_call();
        if(i != 1){
            print_style_1("===> ");
        }
        else{
            print_style_1("Enter your guess (1-100) ===> ");
        }
        set_color(9);

        cin  >>  guess;

        cin.clear();          // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        attempts++;

        if (guess < 1 || guess > 100) {
            pc_name_call();
            set_color(4);
            print_style_1("Please enter a number between 1 and 100.\n");      // when input is not in range or not in integer domain
            i--;
            continue;
        }

        if (guess < random_number) {
            pc_name_call();
            set_color(4);
            print_style_1("Too low! Try again with greater number ");
            set_color(10);
            cout<<(char)24;
            cout<<endl;
        } else if (guess > random_number) {
            pc_name_call();
            set_color(4);
            print_style_1("Too High! Try again with lower number ");
            set_color(10);
            cout<<(char)25;
            cout<<endl;
        } else {
            Sleep(300);
            pc_name_call();
            set_color(5);
            print_style_1("Congratulations! You guessed the number ");
            cout  <<   random_number  <<   " in "  <<   attempts  <<   " attempts."  <<  endl;
            break;
        }
    }
        for (char &c : user_name) {
            if (c == '_') {
                c = ' ';
            }
        }
}
    
int Game_guess :: is_agree(){
        // Iterate through the string and replace spaces with underscores
        for (char &c : computer_name) {
            if (c == ' ') {
                c = '_';
                }
        }
        pc_name_call();
        print_style_1("it`s ok ");
        set_color(10);
        print_style_1(user_name);
        cout <<  endl;
        
        // Iterate through the string and replace spaces with underscores
        for (char &c : user_name) {
            if (c == ' ') {
                c = '_';
                }
        }
    
        Sleep(700);

        pc_name_call();
        print_style_1("Before exit, I want to paly different another game with you.\n");
        pc_name_call();
        print_style_1("Are you want to paly with me?\n");
        pc_name_call();
        print_style_1("Enter 'y/n' for yes/no ===> ");
        set_color(9);
        string ask;
        cin >> ask;

        if(ask[0] == 'y' || ask[0] == 'Y'){
            return 1;
        }
        return 0;
}

void Game_swg :: set_name(){
    set_color(4);
    print_style_1("maximize Terminal for better experience.\n\n");
    Sleep(1000);
    set_color(14);
    print_style_1("Enter your nick name ===> ");
    set_color(11);
    getline(cin,user_name);
    set_color(14);
    print_style_1("Give name to your PC ===> ");
    set_color(11);
    getline(cin,computer_name); 
    cout <<  endl;
}

void Game_swg :: greet(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int T = ltm->tm_hour;
    set_color(10);
    if(T <= 11){
       print_style_1("Good Morning ");
    }
    else if(T >= 12 && T <= 14){
       print_style_1("Good Afternoon ");
    }
    else if(T >= 15){
       print_style_1("Good Evening ");
    }
    set_color(14);
    print_style_1(user_name);
    cout <<  ",\n\n";
    Sleep(500);
    print_style_1("your opponent is your PC ===> ");
    set_color(11);
    print_style_1(computer_name);
    cout <<  endl <<  endl;
    Sleep(500);
}

void Game_swg :: rules(){
    set_color(4);
    print_style_1("\n<{-----{RULES OF THE GAME}-----}>\n\n");
    Sleep(100);
    set_color(10);
    print_style_1("SNAKE * WATER ====> SNAKE win \n");
    print_style_1("SNAKE *  GUN  ====> GUN win \n");
    print_style_1("WATER * SNAKE ====> SNAKE win \n");
    print_style_1("WATER *  GUN  ====> WATER win \n");
    print_style_1(" GUN  * SNAKE ====> GUN win \n");
    print_style_1(" GUN  * WATER ====> WATER win \n\n");
    set_color(14);
    print_style_1("SNAKE * SNAKE ====> Match Drawn\n");
    print_style_1("WATER * WATER ====> Match Drawn\n");
    print_style_1(" GUN  *  GUN  ====> Match Drawn\n\n");
    set_color(7);
    system("pause");

}

void Game_swg :: welcome_animation(){
    set_color(5);
    print_style_2("\n\n\t\t\t********************************************************************************\n");
    print_style_2("\t\t\t* ");
    set_color(7); 
    print_style_2("##          ## ######## ##       ######## ########## ####      #### ########"); 
    set_color(5);
    print_style_2(" *\n");
    print_style_2("\t\t\t* ");
    set_color(7); 
    print_style_2("##   ####   ## ##       ##       ##       ##      ## ## ##    ## ## ##      "); 
    set_color(5);
    print_style_2(" *\n");
    print_style_2("\t\t\t* ");
    set_color(7); 
    print_style_2("##  ##  ##  ## ######## ##       ##       ##      ## ##  ##  ##  ## ########"); 
    set_color(5);
    print_style_2(" *\n");
    print_style_2("\t\t\t* ");
    set_color(7); 
    print_style_2("## ##    ## ## ##       ##       ##       ##      ## ##   ####   ## ##      "); 
    set_color(5);
    print_style_2(" *\n");
    print_style_2("\t\t\t* ");
    set_color(7); 
    print_style_2("####      #### ######## ######## ######## ########## ##          ## ########"); 
    set_color(5);
    print_style_2(" *\n");
    print_style_2("\t\t\t********************* TO THE");
    set_color(1);
    print_style_2(" SNAKE, WATER, GUN");
    set_color(5);
    print_style_2(" [GAME] **************************\n\n");
}

void Game_swg :: show_remaing_time(){
    set_color(8);
    if (counter == 5){
        print_style_1("You have ===> ");
    }
    else{
        print_style_1("You have remaining ===> ");
    }
    cout <<  counter;
    if(counter != 1){
        print_style_1(" turns");
    }
    else{
        print_style_1(" trun");
    }
}

void Game_swg :: get_Game_swg_input(){
    set_color(9);
    print_style_1("\nPress:");
    set_color(11);
    print_style_1(" [1]=> ");
    set_color(14);
    print_style_1("SANKE");
    set_color(11);
    print_style_1("  [2]=> ");
    set_color(14);
    print_style_1("WATER");
    set_color(11);
    print_style_1("  [3]=> ");
    set_color(14);
    print_style_1("GUN");
    set_color(9);
    print_style_1(" ===> ");
        
    cin  >>  user;
    cout <<  endl; 

    cin.clear();          // Clear error state
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    fflush(stdin);   

}

void Game_swg :: game_body(string A , string B, string C, int color){
    set_color(11);
    print_style_1(user_name);
    cout <<  " : "; 
    set_color(112); 
    print_style_1(A); 
    set_color(5); 
    cout <<  "  " <<  (char)6 <<  "  "; 
    set_color(11); 
    print_style_1(computer_name);
    cout <<  " : "; 
    set_color(112); 
    Sleep(1100);
    print_style_1(B); 
    set_color(5); 
    print_style_1(" ===}> "); 
    Sleep(200);   
    set_color(color);             
    if(A != B ){
    cout <<  " "; 
    print_style_1(C);
    print_style_1(" win "); 
        
    counter--;
    }
    else{
    print_style_1(" Match Drawn "); 
    } 
    set_color(7);
    Sleep(500);
    cout << endl;
    if(counter != 0){
        underline();
    }
    else{
        set_color(5);
        cout << endl;
        print_style_1("-------------------------------Game-Finished------------------------------");
        cout << endl;
    }
}

void Game_swg :: run_game(){
    computer = (rand())%3 + 1;

    show_remaing_time();
    get_Game_swg_input();

    set_color(11); 
    if(computer == 1 && user == 2){
        game_body(" WATER ", " SNAKE ", computer_name, 192);         // user lose
    }
    else if(computer == 2 && user == 3){
        game_body(" GUN ", " WATER ", computer_name,  192);           // user lose    
    }
    else if(computer == 3 && user == 1){
        game_body(" SNAKE ", " GUN ", computer_name, 192);            // user lose                 
    }
    else if(computer == 1 && user == 3){
        game_body(" GUN ", " SNAKE ", user_name, 160);              // user win      
        score++;
    }
    else if(computer == 2 && user == 1){
        game_body(" SNAKE ", " WATER ", user_name, 160);            // user win      
        score++;
    }
    else if(computer == 3 && user == 2){
        game_body(" WATER ", " GUN ", user_name, 160);              // user win          
        score++;
    }
    else if(computer == 1 &&  user == 1){
        game_body(" SNAKE ", " SNAKE ", " ", 224);             // match drawn
    }
    else if(computer == 2 && user == 2){
        game_body(" WATER ",  " WATER ", " ", 224);             // match drawn
    }
    else if(computer == 3 && user == 3){
        game_body(" GUN ", " GUN ", " ", 224);                  // match drawn
    }
    else{
        set_color(4);
        print_style_1("Invalid input");             // invalid input
        underline();
    }
    
}

void Game_swg :: thanks(){
    set_color(10);
    print_style_1("\n\n@ohm_vishwa/> ");
    set_color(14);
    print_style_1("Thanks ");
    set_color(12);
    cout <<  (char)3 <<  " ";      // print heart symboll
    set_color(10);
    print_style_1(user_name);
    set_color(14);
    print_style_1(" for playing.");
    set_color(7);  
}

void Game_swg :: your_score(){
    set_color(11);
    print_style_1("your score is ");
    cout << score;
    print_style_1(" out of 5");
    underline();
}

void Game_swg :: ask(){
    cout << endl;
    set_color(11);
    print_style_1("Are you want to paly again?\n");
    print_style_1("Enter 'y/n' for yes/no ===> ");
    
    string ask;
     
    set_color(1);
    getline(cin,ask);
    if(ask[0] == 'y' || ask[0] == 'Y'){
        counter = 5;
        score = 0;
    }
    cout << endl;
}

void print_style_1(string printinloop){
    for(int i = 0 ; printinloop[i] != '\0' ; i++){
        cout <<  printinloop[i];
        Sleep(12);
    }
}

void print_style_2(string printinloop){
    for(int i = 0 ; printinloop[i] != '\0' ; i++){
        cout <<  printinloop[i];
        if(i%22 == 0){
            Sleep(1);
        }
    }
}

void set_color(int color){
    SetConsoleTextAttribute(h,color);
}

void loading_animation(){
     char spinner[] = { '|', '/', '-', '\\' };

    int numFrames = sizeof(spinner) / sizeof(spinner[0]);

    for (int iter = 0; iter < num_iterations; ++iter) {
        for (int frame = 0; frame < numFrames; ++frame) {
            system("cls");  
        
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLoading";
            for (int i = 0 ; i < iter ; i++){
                cout << ".";
            }
            cout << spinner[frame] << flush;
        
            this_thread::sleep_for(chrono::milliseconds(frame_delay));
        }
    }
    system("cls"); 
    Sleep(1000);
}

void underline(){
    set_color(5);
    cout << endl;
    for (int i = 0 ; i <= 36 ; i++) {
        cout << "--" ;
        Sleep(1);
    }
    cout << endl; 
}

#include <iostream>
#include <string>

void level_1();

void level_2();

void pause() {
    std::cout << "\nPress Enter key to continue...";
    std::cin.ignore();
    std::cin.get();
    system("CLS");
}
using namespace std;

void clear_screen()
{
    // This function clears the console screen.
    system("CLS");
}

void print_menu()
{
    // This function prints the game menu.
    cout << "========================================\n";
    cout << "           THE HAUNTED MANSION           \n";
    cout << "========================================\n";
    cout << "                 MAIN MENU              \n";
    cout << "========================================\n";
    cout << "  1. Start Game                         \n";
    cout << "  2. Instructions                       \n";
    cout << "  3. Quit Game                          \n";
    cout << "========================================\n";
    cout << "Enter your choice (1-3): ";
}

void start_game()
{
    clear_screen(); // clear the console screen
    cout << "========================================\n";
    cout << "           THE HAUNTED MANSION           \n";
    cout << "========================================\n";
    cout << "You approach the haunted mansion, and the\n";
    cout << "creaking front door swings open with a loud\n";
    cout << "groan. You step inside, and the door slams\n";
    cout << "shut behind you.\n\n";
    cout << "You hear a voice whispering from the shadows:\n";
    cout << "'Welcome, traveler. If you wish to escape\n";
    cout << "this place alive, you must solve the mystery\n";
    cout << "of this mansion. Be warned, however, for many\n";
    cout << "have entered these walls, but few have left.'\n\n";
    cout << "You take a deep breath and steel yourself for\n";
    cout << "what lies ahead...\n\n";
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
    level_1();
}

void level_1() {
    clear_screen();
    cout << "LEVEL 1 - FOYER\n";
    cout << "You find yourself in the foyer of the mansion.\n";
    cout << "You see a door to your left and a door to your\n";
    cout << "right. Which way do you go?\n\n";
    cout << "1. Left door\n";
    cout << "2. Right door\n";
    cout << "Enter your choice (1 or 2): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            clear_screen();
            cout << "LEVEL 1 - LEFT DOOR\n";
            cout << "You open the left door and find yourself in a small room\n";
            cout << "with no other exits. The room seems empty and you see nothing\n";
            cout << "of interest. What do you do?\n\n";
            cout << "1. Go back to the foyer\n";
            cout << "2. Look for secret passages\n";
            cout << "Enter your choice (1 or 2): ";
            cin >> choice;

            if (choice == 1) {
                level_1();
            } else if (choice == 2) {
                cout << "\nYou spend hours looking for secret passages, but find nothing.\n";
                cout << "You give up and go back to the foyer.\n\n";
                pause();
                level_1();
            } else {
                clear_screen();
                cout << "Invalid choice. Please enter 1 or 2";
                level_1();
            }
            break;

        case 2:
            clear_screen();
            cout << "LEVEL 1 - RIGHT DOOR\n";
            cout << "You open the right door and find yourself in a large hall\n";
            cout << "with multiple doors leading to different rooms. You see a key\n";
            cout << "on a pedestal at the center of the room. What do you do?\n\n";
            cout << "1. Take the key and explore the other rooms\n";
            cout << "2. Leave the key and explore the other rooms\n";
            cout << "Enter your choice (1 or 2): ";

            cin >> choice;

            if (choice == 1) {
                clear_screen();
                cout << "You take the key and explore the other rooms. You find nothing of\n";
                cout << "interest, but manage to unlock a door that leads to a staircase.\n\n";
                pause();
                level_2();
            } else if (choice == 2) {
                clear_screen();
                cout << "You leave the key and explore the other rooms. You find nothing of\n";
                cout << "interest, but manage to find a door that leads to a staircase.\n\n";
                cout << "You don't have the key to unlock the door. You need to go back.\n\n";
                pause();
                level_1();
            } else {
                clear_screen();
                cout << "Invalid choice. Please enter 1 or 2";
                level_1();
            }
            break;

        default:
            clear_screen();
            cout << "Invalid choice. Please enter 1 or 2";
            level_1();
    }
}

void level_2() {
    clear_screen();
    cout << "LEVEL 2 - BASEMENT\n";
    cout << "You descend a spiral staircase into the basement of the mansion.\n";
    cout << "The room is dimly lit and you can barely make out your surroundings.\n";
    cout << "You see several doors leading to different rooms, each with a symbol above it.\n\n";
    cout << "Which door do you choose?\n\n";
    cout << "1. Door with a skull symbol\n";
    cout << "2. Door with a snake symbol\n";
    cout << "3. Door with a spider symbol\n";
    cout << "4. Door with a bat symbol\n";
    cout << "Enter your choice (1, 2, 3, or 4): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            clear_screen();
            cout << "LEVEL 2 - SKULL ROOM\n";
            cout << "You open the door and find yourself in a small room\n";
            cout << "with a table in the center. On the table is a skull with a riddle\n";
            cout << "carved into it:\n\n";
            cout << "What kind of ship has two mates but no captain?\n\n";
            cout << "1. Answer 'A container ship'\n";
            cout << "2. Answer 'A relationship'\n";
            cout << "3. Answer 'A cruise ship'\n";
            cout << "Enter your choice (1, 2, or 3): ";

            cin >> choice;

            if (choice == 2) {
                cout << "\nYou have solved the riddle and a hidden door opens,\n";
                cout << "revealing a staircase. You ascend the staircase and escape the mansion.\n\n";
                pause();
                clear_screen();
                cout << "Congratulations! You have escaped the mansion!";
                break;
            } else {
                cout << "\nYou have chosen the wrong answer and are trapped in the room.\n\n";
                pause();
                //level_2();
            }
            break;

        case 2:
            clear_screen();
            cout << "LEVEL 2 - SNAKE ROOM\n";
            cout << "You open the door and find yourself in a room filled with snakes.\n";
            cout << "In the center of the room is a box with a lock on it.\n\n";
            cout << "Which key do you use?\n\n";
            cout << "1. Key with a skull symbol\n";
            cout << "2. Key with a snake symbol\n";
            cout << "3. Key with a spider symbol\n";
            cout << "4. Key with a bat symbol\n";
            cout << "Enter your choice (1, 2, 3, or 4): ";

            cin >> choice;

            if (choice == 2) {
                cout << "\nThe lock clicks open and you find a map inside the box.\n";
                cout << "The map leads to a hidden exit. You follow the map and escape the mansion.\n\n";
                pause();
                clear_screen();
                cout << "\nCongratulations! You have escaped the mansion!";
                cout << "\n";
                break;
            } else {
                cout << "\nYou have chosen the wrong key and are bitten by the snakes.\n\n";
                pause();
                level_2();
            }
            break;

        case 3:
            clear_screen();
            cout << "LEVEL 2 - W.I.P.";
    }
}

int main() {
    bool game_running = true;

    while (game_running) {
        clear_screen(); // clear the console screen
        print_menu();   // print the game menu

        // get user input
        int choice;
        cin >> choice;

        // process user input
        switch (choice) {
            case 1:
                // start the game
                game_running = false;
                start_game();
                break;

            case 2:
                // display instructions
                clear_screen();
                cout << "INSTRUCTIONS\n\n";
                cout << "The Haunted Mansion is a text-based adventure game.\n";
                cout << "You will explore the mansion, solve puzzles, and\n";
                cout << "uncover the secrets that lie within.\n";
                cout << "\nPress Enter to continue...";
                cin.ignore();
                cin.get();
                break;

            case 3:
                // quit the game
                game_running = false;
                break;

            default:
                // invalid input
                clear_screen();
                cout << "Invalid choice. Please enter 1, 2 or 3";
        }
    }
}
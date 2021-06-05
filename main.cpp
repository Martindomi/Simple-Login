// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <filesystem>
#include "libs/commons.h"
#include "libs/register.h"
#include "libs/login.h"
#include "libs/password.h"



#define PATH "data"

using namespace std;

void menu();
void options(int);
void createDirectory();

#include <limits>

int main()
{
    createDirectory();
    menu();
}

void menu() {

    int option = 0;

    cout << "Welcome!!!"<< endl;
    cout << endl;
    while (option != 4) {
        cout << "Please chose an option: " << endl;
        cout << "\t1 - Register" << endl;
        cout << "\t2 - Log in" << endl;
        cout << "\t3 - Change password" << endl;
        cout << "\t4 - Leave" << endl;
        if (!(cin >> option)) {
            cin.clear();
            cin.ignore(INT_MAX,'\n') ;
        }


        cout << endl;
        
        options(option);
    
    }

    
}

void options(int option) {

    switch (option) {
    case 1:
        newRegist();
        break;
    case 2:
        newLogin();
        break;
    case 3:
        changePassword();
        return;
    case 4:
        cout << "Bye!!\n";
        return;
    default:
        cout << "Invalid option. Please try again: " << endl;

    }
}

void createDirectory(){
    if (!std::filesystem::exists(PATH)) {
        if (!(std::filesystem::create_directory(PATH))) {
            cout << "ERROR :: DIRECTORY WAS NOT CREATED";
            exit(10);
        }
    }
}
#include "register.h"

void newRegist() {
    //creates a new .txt file with user and password.
    string username, password, un, pw, filename;

    askNewUser(username);

    while (fileExists(username, filename)) {
        cout << "Username already in use please enter a new username" << endl;

        askNewUser(username);
    }

    askNewPassword(password);

    createRegisterFile(filename, password);

    cout << "The user " << username << " has been registered :) " << endl << endl;
}

void askNewUser(string& username) {
    cout << "Enter an username: ";
    cin >> username;
    cout << endl;
}



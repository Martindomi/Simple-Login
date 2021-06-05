
# include "commons.h"

bool fileExists(const string& username, string& filename) {

    filename = "data\\" + username + ".txt";

    ifstream file(filename);
    if (!file) {
        return false;
    }
    return true;
}

void askNewPassword(string& password) {
    string tempPassword;
    cout << "Enter your new password: ";
    cin >> tempPassword;
    cout << endl;

    while (!checkPassword(tempPassword)) {
        cout << "Password not secure enough, it must contain at least 8 characters, digit and a letter.\nPlease, enter a new password: ";
        cin >> tempPassword;
        cout << endl;

    }
    if (checkPassword(tempPassword)) {
        password = tempPassword;
    }

}

bool checkPassword(string pass) {
    bool hasDigit = false;
    bool hasLetter = false;
    int passLength = pass.length();

    if (passLength >= 8) {
        for (int i = 0; i < passLength; i++) {
            if (isdigit(pass.at(i))) hasDigit = true;
            if (isalpha(pass.at(i))) hasLetter = true;
            if (hasLetter && hasDigit)  return true;
        }
    }
    return false;
}

bool validLogin(string& username, string& filepath) {

	bool valid = true;
	cout << "Enter your username: ";
	cin >> username;

	if (!fileExists(username, filepath)) {
		cout << "Invalid username.\n";
		valid = false;
	}

	return valid;
}


void createRegisterFile(string& filePath, string& password) {
    
    if (!password.empty()) {
        ofstream newFile(filePath, ofstream::trunc);
        newFile << password;
        newFile.close();
    }
    else {
        cout << "No modifications executed\n";
    }

    
}


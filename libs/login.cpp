#include "login.h"

#define MAX_TRIES 3

void newLogin() {

	string username, password, filepath;
	int tries = MAX_TRIES;
	if (!validLogin(username, filepath)) return;

	while ( tries > 0 && !validPassword(password, filepath)) {
		tries-- ;
		cout << "Invalid password. You've got " << tries << " tries left.\n";
	}
	if (!tries) {
		cout << tries;
		return;
	}
	cout << "WELCOME :D\n";

}





bool validPassword(string& pass, string& path) {
	string filePass;
	bool valid= true;


	cout << "Enter your password: ";
	cin >> pass;
		

	ifstream File(path);

	getline(File, filePass);
	File.close();

	if (filePass != pass) valid = false;

	return valid;
}
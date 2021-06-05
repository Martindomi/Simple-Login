#include "password.h"

void changePassword() {

	string username, password, filepath;

	if (validLogin(username, filepath)) {
		askNewPassword(password);
		createRegisterFile(filepath, password);
	}

}
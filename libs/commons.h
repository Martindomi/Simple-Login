#pragma once

#ifndef COMMONS_H_
#define COMMONS_H_

	#include <iostream>
	#include <fstream>
	#include <string>

	using namespace std;

	bool fileExists(const string&, string&);

	bool checkPassword(string pass);

	void askNewPassword(string&);

	bool validLogin(string&, string&);

	void createRegisterFile(string&, string&);

#endif // COMMONS_H_
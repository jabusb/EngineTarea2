// Singleton.cpp: define el punto de entrada de la aplicación de consola.

#include "stdafx.h"
#include "Filesystem.h"

int main() {
	Filesystem *myFile = Filesystem::Instance(); // Initialization
	myFile->test();
	printf("\n%s\n", myFile->read("holis\n").c_str()); // Test function

	system("PAUSE");
	return 0;
}
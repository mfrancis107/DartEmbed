#include <iostream>
#include <dart_api.h>

int main(int argc, char *argv[])
{

	const char* dartVersion = Dart_VersionString();

	std::cout << "Dart Version  " << dartVersion;
	std::cin.ignore();
}

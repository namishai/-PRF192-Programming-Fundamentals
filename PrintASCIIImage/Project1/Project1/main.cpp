#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <Windows.h>
#include <conio.h>

bool NhapNgaySinhNhatNguoiYeu(std::string fileName)
{
	std::ifstream dobFile;

	dobFile.open(fileName.c_str());
	if (!dobFile.is_open())
	{
		std::cout << "Can't open '" << fileName << "'";
		return false;
	}

	std::stringstream dobFromFile;

	dobFromFile << dobFile.rdbuf();

	std::string correctDob;
	std::string inputDob;

	std::getline(dobFromFile, correctDob);
	std::cout << "Nhap ngay sinh nhat cua nguoi ban yeu: ";

	while(1)
	{
		std::getline(std::cin, inputDob);

		if (inputDob == correctDob)
			break;
		else
			std::cout << "Nhap sai ngay sinh nhat cua nguoi ban yeu roi nhap lai: ";
	}

	return true;
}

void HienThiFileAnhASCII(std::string imgFileName, std::string configFileName)
{
	std::ifstream imgFile;
	std::ifstream configFile;

	// Open file
	imgFile.open(imgFileName.c_str());
	if (!imgFile.is_open())
	{
		std::cout << "Can't open '" << imgFileName << "'";
		return;
	}
	
	configFile.open(configFileName.c_str());
	if (!configFile.is_open())
	{
		std::cout << "Can't open '" << configFileName << "'";
		return;
	}

	// Read config
	std::stringstream configSS;
	std::string temp;
	configSS << configFile.rdbuf();
	std::getline(configSS, temp);

	int delayDuration;
	configSS >> delayDuration;


	// Read image
	std::stringstream imgSS;
	imgSS << imgFile.rdbuf();

	// Visual 
	system("cls");

	std::string aLine;
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	Sleep(500);

	while (!imgSS.eof())
	{
		std::getline(imgSS, aLine);
		std::cout << aLine << std::endl;
		Sleep(delayDuration);
	}
}

int main()
{
	if (NhapNgaySinhNhatNguoiYeu("config.txt"))
	{
		HienThiFileAnhASCII("image.txt", "config.txt");
	}

	_getch();

	return 0;
}
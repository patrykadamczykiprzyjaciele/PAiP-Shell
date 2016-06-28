//MODULE 0.2
#pragma once
#include "includes.h"
namespace PAiP_Shell
{
	namespace Kernel
	{
		void prompt()
		{
			system("cd > temp");
			ifstream file("temp");
			string content;
			string directory;
			int count = 0;
			while (file >> content) {
				if (count == 0)
				{
					directory += content;
				}
				else
				{
					directory += " " + content;
				}
				count++;
			}
			file.close();
			system("del temp");
			system("echo|set /p=%Username%");
			cout << "@";
			system("echo|set /p=%ComputerName%");
			cout << "|" << directory << "$";
		}
		void loop()
		{
			string command;
			for (;;)
			{
				command = "";
				prompt();
				getline(cin, command);
				string command2 = "echo " + command + " > temp";
				system(command2.data());
				ifstream file("temp");
				string content;
				string directory[255];
				int count = 0;
				while (file >> content) {
					directory[count] = content;
					count++;
				}
				file.close();
				system("del temp");
				cout << directory[0] << endl << directory[1] << endl << directory[2] << endl << directory[3] << endl << directory[4] << endl << directory[5] << endl << directory[6] << endl << directory[7] << endl << directory[8] << endl << directory[9] << endl << directory[10] << endl;
			}
		}
	}
}
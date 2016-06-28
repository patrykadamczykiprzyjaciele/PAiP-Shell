//MODULE 0.1
//PREKONFIGURACJA
#pragma once
#include "includes.h"
namespace PAiP_Shell
{
	namespace Preconfigure
	{
		void start()
		{
			//Ustawienie Strony Kodowej na Windows-1250 (PL)
			system("chcp 1250");
			//Wypisanie Tekstu o Konfiguracji
			cout << "Konfiguracja Œrodowiska..." << endl;
			//Ustawienie Tytu³u
			system("title PAiP Shell");
			//Czyszczenie Ekranu
			system("cls");
		}
		void end()
		{
			//Wypisanie mi³ego po¿egnania
			cout << endl << "¯yczê ci mi³ego dnia!" << endl;
			//Oczekiwanie na u¿ytkownika
			system("pause");
			//Wy³¹czenie
			system("exit");
		}
	}
}
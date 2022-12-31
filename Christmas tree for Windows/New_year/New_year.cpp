#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

// Dissappear cursor
void ConsoleCursorVisible(bool show) // 0 1
{
  CONSOLE_CURSOR_INFO structCursorInfo;
  GetConsoleCursorInfo(hStdOut, &structCursorInfo);
  structCursorInfo.bVisible = show;
  SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

void star_big()
{
  cout << "\033[31m";
  cout << "                    .                        " << endl;
  cout << "                   ,O,                       " << endl;
  cout << "            'oooooOOOOOooooo'                " << endl;
  cout << "              `OOOOOOOOOOO`                  " << endl;
  cout << "                `OOOOOOO`                    " << endl;
  cout << "                OOOO'OOOO                    " << endl;
  cout << "               OOO'\033[92m***\033[31m'OOO                   " << endl;
  cout << "              O'\033[92m  *****  \033[31m'O                  " << endl;
  cout << "\033[92m";
}

void star_small()
{
  cout << "\033[31m" << endl;
  cout << "                    A                        " << endl;
  cout << "                ___/_\\___                   " << endl;
  cout << "                 ',. ..'                     " << endl;
  cout << "                 ',. ..'                     " << endl;
  cout << "                 /.'^'.\\                    " << endl;
  cout << "                /'\033[92m *** \033[31m'\\\033[92m                   " << endl;
  cout << "                  *****                      " << endl;
}

int main()
{
  ConsoleCursorVisible(0);

  while (true)
  {
    int rand_count = rand() % 2;
    switch (rand_count)
    {
      case 0:
        star_big();
        break;
      case 1:
        star_small();
        break;
    }

    cout << "                 *****~~                     " << endl;
    cout << "                  **~~~                      " << endl;
    cout << "                 *~~~***                     " << endl;
    cout << "                ~~~*\033[91m@\033[92m****                    " << endl;
    cout << "               ~~*******~~                   " << endl;
    cout << "              ********~~***                  " << endl;
    cout << "               *****~~****                   " << endl;
    cout << "              ****~~***\033[33m@\033[92m***                  " << endl;
    cout << "             ***~~**\033[91m@\033[92m*******                 " << endl;
    cout << "            *\033[91m@\033[92m*~~************                " << endl;
    cout << "           **~~***********\033[35m@\033[92m**                " << endl;
    cout << "          **~~*******\033[91m@\033[92m******\033[33m@\033[92m**              " << endl;
    cout << "            \033[91m@\033[92m********\033[91m@\033[92m*******                " << endl;
    cout << "           *******************               " << endl;
    cout << "          ~~***\033[33m@\033[92m***\033[91m@\033[92m***********              " << endl;
    cout << "         **~~*******************             " << endl;
    cout << "        ****~~**\033[91m@\033[92m**\033[35m@\033[92m*******\033[91m@\033[92m*****            " << endl;
    cout << "       ******~~*********\033[91m@\033[92m*********           " << endl;
    cout << "      ********~~*******************          " << endl;
    cout << "                  \033[93m|||||                      " << endl;
    cout << "                  \033[93m|||||\033[36m   _\033[35m8\033[36m_\033[35m8\033[36m_              " << endl;
    cout << "                  \033[93m|||||\033[36m  |  |  |\033[95m_\033[33m8\033[95m_          " << endl;
    cout << "                  \033[93m|||||\033[36m  |__|__|\033[95m___|         " << endl;
    cout << "                                             " << endl;

    // Remove bachground
    int color;
    do
    {
      color = (rand() % 77) + 30;
    } while ((color == 40) or (color == 41) or (color == 42) or (color == 43)
      or (color == 44) or (color == 45) or (color == 46) or (color == 47)
      or (color == 100) or (color == 101) or (color == 102) or (color == 103)
      or (color == 104) or (color == 105) or (color == 106) or (color == 107)
      or (color == 4) or (color == 5) or (color == 6) or (color == 7)
      or (color == 8) or (color == 28) or (color == 29) or (color == 52)
      or (color == 53) or (color == 54) or (color == 6) or (color == 7));

    cout << endl << endl << endl << "           \033[" << color << "mHAPPY NEW YEAR 2023 !!!" << endl << endl;
    cout << "\033[36m";
    cout << "\033[36m       _____         _ _____         _   " << endl;
    cout << "      |     |___ ___|_|   __|___ ___| |_ " << endl;
    cout << "      | | | | .'|   | |   __| .'|_ -|  _|" << endl;
    cout << "      |_|_|_|__,|_|_|_|__|  |__,|___|_|  " ;
                                   


    Sleep(150);

    //int key = _getch();
    //if (key == 27 or key == 13) return 0;
    if (GetAsyncKeyState(VK_TAB)) return 0;

    system("cls");
  }



	return 0;
}
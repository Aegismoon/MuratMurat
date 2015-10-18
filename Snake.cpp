////////////////////////////////////////////
//	Concole application C++		          //
//					                      //
//	    <OOP-geekbrains-Snake>            //
//					                      //
//	 Author Dmitry Murat		          //
///////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>

using namespace std;
typedef unsigned int UINT;

void gotoXY( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(
        GetStdHandle( STD_OUTPUT_HANDLE ),
        coord
    );
}

int randomX()
{
    srand(time(NULL));

    return rand()%10+1;

}

int randomY(int (*ptr)())
{
    return ptr();
}

int main( int argc, char* argv[])
{
    int x(0), y(0);
    

    while(1)
    {
        x = randomX();
        y = randomY(randomX);
        gotoXY(x,y);
        cout << symb;
		sleep(1);
        system("cls");
    }

    return 0;
}

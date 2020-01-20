#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int eso[100] = {0};
    int tavolsag[100] = {0};
    int kiirat[100][100] = {0};
    while (1 > 0)
    {
        for (int i = 0; i < 50; i++)
        {
            if (eso[i] == 0 && tavolsag[i] < 1)
            {
                eso[i] = rand() % 6 + 1;
                tavolsag[i] = rand() % 10 + 3 + eso[i];
                kiirat[0][i] = 1;
            }
            else
            {
                if (eso[i] > 0)
                {
                    kiirat[0][i] = 1;
                    eso[i]--;
                }
                else if (eso[i] == 0)
                {
                    kiirat[0][i] = 0;
                }
                tavolsag[i]--;
            }
        }
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                if (kiirat[i][j] == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "|";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < 100; i++)
        {
            for (int j = 48; j >= 0; j--)
            {
                kiirat[j + 1][i] = kiirat[j][i];
            }
        }
        Sleep(250);
    }

    cout << "Itt valami uj kod jon" << endl;
    /*
        .... es itt modositok valamit
    */

    cout << "Itt jon egy uj kod! blabla" << endl;

    return 0;
}

#include <iostream>
#include <time.h>

using namespace std;
char input;
int num, u = 0;
int c = 0;

void check();
void AI();

int main()
{
    char ans;
    do
    {
        system("cls");
        cout << "how many rounds do u want to play";
        int rounds;
        cin >> rounds;
        for (int i = 1; i <= rounds; i++)
        {
            cout << endl
                 << "ROUND" << i << endl
                 << "Your turn" << endl
                 << "rock(r) \t paper(p) \t scissor(s)" << endl;
            cin >> input;
            AI();
            check();
        }
        if (u > c)
        {
            cout << "!!!YOU WIN!!!";
        }
        else if (c > u)
        {
            cout << "YOU LOSE  T_T , better luck next time";
        }
        else
        {
            cout << "ITS A TIE, play another game to beat the computer";
        }
        cout << endl
             << endl
             << "do u want to play another game? Press Y/y for yes and N/n to exit";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
}
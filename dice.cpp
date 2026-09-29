#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Roll a 20-sided die
int rollD20()
{
    return rand() % 20 + 1;
}

// Roll a 4-sided die
int rollD4()
{
    return rand() % 4 + 1;
}

int main()
{
    srand(time(0));

    int count = 0;
    int d20;
    int d4;

    do
    {
        d20 = rollD20();
        d4 = rollD4();

        count++;

    } while (d20 != 1 || d4 != 1);

    cout << "Snake eyes!" << endl;
    cout << "Number of rolls: " << count << endl;

    return 0;
}

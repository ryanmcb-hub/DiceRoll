#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    for (int i = 1; i <= 1; i++)
    {
        int d1 = rand() % 6 + 1;
        int d2 = rand() % 6 + 1;
        int d3 = rand() % 6 + 1;
        int d4 = rand() % 6 + 1;
        int d5 = rand() % 6 + 1;

        // Print rolls
        cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;

        // Tally counts
        int tally[7] = {0}; // index 1–6 will be used
        tally[d1]++;
        tally[d2]++;
        tally[d3]++;
        tally[d4]++;
        tally[d5]++;

        // Print tally results
        for (int face = 1; face <= 6; face++)
        {
            if (tally[face] > 0)
            {
                cout << tally[face] << " - " << face << "'s" << endl;
            }
        }
    }

    cout << endl;
    return 0;
}

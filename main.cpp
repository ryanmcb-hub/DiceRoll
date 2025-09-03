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
        int d6 = rand() % 6 + 1;

        // Print rolls
        cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << d6 << endl;

        // Tally counts creates an array with 7 elements, all starting at 0 Every time a number appears increment spot in array
        int tally[7] = {0};
        tally[d1]++;
        tally[d2]++;
        tally[d3]++;
        tally[d4]++;
        tally[d5]++;
        tally[d6]++;

        // Print tally results face takes on values 1-6. if tally[face] > 0 means at least one die showed that number
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

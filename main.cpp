#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// int main()
// {
//     srand(time(0));
//
//     for (int i = 1; i <= 1; i++)
//     {
//         int d1 = rand() % 6 + 1;
//         int d2 = rand() % 6 + 1;
//         int d3 = rand() % 6 + 1;
//         int d4 = rand() % 6 + 1;
//         int d5 = rand() % 6 + 1;
//
//         // Print rolls
//         cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;
//
//         // Tally counts creates an array with 7 elements, all starting at 0 Every time a number appears increment spot in array
//         int tally[7] = {0};
//         tally[d1]++;
//         tally[d2]++;
//         tally[d3]++;
//         tally[d4]++;
//         tally[d5]++;
//
//         // Print tally results face takes on values 1-6. if tally[face] > 0 means at least one die showed that number
//         for (int face = 1; face <= 6; face++)
//         {
//             if (tally[face] > 0)
//             {
//                 cout << tally[face] << " - " << face << "'s" << endl;
//             }
//         }
//     }
//
//     cout << endl;
//     return 0;
// }

int main()
{
    srand(time(0)); //reeds random number

    const int numRolls = 6;     // constant for number of dice rolls <Change this for more rolls
    int rolls[numRolls];       // array store 6 dice rolls
    int tally[7] = {0};        // tally array (0 unused, 1-6 used) counts how many 1s, 2s, 3,s ect rolled slot 0 stay used

    // Roll dice and tally
    for (int i = 0; i < numRolls; i++) { //for i less than number of rolls which is 6
        rolls[i] = rand() % 6 + 1; //gives 1 to 6 store in rolls[i]
        tally[rolls[i]]++;         //increment count face in tally.
    }

    // Print rolls
    for (int i = 0; i < numRolls; i++) {
        cout << rolls[i] << " ";
    }
    cout << endl;

    // Print tally
    for (int face = 1; face <= 6; face++) { //walks through faces 1 to 6
        if (tally[face] > 0) {              //only prints faces that appear at least once
            cout << tally[face] << " - " << face << "'s" << endl;
        }
    }

    return 0;
}

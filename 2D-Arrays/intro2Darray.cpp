#include <iostream>;
using namespace std;
int main()
{

    // Creating 2D Arrays

    int arr[3][4];

    // taking input->row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*
        // taking input-column wise
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[j][i];
            }
        }
    */

    // taking element deafult will row wise
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // giving input in different rows
    // int arr[3][4] = {{1, 2, 3, 4} /*Row1*/, {2, 3, 4, 5} /*Row2*/, {5, 6, 7, 8} /*Row3*/};

    // printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

// Global variable
int score = 90;

void a(int &i) // using reference variable
{
    cout << i << " " << score /*printing score using global variable*/ << endl;
    char ch = 'a'; // local variable for this function
}

int main()
{

    int k = 3; // local variable for main function
    a(k);
    cout << score << endl;
}
#include <iostream>
using namespace std;
char maxmOccuernce(string s)
{
    int arr[26] = {0}; // making a array of 16 length and mapping form a to z.
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a'; // finding number mapped to charcter
        arr[number]++;     // increasing that mapped charcter/cputing the no. of time occuring
    }

    // find maximum occurance character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;       // storing the index where maximum occurence
            maxi = arr[i]; // max ko update karna jitna time jo character mila hai aur agr us se jyada koi mil jaye to phir se update kr dena hai
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main()
{
    string s;
    cout << "Enter the input" << endl;
    cin >> s;
    cout << maxmOccuernce(s) << endl;
}
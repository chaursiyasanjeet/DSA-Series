#include <iostream>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

bool checkPermutation(string &s1, string &s2)
{
    // sub-string charcter count
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // trverse s2 string in window size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // running first window
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
    {
        return 1;
    }

    // age window process karo
    while (i < s2.length())
    {
        // ab naya character utha rhe hai
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // pahle wala ko -- kar do example sanjeet me se sa utha phir san ho jayega to sa ko 0 karna padeag to an comare hoga
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return 1;
    }
    return 0;
}

int main()
{
    string s = "nj";
    int length = s.length();
    cout << length << endl;
    string s2 = "sanjeet";
    cout << checkPermutation(s, s2) << endl;
}
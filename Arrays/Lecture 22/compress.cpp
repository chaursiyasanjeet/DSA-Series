#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {

        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        // yaha tab rookega
        // ya toh pura vector ghum chuka hoga
        // ya to koi new character mil gaya hoga

        // old char store karlo
        chars[ansIndex++] = chars[i];

        int count = j - i;
        if (count > 1)
        {
            // converting counting into single digit and saving in answer.
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
}
int main()
{
    vector<char> ch;
    ch = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'a', 'c', 'c', 'd', 'd'};
    compress(ch);
    for (auto i : ch)
    {
        cout << i << " ";
    }
    cout << endl;
}

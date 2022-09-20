#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1]) // agr rotated hoga to count badh jayega
            count++;
    }
    if (nums[nums.size() - 1] > nums[0]) // agr sorted hoga to bhi count bdh jaeyga
        count++;

    return count <= 1; // agr same element hoga to us case me count 0 hoga aur shi bhi hoga
}
int main()
{
    vector<int> num;
    num = {5, 7, 1, 2, 3, 4};
    cout << check(num) << endl;
}
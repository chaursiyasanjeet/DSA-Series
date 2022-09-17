#include <iostream>
using namespace std;
bool isPossible(int arr[], int size, int student, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid) // jab tk mid se chhota hai tb tk sum krte rhna hai
        {
            pageSum += arr[i];
        }
        // jab mid se sum bada aye tab ye loop se bahar nikl jana hai

        else
        {
            studentCount++; // Ab student ko count ko badha dena hai aur jaha se upr wala loop break hua us element ko store kra lena hai pageSum me  store kr lena hai aur phir se upr wale loop me jake sum krke check karna hai
            // aur agr mid se jyada sum aa jaye to phir se wahi krna hai aur agr student count jyada ho jaye aur sab element distribute nhi ho paye to flase return krn dena hai
            if (studentCount > student || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocationBooks(int arr[], int size, int student)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // pura element ka sum kra lena hai
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2; // pura element ka sum aur start ka mid nikal lena hai
    while (start <= end)                 // jab tak start se end km hai tb tk loop chalana hai
    {
        if (isPossible(arr, size, student, mid)) // agr soln possible(line 3 se line 27 tk) hai to ans ko mid me store kra lena hai aur end ko mid se peeche kr dena hai aur phir se loop  start krna hai
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1; // aur agr possible sln nahi hai to start ko mid ke age kr dena hai kyuki agr peeche wale sum se sol nhi aa rha hai to aur age ka element include krke sum aa skta hai
        }
        mid = start + (end - start) / 2; // update mid
    }
    return ans; // phir sab ho jaye to ans return kr dena hai
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int student;
    cout << "Enter the no. of student " << endl;
    cin >> student;
    cout << allocationBooks(arr, 4, student) << endl;
}
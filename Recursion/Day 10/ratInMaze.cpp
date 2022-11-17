#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> maze)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<vector<int>> maze, int x, int y, int n, string path, vector<vector<int>> visited, vector<string> &ans)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // It can go D,L,R,U

    // Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, maze))
    {
        path.push_back('D');
        solve(maze, newx, newy, n, path, visited, ans);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, maze))
    {
        path.push_back('L');
        solve(maze, newx, newy, n, path, visited, ans);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, maze))
    {
        path.push_back('R');
        solve(maze, newx, newy, n, path, visited, ans);
        path.pop_back();
    }

    /// up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, maze))
    {
        path.push_back('U');
        solve(maze, newx, newy, n, path, visited, ans);
        path.pop_back();
    }

    visited[x][y] = 0;
}
int main()
{
    vector<vector<int>> maze;
    maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = 4;

    vector<string> ans;
    int srcx = 0;
    int srcy = 0;
    string path = "";
    // visited vector
    vector<vector<int>> visited = maze;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    solve(maze, srcx, srcy, n, path, visited, ans);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
/*
Rat in a maze: a 2D maze is given where R is the position of a rat, C is the position of a piece of cheese, # is a wall, and .
is an empty cell.
What is the different paths by which the rat can get to the piece of cheese if it can moves down (D) and right (R) on the empty cells.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 10;

int n, m;
char grid[N][N];
string path;

// Foreach valid option
//  Do
//  Recurse
//  Undo
void solve(int r, int c) {
    if (r == n - 1 && c == m - 1) { // Base Case => Found Cheese
        printf("%s\n", path.c_str());
        return;
    }
    // Option 1 = Right
    if (c + 1 < m && grid[r][c + 1] != '#') {   // Valid
        path.push_back('R');    // Do
        solve(r, c + 1);          // Recurse
        path.pop_back();        // Undo
    }
    // Option 2 = Down
    if (r + 1 < n && grid[r + 1][c] != '#') {   // Valid
        path.push_back('D');    // Do
        solve(r + 1, c);          // Recurse
        path.pop_back();        // Undo
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }
    solve(0, 0);
    return 0;
}



/*
input: 

5 4
R...
.#..
....
..#.
#..c
*/

/*
output: 

RRRDDDD
RRDRDDD
RRDDRDD
DDRRRDD
DDRDDRR
DDDRDRR
*/
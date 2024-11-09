#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> knights;
    int x, y;
    while (cin >> x >> y) {
        knights.push_back({x - 1, y - 1}); // Convert to 0-based index
    }

    vector<vector<bool>> board(n, vector<bool>(n, true));

    // Possible moves of a knight
    vector<pair<int, int>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    // Mark attacked positions
    for (auto knight : knights) {
        int i = knight.first;
        int j = knight.second;
        board[i][j] = false; // The knight's position itself is unsafe
        for (auto move : moves) {
            int ni = i + move.first;
            int nj = j + move.second;
            if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                board[ni][nj] = false;
            }
        }
    }

    // Debug: Print the board state
    cout << "Board state after marking unsafe positions:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (board[i][j] ? '.' : 'X') << ' ';
        }
        cout << endl;
    }

    // Count safe positions
    int safeCount = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j]) {
                ++safeCount;
            }
        }
    }

    cout << "Number of safe positions: " << safeCount << endl;
    return 0;
}
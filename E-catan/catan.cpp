#include <iostream>
using namespace std;

int match(string &boardgames, string &favorite) {
    for (auto i = 0; i < boardgames.size(); ++i) {
        bool find = true;
        for (int j = 0; j < favorite.size(); ++j) {
            if (boardgames[i] != favorite[j]) f = false; 
        }
        if (f) return i;
    }
    return -1;
}

int main() {
    string boardgames;
    getline(cin, boardgames);
    cout << match(boardgames, "catan") << endl;
    return 0;
}

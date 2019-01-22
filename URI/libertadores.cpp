#include <iostream>

using namespace std;

int main() {

    int matchups, i = 0, time1, time2, jogo1, jogo2, jogo3, jogo4;
    cin >> matchups;
    while (i < matchups) {
        cin >> jogo1;
        cin.ignore(256, ' ');
        cin.ignore(256, ' ');
        cin >> jogo2;
        cin >> jogo3;
        cin.ignore(256, ' ');
        cin.ignore(256, ' ');
        cin >> jogo4;

        time1 = jogo1 + jogo4;
        time2 = jogo2 + jogo3;
        if (time1 > time2) {
            std::cout << "Time 1" << '\n';
        }
        else if (time1 < time2) {
            std::cout << "Time 2" << '\n';
        }
        else if (time1 == time2) {
            if (jogo2 > jogo4) {
                std::cout << "Time 2" << '\n';
            }
            else if (jogo2 < jogo4) {
                std::cout << "Time 1" << '\n';
            }
            else {
                std::cout << "Penaltis" << '\n';
            }
        }
        i++;
    }
    return 0;
}
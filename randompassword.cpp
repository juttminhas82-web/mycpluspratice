#include <iostream>
#include <vector>
using namespace std;

int main() {
    int secret = rand() % 10 + 1;
int guess;

cin >> guess;

cout << (guess == secret ? "You Win!" : "Try Again!");
    return 0;
}
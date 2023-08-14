#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void delay(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

int main() {
    while (true) {
        cout << "Red light (STOP)\n";
        delay(5);  // Red light for 5 seconds

        cout << "Green light (GO)\n";
        delay(5);  // Green light for 5 seconds

        cout << "Yellow light (CAUTION)\n";
        delay(2);  // Yellow light for 2 seconds
    }

    return 0;
}

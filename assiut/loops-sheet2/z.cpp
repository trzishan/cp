#include <iostream>

using namespace std;

int main() {
    int K, S;
    cin >> K >> S;

    int count = 0;

    // Iterate through all possible values of X and Y
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            // Calculate what Z must be to satisfy X + Y + Z = S
            int z = S - x - y;

            // Check if this Z is within the valid range [0, K]
            if (z >= 0 && z <= K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

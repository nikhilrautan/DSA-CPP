#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi
void tohcal(int N, int source, int helper, int des)
{
    // Base case: if only one disk, move it directly
    if (N == 1)
    {
        cout << "Move disk " << N
             << " from rod " << source
             << " to rod " << des << endl;
        return;
    }

    // Step 1: Move top N-1 disks from source to helper
    tohcal(N - 1, source, des, helper);

    // Step 2: Move largest disk to destination
    cout << "Move disk " << N
         << " from rod " << source
         << " to rod " << des << endl;

    // Step 3: Move N-1 disks from helper to destination
    tohcal(N - 1, helper, source, des);
}

int main()
{
    int N = 3;

    tohcal(N, 1, 2, 3);

    return 0;
}

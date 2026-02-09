#include <iostream>
#include <vector>
using namespace std;

// Simulation approach
int winner(vector<bool> &person, int n, int index,
           int person_left, int k)
{
    // Base case: only one person left
    if (person_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (!person[i])   // person[i] == 0 means alive
                return i;
        }
    }

    // Find kth alive person
    int kill = (k - 1) % person_left;

    while (kill--)
    {
        index = (index + 1) % n;

        // Skip eliminated persons
        while (person[index])
            index = (index + 1) % n;
    }

    // Eliminate that person
    person[index] = true;

    // Move to next alive person
    while (person[index])
        index = (index + 1) % n;

    return winner(person, n, index, person_left - 1, k);
}

// Mathematical recursive solution
int winner(int n, int k)
{
    // Base case
    if (n == 1)
        return 0;

    // Recursive relation
    return (winner(n - 1, k) + k) % n;
}

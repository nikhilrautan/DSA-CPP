#include <iostream>
#include <vector>
using namespace std;

// Q1. Trapping Rain Water.
int trap(vector<int> &height)
{
    int n = height.size();
    int leftmax = 0, rightmax = 0, maxheight = height[0], index = 0, water = 0;

    // Max height of building
    for (int i = 1; i < n; i++)
    {
        if (maxheight < height[i])
        {
            maxheight = height[i];
            index = i;
        }
    }

    // Left Part
    for (int i = 0; i < index; i++)
    {
        if (leftmax > height[i])
        {
            water += leftmax - height[i];
        }
        else
        {
            leftmax = height[i];
        }
    }

    // Right Part
    for (int i = n - 1; i > index; i--)
    {
        if (rightmax > height[i])
        {
            water += rightmax - height[i];
        }
        else
        {
            rightmax = height[i];
        }
    }

    return water;
}

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << "Trapped Rain Water = " << trap(height) << endl;

    return 0;
}

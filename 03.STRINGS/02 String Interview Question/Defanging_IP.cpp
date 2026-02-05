#include <iostream>
#include <vector>
using namespace std;

// Q1. Defanging an IP Address
string defangIPaddr(string address)
{
    string ans;
    int index = 0;

    while (index < address.size())
    {
        if (address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];

        index++;
    }
    return ans;
}

int main()
{
    string address;
    cout << "Enter IP Address: ";
    cin >> address;

    string result = defangIPaddr(address);

    cout << "Defanged IP Address: " << result << endl;

    return 0;
}

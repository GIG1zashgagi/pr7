#include <iostream>
#include <string>

using namespace std;
void PrintFibonacci(int n)
{
    int prev = 0;
    int current = 1;

    for (int i = 0; i < n; i++)
    {
        cout << prev << " ";

        int next = prev + current;
        prev = current;
        current = next;
    }
}

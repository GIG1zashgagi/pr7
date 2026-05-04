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

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Программа для вычисления чисел Фибоначчи" << endl;
    cout << "Введите количество чисел для вывода: ";

    string input;
    cin >> input;

    int count;

    try
    {
        count = stoi(input);
    }
    catch (...)
    {
        cout << "Ошибка: введите целое число!" << endl;
        system("pause");
        return 1;
    }
}
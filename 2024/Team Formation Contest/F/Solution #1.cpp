/*
 * CONTEST: TEAM FORMATION CONTEST
 * PROBLEM: F - ARRAY++
 * SOLVER: KAREEMGH
 */

#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int cap;
    cin >> cap;

    for (int i = 0; i < cap; i++)
    {
        cin >> arr[i];
    }

    arr[cap - 1] += 1;

    for (int i = 0; i < cap; i++)
    {
        cout << arr[i] << " ";
    }
}


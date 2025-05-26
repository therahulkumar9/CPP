#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int A[] = {1, 2, 3, 14, 25, 6, 7, 8, 9, 10};
    int key;
    cout << "Enter an Element to be Searched: ";
    cin >> key;
    int result = Search(A, 10, key);
    cout << "Element found at index: " << result;
    return 0;
}
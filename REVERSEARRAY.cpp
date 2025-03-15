#include <iostream>
using namespace std;
class ArrayReverser
{
public:
    void reverse(int arr[], int size)
    {
        for (int i = 0; i < size / 2; i++)
        {
            swap(arr[i], arr[size - i - 1]);
        }
    }
};

int main()
{
    const int MAX_SIZE = 100;
    int size = 0;
    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> size;
    if (size > MAX_SIZE)
    {
        cout << "Size exceeds maximum allowed size. Exiting.";
        return 1;
    }
    int arr[MAX_SIZE];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    ArrayReverser ar;
    ar.reverse(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
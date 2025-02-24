#include <iostream>
using namespace std;

void bubblesort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int Array[] = {2, 5, 1, 9, 10, 3, 4, 0, 6, 8, 7};
    int size = sizeof(Array) / sizeof(Array[0]);

    cout << "Unsorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;

    bubblesort(Array, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
    return 0;
}
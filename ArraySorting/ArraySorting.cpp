#include <iostream>

int main()
{
    int arr[10] = { 23, 34, 2, 5, 66, 3, 6, 111, 3, 67 };

    for (int index = 0; index < 10; index++)
    {
        int biggestNumber = arr[index];
        int biggestNumberIndex = index;

        for (int indexX = index + 1; indexX < 10; indexX++)
        {
            if (arr[indexX] >= biggestNumber)
            {
                biggestNumber = arr[indexX];
                biggestNumberIndex = indexX;
            }
        }

        arr[biggestNumberIndex] = arr[index];
        arr[index] = biggestNumber;
    }

    for (int index = 0; index < 10; index++)
    {
        std::cout << arr[index] << ' ';
    }

    std::cout << std::endl;

    return 0;
}
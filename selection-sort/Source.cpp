#include <vector>
#include <iostream>

using namespace std;

vector<int> selectionSort(vector<int> array);

int main()
{

    vector<int> result = selectionSort({ 8, 5, 2, 9, 5, 6, 3 });

    for (int number : result)
    {
        cout << number << " ";
    }
    

    return 0;
}

vector<int> selectionSort(vector<int> array) {
    // Write your code here.
    if (array.empty())
        return{};

    int startidx = 0;
    while (startidx < array.size() - 1)
    {
        int smallestIdx = startidx;

        for (int i = startidx + 1; i < array.size(); i++)
        {
            if (array[smallestIdx] > array[i])
                smallestIdx = i;
        }
        swap(array[startidx], array[smallestIdx]);
        ++startidx;
    }


    return array;
}

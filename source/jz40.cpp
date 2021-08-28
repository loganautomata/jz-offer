#include "jz40.h"

using namespace std;

void Jz40::QuickSort(vector<int> &arr, int left, int right, int k)
{
    if (left >= right)
        return;

    int new_right = left;
    int new_left = right;

    // 快速排序
    while (new_right < new_left)
    {
        while (new_right < new_left && arr[new_left] >= arr[left])
        {
            new_left--;
        }
        while (new_right < new_left && arr[new_right] <= arr[left])
        {
            new_right++;
        }
        swap(arr[new_right], arr[new_left]);
    }
    swap(arr[new_left], arr[left]);

    // 根据中间数的位置来确定第k个数在左侧还是右侧
    if (new_left > k)
        QuickSort(arr, left, new_right - 1, k);
    else if (new_right < k)
        QuickSort(arr, new_left + 1, right, k);
    else
        return;
}

vector<int> Jz40::getLeastNumbers(vector<int> &arr, int k)
{
    QuickSort(arr, 0, arr.size() - 1, k);
    vector<int> res(arr.begin(), arr.begin() + k);

    return res;
}

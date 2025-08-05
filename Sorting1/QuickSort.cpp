#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    // for increasing
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }
    // for decreasing
    while (arr[j] > pivot && j >= low)
    {
      j--;
    }
    // agar j bada hojaye tab means crossed each other tab swap krna hoga
    if (i < j)
    {

      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp1 = arr[low];
  arr[low] = arr[j];
  arr[j] = temp1;
  return j;
}

void qs(vector<int> &arr, int low, int high)
{
  // Subarray has atleast 2 elements->needs sorting
  if (low < high)
  {
    int partitionIndex = partition(arr, low, high);
    qs(arr, low, partitionIndex - 1);  // Left subarray
    qs(arr, partitionIndex + 1, high); // Right subarray
  }
}
vector<int> quickSort(vector<int> arr)
{
  qs(arr, 0, arr.size() - 1);
  return arr;
}
int main()
{
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  int n = arr.size();
  cout << "Before Using quick Sort:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  arr = quickSort(arr);
  cout << "After using quick sort:" << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int MinIndex = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (arr[j] < arr[MinIndex])
      {
        MinIndex = j;
      }
    }
    int temp = arr[MinIndex];
    arr[MinIndex] = arr[i];
    arr[i] = temp;
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
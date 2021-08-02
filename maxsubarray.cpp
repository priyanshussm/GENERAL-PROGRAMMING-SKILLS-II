#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = a[0];
    int current_max = INT_MIN;

    for (int i = 1; i < size; i++)
    {
        current_max = max(a[i], current_max + a[i]);
        max_so_far = max(max_so_far, current_max);
    }
    return max_so_far;
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    int max_sum = maxSubArraySum(a, n);

    
    cout << "Maximum SubArray sum is " << max_sum;
    return 0;
}

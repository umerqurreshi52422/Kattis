#include<iostream>
using namespace std;

//https: /open.kattis.com/problems/ratingproblems

float ArraySum(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum/n;
}

void RatingProblem(int n,int k,int arr[], float* min,float *max)
{
    int* minarr = arr;
    int* maxarr = arr;

    for (int i = k; i < n; i++)
    {
        minarr[i] = -3;
    }
    *min = ArraySum(arr, n);

    for (int i = k; i < n; i++)
    {
        maxarr[i] = 3;
    }
    *max = ArraySum(arr, n);

}


int main()
{
    int n, k, arr[11] = { -1 };
    float min, max;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    RatingProblem(n, k, arr,&min,&max);

    cout << min << " " << max << endl;



    return 0;
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumAbsoluteDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int minimumAbsoluteDifference(vector<int> arr)
{
    std::sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0]; 

    for (size_t i = 1; i < arr.size()-1; ++i)
    { 
        int differ = arr[i+1] - arr[i];
        if (differ < min)
        {
            min = differ; 
        }
    }

    return min;
}


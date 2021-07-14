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


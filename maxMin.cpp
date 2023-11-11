int maxMin(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
    int max=arr[k-1], min=arr[0], min_diff=max-min;
    for(int i=k; i<arr.size();i++)
    {
        max = arr[i];
        min = arr[i -(k-1)];
        if((max-min)<min_diff)
            min_diff = max-min;
    }
    return min_diff;
}

int pairs(int k, vector<int> arr) {
    int count = 0;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int diff = arr[j] - arr[i];
            if (diff == k)
                count++;
            else if (diff > k)
                break;
        }
    }
    return count;
}

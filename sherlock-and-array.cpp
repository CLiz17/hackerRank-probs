string balancedSums(vector<int> arr) {
    int len = arr.size();
    int left = 0;
    int right = 0;
    
    for (int i = 1; i < len; i++)
        right += arr[i];
    
    for (int i = 0; i < len; i++)
    {
        if (left == right)
            return "YES";

        if (i < len - 1)
        {
            left += arr[i];
            right -= arr[i + 1];
        }
    }
    return "NO";
}

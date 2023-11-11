int lonelyinteger(vector<int> a) {
    int len = a.size();
    int lone =0;
    sort(a.begin(),a.end());
    
    for (int i = 0; i < len-1; i += 2) {
        if (a[i] != a[i + 1])
        {
            lone = a[i];
            break;
        }
    }
    if (lone == 0 || a[len - 1] != a[len - 2]) {
        lone = a[len - 1];
    }

    return lone;
} 

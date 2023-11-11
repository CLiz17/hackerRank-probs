string hackerrankInString(string s) {
    int len = s.length();
    string h = "hackerrank";
    int index=0;
    for(int i=0;i<len;i++)
    {
        if(h[index] == s[i])
            index++;
    }
    if(index == 10)
        return "YES";
    else
        return "NO";
}

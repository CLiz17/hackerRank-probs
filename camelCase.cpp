int camelcase(string s) {
    int len = s.length();
    int count=1;
    for(int i=1;i<len;i++)
    {
        if(isupper(s[i]))
            count++;
    }
    return count;
}

int marsExploration(string s) {
    int len = s.length();
    int no_of_sos = len / 3;
    int count = 0;
    for (int i = 0; i < no_of_sos; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int index = i * 3 + j;
            if (j % 2 == 0)
            {
                if (s[index] != 'S')
                    count++;
            }
            else
            {
                if (s[index] != 'O')
                    count++;
            }
        }
    }
    return count;
}

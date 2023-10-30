string pangrams(string s)
{
    vector<bool> alphabet(26, false);
    for (char c : s) {
        if (isalpha(c))
        {
            int index = tolower(c) - 'a'; 
            alphabet[index] = true;
        }
    }

    for (bool letterPresent : alphabet) {
        if (!letterPresent) {
            return "not pangram";
        }
    }

    return "pangram";
}

// Calculate Time And Space Complexity

bool isPalindrome(string str, int start, int end)
{
    if (start >= end)
        return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1); // Each recursive call does constant work (comparison + one recursive call)
}

// TC :- O(n) //constant work is done i.e
// SC :- O(n) coz at most n function call i.e n size stack
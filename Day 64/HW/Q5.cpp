// Calculate Time And Space Complexity

bool isEven(int n)
{
    if (n == 0)
        return true;
    return !isEven(n - 1);
}

// TC :- O(n) //constant work is done i.e
// SC :- O(n) coz at most n function call i.e n size stack
// Calculate Time And Space Complexity

int fact(int n)
{
    if (n <= 1)
        return 1; // Assume this step take O(1);

    return n * fact(n - 1); // Recursive step
}

// TC :- O(n)
// SC :- O(1)
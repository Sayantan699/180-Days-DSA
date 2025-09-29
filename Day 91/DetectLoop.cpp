/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution
{
public:
    bool detectLoop(Node *head)
    {

        // code here
        if (head == NULL)
            return 0;
        Node *curr = head;
        vector<Node *> visited;
        while (curr)
        {
            if (check(visited, curr))
            {
                return 1;
            }
            visited.push_back(curr);
            curr = curr->next;
        }
        return 0;
    }

    bool check(vector<Node *> &visited, Node *curr)
    {
        for (int i = 0; i < visited.size(); i++)
        {
            if (visited[i] == curr)
                return 1;
        }

        return 0;
    }
};
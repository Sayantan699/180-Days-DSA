class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        
        int n = q.size();
        int r = k;
        stack<int> st;
        while(r--){
            int x = q.front();
            st.push(x);
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        int t= n-k;
        while(t--){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        
        return q;
        
    }
};
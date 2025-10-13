class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            st.push(i);
        }
        
        while(st.size() > 1){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if (mat[first][second] == 1) //first knows second so first cant be celeb
                st.push(second);
            else
                st.push(first);
        }
        
        if(st.empty())
            return -1;
        int num = st.top();
        st.pop();
        int row=0,col=0;
        for(int i=0;i<n;i++){
            row += mat[num][i];
            col += mat[i][num];
        }
        
        return (row == 0 && col == n - 1) ? num : -1;
        
        
    }
};
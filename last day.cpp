class Solution {
public:

bool bfs(vector<vector<int>> &c , int i , int j )
{
    if( i<0 || i>=c.size() || j<0 || j>=c[0].size() || c[i][j]==1) return false;
    if( i == c.size()-1)  
        return true; 
    c[i][j]=1; 
    return bfs(c,i-1,j) || bfs(c,i+1,j) || bfs(c,i,j-1) || bfs(c,i,j+1); 
}
    
bool is_divided(vector<vector<int>> c)
{
   for(int i=0; i<c[0].size();i++)
       if(c[0][i] == 0)
           if( bfs(c , 0 , i ) )
               return true;
    return false;
}

int latestDayToCross(int row, int col, vector<vector<int>>& cells)
{    
    vector<vector<int>> board = vector(row, vector(col, 0));
    int ct=0;
    int res=cells.size();
    for(auto &x:cells)
    {   ct++;
        board[x[0] - 1][x[1]-1] = 1;
            if(is_divided(board))
                res = ct;
    }
    return res;
}
};
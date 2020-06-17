
/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3363/ */



class Solution {
public:
    void change(vector<vector<char>>&bo,int x,int y)
    {
        if(x>=0 and x<bo.size() and y>=0 and y<bo[0].size())
        {
            if(bo[x][y]=='O')
            {
                bo[x][y]='&';
                change(bo,x+1,y);
                change(bo,x-1,y);
                change(bo,x,y+1);
                change(bo,x,y-1);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0) return;
        for(int i=0;i<board.size();i++)
        {
            if(board[i][0]=='O') change(board,i,0); 
        }
        //print(board);
        for(int i=0;i<board[0].size();i++)
        {
            if(board[0][i]=='O') change(board,0,i);
        }
        //print(board);
        for(int i=0;i<board.size();i++)
        {
            if(board[i][board[0].size()-1]=='O')
            {
                change(board,i,board[0].size()-1);
            }
        }
        //print(board);
        for(int i=0;i<board[0].size();i++)
        {
            if(board[board.size()-1][i]=='O') change(board,board.size()-1,i);
        }
        //print(board);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='&') board[i][j]='O';
            }
        }
    }
};
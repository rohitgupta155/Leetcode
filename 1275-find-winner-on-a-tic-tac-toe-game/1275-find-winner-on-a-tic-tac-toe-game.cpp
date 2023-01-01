class Solution {
public:
    string tictactoe(vector<vector<int>>& mo) {
        vector<vector<char>> m(3,vector<char>(3,'.'));
        bool f=true;
        for(auto i:mo)
        {
            if(f)
            {
                m[i[0]][i[1]]='X';
                f=false;
            }
            else{
                m[i[0]][i[1]]='O';
                f=true;
            }
        }
        if(m[0][0]==m[0][1]&&m[0][1]==m[0][2])
        {
            cout<<"R1 ";
            if(m[0][0]=='X')
                return "A";
            else if(m[0][0]=='O') return "B";
        }
        if(m[0][0]==m[1][1]&&m[1][1]==m[2][2]){
            cout<<"D1 ";
             if(m[0][0]=='X')
                return "A";
            else if(m[0][0]=='O')return "B";
        }
        if(m[0][0]==m[1][0]&&m[1][0]==m[2][0])
        {
            cout<<"C1 ";
             if(m[0][0]=='X')
                return "A";
            else if(m[0][0]=='O')return "B";
        }
        if(m[1][0]==m[1][1]&&m[1][1]==m[1][2])
        {
            cout<<"R2 ";
             if(m[1][0]=='X')
                return "A";
            else if(m[1][0]=='O')return "B";
        }
        if(m[0][1]==m[1][1]&&m[1][1]==m[2][1])
        {
            cout<<"C2 ";
             if(m[0][1]=='X')
                return "A";
            else if(m[0][1]=='O') return "B";
        }
        if(m[2][0]==m[2][1]&&m[2][1]==m[2][2])
        {
            cout<<"R3 ";
             if(m[2][0]=='X')
                return "A";
            else if(m[2][0]=='O')return "B";
        }
        if(m[1][2]==m[0][2]&&m[0][2]==m[2][2])
        {
            cout<<"C3 ";
             if(m[0][2]=='X')
                return "A";
            else if(m[0][2]=='O')return "B";
        }
        if(m[0][2]==m[1][1]&&m[1][1]==m[2][0])
        {
            cout<<"D2 ";
             if(m[2][0]=='X')
                return "A";
            else if(m[2][0]=='O')return "B";
        }
         if(mo.size()==9)
            return "Draw";
        return "Pending";
    }
};
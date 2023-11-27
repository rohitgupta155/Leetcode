class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x=0,y=0,fx=0,fy=1;
        set<pair<int,int>> ob;
        int ans=0;
        for(auto i:obstacles)
            ob.insert({i[0],i[1]});
        for(auto i:commands)
        {
            if(i==-1)
            {
                right(fx,fy);
            }
            else if(i==-2)
            {
                left(fx,fy);
            }
            else{
                while(i--)
                {
                    int nx=x+fx,ny=y+fy;
                    if(ob.find({nx,ny})!=ob.end())
                        break;
                    x=nx,y=ny;
                    ans=max(ans,x*x+y*y);
                }
            }
            // cout<<x<<" "<<y<<"->"<<fx<<" "<<fy<<endl;
        }
        return ans;
    }
    void right(int &x,int &y)
    {
        if(x==0&&y==1)
        {
            x=1,y=0;
        }
        else if(x==1&&y==0)
        {
            x=0,y=-1;
        }
        else if(x==0&&y==-1)
        {
            x=-1,y=0;
        }
        else{
            x=0,y=1;
        }
                // cout<<"Switched to "<<x<<" "<<y<<" right"<<endl;

    }
    
    void left(int &x,int &y)
    {
        if(x==0&&y==1){
            x=-1,y=0;
        }
        else if(x==-1&&y==0){
            x=0,y=-1;
        }
        else if(x==0&&y==-1)
        {
            x=1,y=0;
        }
        else{
            x=0,y=1;
        }
        // cout<<"Switched to left "<<x<<" "<<y<<endl;
            
    }
};
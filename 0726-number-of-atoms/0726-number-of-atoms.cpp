class Solution {
public:
    map<string,int> m;
    
    string countOfAtoms(string formula) {
        string a;
        pair<int,unordered_map<string,int>> h;
        bool flag=true;
        for(int i=0;i<formula.size();i++)
        {
            if(formula[i]=='(')
            {
                if(a!="")
                  {  m[a]++;                     
                // cout<<a<<endl;
                a="";}
                h=find(i+1,formula);
                i=h.first;
                for(auto j:h.second)
                {
                    m[j.first]+=j.second;
                }
            }
            else if(formula[i]>='A'&&formula[i]<='Z'&&a=="")
               { a+=formula[i];
                }
            else if(formula[i]>='0'&&formula[i]<='9')
            {
                int k=formula[i]-'0';
                i++;
                while(i<formula.size()&&formula[i]>='0'&&formula[i]<='9')
                {
                    k=k*10+(formula[i]-'0');
                    i++;
                }
                i--;
                // cout<<a<<" "<<k<<endl;
                m[a]+=k;
                a="";
                
                
            }
            else if(formula[i]<='z'&&formula[i]>='a')
                a+=formula[i];
            else{
                // cout<<a<<endl;
                m[a]++;
                a="";
                a+=formula[i];

            }
        }
        if(a!="")
            m[a]=1;
        string ans;
        for(auto i:m)
        {    ans+=i.first;
            if(i.second>1)
                ans+=to_string(i.second);
         // cout<<i.first<<" "<<i.second<<endl;
        }
        return ans;
            
    }
    pair<int,unordered_map<string,int>> find(int j,string& formula)
    {
        string a="";
        pair<int,unordered_map<string,int>> h;
        unordered_map<string,int> here;
        bool flag=true;
        while(formula[j]!=')')
        {
            if(formula[j]=='(')
               { 
                if(a!=""){
                    here[a]++;
                     // cout<<a<<endl;
                     a="";}
                h=find(j+1,formula);
                 j=h.first;
                 for(auto i:h.second)
                 {
                     here[i.first]+=i.second;
                 }
                
                
               }
            else if(formula[j]>='A'&&formula[j]<='Z'&&a=="")
               { a+=formula[j];
                }
            else if(formula[j]>='0'&&formula[j]<='9')
            {
                int k=formula[j]-'0';
                j++;
                while(j<formula.size()&&formula[j]>='0'&&formula[j]<='9')
                {
                    k=k*10+(formula[j]-'0');
                    j++;
                }
                j--;
                // cout<<a<<" "<<k<<endl;
                here[a]+=(k);
                a="";
            }
           else if(formula[j]<='z'&&formula[j]>='a')
                a+=formula[j];
            else{ 
                // cout<<a<<endl;
                here[a]++;
                a="";
                a+=formula[j];
                }
            j++;
        }
        if(a!="")
            here[a]++;
        if(j+1<formula.size()&&formula[j+1]<='9'&&formula[j+1]>='0')
        {
            j++;
            // cout<<"Inside"<<endl;
            int k=formula[j]-'0';
                j++;
                while(j<formula.size()&&formula[j]>='0'&&formula[j]<='9')
                {
                    k=k*10+(formula[j]-'0');
                    j++;
                }
                j--;
            for(auto i:here)
            {
                here[i.first]*=k;
                // cout<<i.first<<" "<<i.second<<endl;
            }
        }
        return {j,here};
    }
};
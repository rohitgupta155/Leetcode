class Solution {
public:
    int dayOfYear(string date) {
        vector<int> a={31,28,31,30,31,30,31,31,30,31,30,31};
        if(stoi(date.substr(0,4))%4==0&&stoi(date.substr(0,4))%100!=0 ||stoi(date.substr(0,4))%400==0)
            a[1]++;
        return accumulate(a.begin(),a.begin()+stoi(date.substr(5,2))-1,0)+stoi(date.substr(8,2));
    }
};
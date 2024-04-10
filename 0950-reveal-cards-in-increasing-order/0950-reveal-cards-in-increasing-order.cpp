class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> ans;
        sort(deck.begin(),deck.end(),greater<int>());
        for(auto i:deck)
        {
            if(ans.empty())
                ans.push_front(i);
            else
            {
                ans.push_front(ans.back());
                ans.pop_back();
                ans.push_front(i);
            }
        }
        deck.clear();
        while(!ans.empty())
        {
            deck.push_back(ans.front());
            ans.pop_front();
        }
        return deck;
    }
};
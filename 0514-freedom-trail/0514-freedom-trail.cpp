class Solution {
public:
    int arr[101][101];

    int countSteps(int ringIndex, int i, int n)
    {
        int dist = abs(i-ringIndex);
        int wrap = n-dist;

        return min(dist , wrap);
    }

    int solve(int ringIndex, int keyIndex, string &ring, string &key)
    {
        if(keyIndex == key.length())
            return 0;

        if(arr[ringIndex][keyIndex] != -1)
            return arr[ringIndex][keyIndex];
        
        int result = INT_MAX;

        for(int i=0;i<ring.length();i++)
        {
            if(ring[i] == key[keyIndex])
            {
                int step = countSteps(ringIndex, i, ring.length()) + 1 + solve(i, keyIndex+1 , ring, key);
                result = min(result, step);
            }
        }

        return arr[ringIndex][keyIndex] = result;
    }

    int findRotateSteps(string ring, string key) {
        memset(arr, -1, sizeof(arr));
        return solve(0, 0, ring, key);
    }
};
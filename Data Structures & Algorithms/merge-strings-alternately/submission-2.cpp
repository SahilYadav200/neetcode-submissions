class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int m=word1.size();
        int n=word2.size();
        int x=min(m,n);

        for(int i=0;i<x;i++)
        {
            merged.push_back(word1[i]);
            merged.push_back(word2[i]);
        }
        while(x<m)
        {
            merged.push_back(word1[x]);
            x++;
        }
        while(x<n)
        {
            merged.push_back(word2[x]);
            x++;
        }
        return merged;
    }
};
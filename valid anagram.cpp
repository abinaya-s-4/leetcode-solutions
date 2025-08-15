class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqs[26]={0};
        int freqt[26]={0};
        for (char c : s) freqs[c - 'a']++;
        for (char c: t) freqt[c - 'a']++;
        bool isanagram = true;
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                isanagram = false;
                break;
            }
        }
        return isanagram;
        
    }
};
class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence.size()==1) return true;
        if(sentence[0]!=sentence[sentence.size()-1])
            return false;
        string word="";
        char last;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                last=word[word.size()-1];
                if(last!=sentence[i+1])
                    return false;
                word="";
            }
            else
                word+=sentence[i];
        }
        return true;
    }
};
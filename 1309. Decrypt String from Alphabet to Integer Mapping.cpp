class Solution {
public:
    string freqAlphabets(string s) {
        string res;
        while(!s.empty())
        {
            int number=0;
            if(s.back()=='#')
            {
             number=(s[s.size()-3]-'0')*10 + (s[s.size()-2]-'0');
             s.pop_back();
             s.pop_back();
             s.pop_back();
            }
            else
            {
              number= s.back()-'0';
              s.pop_back();
            }
            res.push_back(number + 'a'-1);
        }
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};
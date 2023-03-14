class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length())
             return false;
          sort(s.begin() , s.end());
          sort(t.begin() , t.end());   
         for (int i = 0; i < s.length(); i++){
             int c = 0 , flag = 0;
             while (flag == 0 && c < s.length()){
                    if (s[i] == t[i]){
                       
                        flag = 1;
                    }
                     else
                         c++;
             }
             if (flag == 0 && c >= s.length())
                 return false;
         }
         return true;
     }
    
};
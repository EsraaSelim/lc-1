class Solution {
public:
    bool isPalindrome(int x) {

    string s = to_string(x);
    string y = s;
    int n = s.length();
    for (int i = 0; i < n/2; i++){
        swap (s[i] , s[n - i - 1]);
    }
    if (s == y)
        return true;
    return false;
    }

};

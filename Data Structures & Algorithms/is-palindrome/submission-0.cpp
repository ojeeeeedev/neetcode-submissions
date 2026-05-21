class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return isspace(c) || ispunct(c) || c > 127;
        }), s.end());

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });
        
        cout << s << '\n';

        int j = s.size() - 1;
        int i = 0;
        
        while (i < j && j >= 0) {
            if (s[i] != s[j]) {
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};

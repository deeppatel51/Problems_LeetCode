class Solution 
{
    private:
        char is_valid(char ch)
        {
            if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z'))
            {
                return ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                char temp = ch - 'A' + 'a';
                return temp;
            }
            else
            {
                return '\0';
            }
        }

    public:
        bool isPalindrome(string s) 
        {
            int start = 0;
            int end = s.size() - 1;
            bool is_palindrome = 1;

            while (start < end)
            {   
                if (is_valid(s[start]) == is_valid(s[end]))
                {
                    start++;
                    end--;
                }

                else if (is_valid(s[start]) == '\0')
                {
                    start++;
                }

                else if (is_valid(s[end]) == '\0')
                {
                    end--;
                }

                else
                {
                    is_palindrome = 0;
                    break;
                }
            }
            return is_palindrome;
        }
};

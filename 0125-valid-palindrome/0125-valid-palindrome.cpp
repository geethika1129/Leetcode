/*class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >='a' && s[i] <= 'z'))
            {
                s[k++]=s[i];
                n--;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
                break;
            }
        }
        return true;
    }
};*/

class Solution {
public:
bool isPalindrome(string s) {
	int start=0, end=s.length()-1;
	while(start<end) {
		if (!isalnum(s[start])) start++;
		else if (!isalnum(s[end])) end--;
		else {
			if (tolower(s[start++])!=tolower(s[end--])) return false;
		}
	}
	return true;
}
};
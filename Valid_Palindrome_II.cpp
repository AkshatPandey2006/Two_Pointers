bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    
    while(i<=j) {
        if(s[i++] != s[j--]) return false;
    }
    
    return true;
}

bool validPalindrome(string s) {
    if(isPalindrome(s)) return true;
    
    string one = s;
    string two = s;
    int i = 0;
    int j = s.size() - 1;
    
    while(i<j) {
        if(s[i] != s[j]) {
            one.erase(one.begin()+i);
            two.erase(two.begin()+j);
            
            if(isPalindrome(one)) return true;
            else if(isPalindrome(two)) return true;
            else return false;
        }
        i++; j--;
    }
    return false;
}


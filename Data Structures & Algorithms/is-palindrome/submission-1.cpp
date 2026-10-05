class Solution {
public:
    bool isPalindrome(string s) {
    string v="";
    string p="";
    // Looping through all characters using a modern range-based loop
    for (char c : s) {
        if(isalnum(static_cast<unsigned char>(c))){
            v+=c;
        }
        else{
          continue;
        }
    }
    for (char &c : v) {
        c = tolower(static_cast<unsigned char>(c));
    }
  
    for(int i=v.size()-1;i>=0;i--){
        p+=v[i];
    }
    
    return v==p;
    }
};

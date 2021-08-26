


map<string,bool> dp; 
bool checkString(string s, vector<string>& words) {
    
    if(dp.count(s)>0)
        return dp[s];
    if((find(words.begin(), words.end(), s) != words.end()))
        return true;
    
    string leftstring;
    for(int i=0;i<s.size();i++)
    { 
        leftstring=s.substr(0,i+1);
        if(  (find(words.begin(), words.end(),leftstring) != words.end() ) && (checkString(s.substr(i+1),words) ) ) 
        {  
            //cout<<s<<"here before true";
            dp[s]=true;
            return true;    
        }      
    }
    
    //cout<<s<<"here before false";
    dp[s]=false;   
    return false;
}
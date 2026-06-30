class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> mp;
        int i=0,j=0,ans=0,n=s.size();
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==3){
                ans+=(n-j);
                while(i<j){
                    if(mp[s[i]]==1){
                        mp.erase(s[i]);
                    }else{
                        mp[s[i]]--;
                    }
                    i++;
                    if(mp.size()==3){
                        ans+=(n-j);
                    }else{
                        break;
                    }
                }
            }
            j++;
        }
        while(i<j){
            if(mp[s[i]]==1){
                mp.erase(s[i]);
            }else{
                mp[s[i]]--;
            }
            i++;
            if(mp.size()==3){
                ans+=(n-j);
            }else{
                break;
            }
        }
        return ans;
    }
};
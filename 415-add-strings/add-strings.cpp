class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i1=num1.size()-1;
        int i2=num2.size()-1;
        string ans="";
        while(i1>=0||i2>=0||carry!=0){
            int d1=(i1>=0)?num1[i1]-'0':0;
            int d2=(i2>=0)?num2[i2]-'0':0;
            int sum=d1+d2+carry;
            carry=sum/10;
            ans+=to_string(sum%10);
            i1--;
            i2--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
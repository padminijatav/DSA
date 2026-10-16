class Solution {
public:
    int secondHighest(string s) {
        int lar=-1,seclar=-1;

        for(char c:s){
            if(isdigit(c)){
                int num=c-'0';
                if(num>lar){
                    seclar=lar;
                    lar=num;
                }else if(num>seclar && num<lar) {
                    seclar=num;
                }
            }
        }
        return seclar;
    }
};
class Solution {
public:
string add(string num1,string num2){
    string ans;
    int idx1=num1.size()-1,idx2=num2.size()-1;
    int sum=0,carry=0;
    while(idx2>=0){
        sum=((num1[idx1]-'0')+(num2[idx2]-'0')+carry);
        
        carry=sum/10;
        sum%=10;
        char c='0'+sum;
        ans+=c;
        idx1--,idx2--;
    }
    while(idx1>=0){
        sum=((num1[idx1]-'0')+carry);
        
        carry=sum/10;
        sum%=10;
        char c='0'+sum;
        ans+=c;
        idx1--;
    }
    if (carry > 0) {
    ans += ('0' + carry);
}
    
    reverse(ans.begin(),ans.end());
    return ans;

}


    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size()){
           return add(num1,num2);
        }
        else{
           return add(num2,num1);
        }
    }
};
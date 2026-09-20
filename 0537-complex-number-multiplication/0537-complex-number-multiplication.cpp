class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string a1,a2,b1,b2;
        int i=0;
        while(num1[i]!='+')
        {
            a1+=num1[i];
            i++;
        }
        i++;
        while(num1[i]!='i')
        {
            b1+=num1[i];
            i++;
        }
        i=0;
        while(num2[i]!='+')
        {
            a2+=num2[i];
            i++;
        }
        i++;
        while(num2[i]!='i')
        {
            b2+=num2[i];
            i++;
        }
        int r1=stoi(a1);
        int r2=stoi(a2);
        int i1=stoi(b1);
        int i2=stoi(b2);
        int real=(r1*r2)-(i1*i2);
        int imag=(r1*i2)+(r2*i1);
        string r=to_string(real);
        string m=to_string(imag);
        string complex=r+'+'+m+'i';
        return complex;
    }
};
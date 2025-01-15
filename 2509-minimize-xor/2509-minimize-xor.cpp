class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ones=__builtin_popcount(num2);
        int ans=0;

        for(int i=31;i>=0 && ones>0;i--)
        {
            if((num1>>i)&1!=0)
            {
                ans+=pow(2,i);
                ones--;
            }
        }

        int k=0;
        
        while(ones>0)
        {
             if((num1>>k)&1!=0)
             {
                k++;
                continue;
             }

             else
             {
                ans+=pow(2,k);
                ones--;
                k++;
             }
        }
        return ans;
    }
};
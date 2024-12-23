class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n);
        int a=0;
        for(int i=1;i<=n;i++){
            if(i%3==0&&i%5==0){
                ans[a++]="FizzBuzz";

            }
            else if(i%3==0)
            ans[a++]="Fizz";
            else if(i%5==0)
            ans[a++]="Buzz";
            else
            ans[a++]=to_string(i);
        }
        return ans;
    }
};

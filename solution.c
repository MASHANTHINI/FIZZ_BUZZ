/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char**ans=malloc(n*sizeof(char**));
    int j=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        ans[j++]="FizzBuzz";
        else if(i%3==0)
        ans[j++]="Fizz";
        else if(i%5==0)
        ans[j++]="Buzz";
        else
        {ans[j] = malloc(12);
            snprintf(ans[j], 12, "%d", i);
            j++;
       
        }
    }
    *returnSize=n;
    return ans;
    
}

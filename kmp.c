#include<stdio.h>

int KMP_String_Matching(int a, int b, char text[], char pattern[])
    {
        int n = a;
        int m = b;
        int lps[m];
        int i=1,j=0;
        lps[0] = 0;
        while(i<m)
        {
            if(pattern[i] == pattern[j])
            {
                lps[i] = j+1;
                i++;
                j++;
            }
            else
            {
                if(j==0)
                {
                    lps[i] = 0;
                    i++;
                }
                else
                {
                    j = lps[j-1];
                }
            }
        }
        i=0;
        j=0;
        while(i<n)
        {
            if(text[i] == pattern[j])
            {
                i++;
                j++;
            }
            if(j==m)
            {
                return i-j;
            }
            else if(i<n && text[i]!=pattern[j])
            {
                if(j==0)
                    i++;
                else
                    j = lps[j-1];
            }
        }
        return -1;
    }

int main()
{
    int a,b;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    char text[a], pattern[b];
    scanf("%s", text);
    scanf("%s", pattern);
    

    int result = KMP_String_Matching(a, b, text, pattern);
    
    if(result == -1)
    {
        printf("%d\n", 0);
    }
    else
    {    
        printf("%d\n", result+1);
    }

    return 0;
}

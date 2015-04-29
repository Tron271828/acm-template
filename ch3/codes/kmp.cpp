int next[100];
int KMP(char *str, char *pat)
{
    int sln=strlen(str);
    int pln=strlen(pat);
    int i,j;

    next[0]=-1;
    for (i=0,j=-1; i<pln; )
        if (j==-1 || (pat[i]==pat[j]))
            next[++i]=++j; 
        else 
            j=next[j];

    for (i=j=0; i<sln and j<pln; )
        if (j==-1 || (str[i]==pat[j]))
            ++i,++j;
        else
            j=next[j];

    return (j==patln) ? (i-j) : -1;
}

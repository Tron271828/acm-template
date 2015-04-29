// 左闭右开区间 a[x..y-1]
int lowerBound(int *a, int x, int y, int v)
{
    while (x<y)
    {
        int mid=x+(y-x)/2;
        /*
            v == a[mid]: 至少找到一个等于 v 的，但前面可能还有。
            v < a[mid]: v 肯定不能在 mid 的后面。
            v > a[mid]: mid 和前面都不可以。
        */
        if (v<=a[mid]) y=mid; else x=mid+1;
    }
    return x;
}
 
int upperBound(int *a, int x, int y, int v)
{
    while (x<y)
    {
        int mid=x+(y-x)/2;
        /*
            v == a[mid]: 答案肯定在后面，因为不可能等于 v。
            v < a[mid]: mid 和后面都不可以。
            v > a[mid]: 应该在 mid 的后面。
        */
        if (v<a[mid]) y=mid; else x=mid+1;
    }
    return y;
}
// 数据范围 a[x..(y-1)]，为左闭右开区间。
int binarySearch(int *a, int x, int y, int v)
{
    while (x<y)
    {
        int mid=x+(y-x)/2;
        if (v==a[mid])
            return mid;
        else if (v<a[mid])
            y=mid;
        else
            x=mid+1;
    }
    return -1;
}

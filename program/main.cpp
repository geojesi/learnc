#include <cstdio>

int f(int k)
{
    if (k == 0)
        return 1;
    return 2*f(k-1);

}
int main()
{
    char a[105] = {}, b[105] = {};
    scanf("%s %s", a, b);
    int len1 = 0, len2 = 0;
    for (int i = 0; a[i] != 0; i++)
        len1++;
    for (int i = 0; b[i] != 0; i++)
        len2++;
    int cnt = 0;
    for (int i = 0; i < len1; i++)
    {
        if (a[i] == 1)
            cnt += f(len1 - i - 1);
    }
    for (int i = 0; i < len2; i++)
    {
        if (b[i] == 1)
            cnt += f(len2 - i - 1);
    }
    printf("%d", cnt);
}

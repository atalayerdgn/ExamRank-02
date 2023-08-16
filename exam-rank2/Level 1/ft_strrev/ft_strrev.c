char    *ft_strrev(char *str)
{
    int start = 0;
    int end = 0;
    char tmp;
    while(str[end])
        end++;
    end--;
    while(end > start)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}
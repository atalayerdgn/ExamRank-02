#include <stdlib.h>
size_t  ft_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
        i++;
    return (i);
}
size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    size_t counter = 0;
    while(s[i])
    {
        if (s[i] == reject[j])
        {
            while(s[i] == reject[j])
            {
                counter++;
                j++;
                i++;
            }
        }
        else
            i++;
    }
    if (counter == 0)
        return (ft_strlen(s));
    if (counter == ft_strlen(reject))
        return (1);
    return (0);
}
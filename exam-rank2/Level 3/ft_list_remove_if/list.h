#ifndef LIST_H
#define LIST_H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif
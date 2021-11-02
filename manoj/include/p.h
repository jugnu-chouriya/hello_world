#ifndef _P_H
#define _P_H
char *sgs_clib_strrchr(const char *str, int c)
{
    char *p ;

    for(; *str ; ++str)
        if(*str == c)
            p = (char*) str;
    return p;
}
#endif

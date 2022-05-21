void *ft_calloc(size_t n, size_t s)
{
    void *s;
  
    s = malloc(num * s);
    if(s != NULL)
        memset(s, 0, num * s);
    return s;
}

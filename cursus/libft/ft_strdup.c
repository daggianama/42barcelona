char *ft_strdup (const char *s)
{
    char *pt = malloc (strlen (s) + 1);   // allocate memory
    if (pt != NULL)
        strcpy (pt,s);                    // copy string
    return pt;                            // return the memory
}

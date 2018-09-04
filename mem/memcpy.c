void *t_memcpy(void *dst, const void *src, const unsigned int n) {
    if (n == 0) return dst;
    char *d = dst;
    const char *s = src;
    const char *t = src + n;
    do  {*d++ = *s++;}
    while (s != t);
    return dst;
}


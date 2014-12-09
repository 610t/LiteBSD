/*	$FreeBSD: src/sbin/rcorder/ealloc.h,v 1.2.2.1.4.1 2010/06/14 02:09:06 kensmith Exp $	*/
/*	$NetBSD: ealloc.h,v 1.1.1.1 1999/11/19 04:30:56 mrg Exp $	*/

void	*emalloc(size_t len);
char	*estrdup(const char *str);
void	*erealloc(void *ptr, size_t size);
void	*ecalloc(size_t nmemb, size_t size);

	int * p, * q, i, j;
	p = i;(Errado)
	q = &j;(Correto)
	p = &*&i;(Correto)
	i = (*&)j;(Errado)
	i = *&j;(Correto)
	i = *&*&j;(Correto)
	q = *p;(Errado)
	i = (*p)++ + *q;(Correto)

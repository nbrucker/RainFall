typedef struct	s_n {
	void		*addr;
	char[104]	str;
}				t_n;

void	useless(void) {
	return;
}

int		main(int argc, char **argv) {
	t_n		*a;
	t_n		*b;
	void 	(*f)();
	int		len;

	if (argc <= 1)
		exit();
	a = (t_n*)malloc(sizeof(t_n));
	b = (t_n*)malloc(sizeof(t_n));
	a->addr = &useless;
	b->addr = &useless;
	len = strlen(argv[1]);
	memcpy(a->str, argv[1], len);
	f = b->addr;
	(*f)();
	return 0;
}

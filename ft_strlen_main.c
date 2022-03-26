int		main(void)
{
	char	string[15]={1,2,3,4};
	char	*first_pointer;
	int		length;

	first_pointer = &string[0];
	length = ft_strlen(first_pointer);
	printf("length %d\n", length);
}

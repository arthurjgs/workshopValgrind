void why_not(char *name) 
{
	pritnf("name = %s\n", name);
}

void check_name(char *name)
{
	char magic_char = 'j';
	if (name[0] == magic_char)
	{
		printf("hit once\n");
	}
	if (name[3] == magic_char)
	{
		printf("hit twice\n");
	}
	if (strlen(name) == magic_char && name[0] == magic_char && name[3] == magic_char)
	{
		printf("MAGIC STRING\n");
		why_not(name);
	}
}

int main(int av, char **av)
{
	check_name(av[1]);
	return 0;
}

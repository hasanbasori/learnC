void    put_char(char c);

// void    ft_first_line(int x)
{
    int column;

    put_char('/');
    column = 1;
    while (column < x - 1)
    {
         put_char('*');
         column++;
    }
    if(x != 1){
        put_char('\\');
    }
}

void	ft_first_line(int x)
{
	int column;

	put_char('/'); 
	column = 1;
	while (column < x - 1)
	{
		put_char('*'); 
		column++;
	}
	if (x != 1)
	{
		put_char('\\'); 
	}
	put_char('\n');
}


void rush(int x)
{
    if(x <1 )
    {
    return;
    }
    ft_first_line(x);
}

int main(void)
{
    rush(2);
    return 0;
}
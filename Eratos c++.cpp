vector<int> Eratos(int max)
{
	vector<int> sieve(max + 1, 1);
	sieve[1] = 0;

	for (int i = 2; i <= sqrt(max); i++)
	{
		if (sieve[i] == 0)	continue;
		for (int j = i + i; j <= max; j += i)	sieve[j] = 0;
	}

	return sieve;
}

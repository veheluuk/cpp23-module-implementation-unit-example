int joku(int hah)
{
	return hah + 100;
}

int main(int argc, char ** argv)
{
	int j = joku(joku(3));
	j++;
	return 0;
}

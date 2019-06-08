
int main(void) {
	char *s = "hola";

	// Explota!
	s[0] = 'H';

	return 0;
}

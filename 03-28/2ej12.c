

bool esta_el_elemento(int vector[], int n, int elem) {
	for(int i = 0; i < n; i++)
		if(vector[i] == elem)
			return true;

	return false;
}



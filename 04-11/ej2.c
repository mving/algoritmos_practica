// 2.a
bool es_triangular_superior(float matriz[][N]) {
	for(size_t i = 0; i < N; i++)
		for(size_t j = 0; j < N; j++)
			if(i > j && matriz[i][j] != 0)
				return false;

	return true;
}

// 2.a
bool es_triangular_superior(float matriz[][N]) {
	for(size_t i = 1; i < N; i++)
		for(size_t j = 0; j < i; j++)
			if(matriz[i][j])
				return false;
	return true;
}

// 2.b
float matriz[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
bool es_triangular = es_triangular_superior(matriz);
printf("La matriz %ses triangular superior\n", es_triangular ? "" : "no ");

// 2.b
float matriz[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
if(es_triangular_superior(matriz))
	printf("La matriz es triangular superior\n");
else
	printf("La matriz no es triangular superior\n");

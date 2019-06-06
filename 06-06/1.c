listas:

insertar
es_vacia
buscar
remover

si no lo voy a modificar agregar const
si es una funcion privada ponerle static al comienzo

void *lista_buscar(const lista_t *l, const void *dato, int (*cmp)(const void *a, const void *b));

void *lista_borrar(const lista_t *l, const void *dato, int (*cmp)(const void *a, const void *b));

para el parcial implementar alguna primitiva de listas

implementar map y filter

map para recorrer todos

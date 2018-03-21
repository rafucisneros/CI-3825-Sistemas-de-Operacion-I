typedef struct Nodo_Path{} Nodo_Path;
typedef struct Nodo_Hash{} Nodo_Hash;
typedef struct Lista_Llaves{} Lista_Llaves;
typedef struct Indice{} Indice;
void imprimir_nodo(Nodo_Hash *nodo);
void imprimir_lista(Lista_Llaves *lista);
void imprimir_tabla(Indice *tabla);
Indice *crear_indice(int tamano);
int hash(char *llave, int tamano_arreglo);
Nodo_Hash *buscar(Indice *tabla, char *llave);
void insertar_coleccion_paths(Indice* tabla, char *llave, Nodo_Path *archivos);
Indice* rehash(Indice* tabla_antigua);
Indice* insertar_llave_hash(Indice *tabla, char *path, int inicio, int es_archivo);
void escribir_paths(FILE *f, Nodo_Path *path);
void escribir_llave(FILE *f, Nodo_Hash *nodo);
void escribir_indice(Indice *tabla, char *nombreIndice);
void insertar_rapido(Indice* tabla, char* llavedir, char* pathdir);
Indice* leer_indice(char *nombreIndice);
int buscar_path(Indice *tabla, char *path_1, int es_archivo);
void imprimir_nodo_simple(Nodo_Hash *nodo);

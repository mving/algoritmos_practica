#include <stdio.h>
#include <stdbool.h>

#define MASK_FUEL 0xC0
#define MASK_PAY 0x10
#define MASK_LANG 0x0C
#define MASK_COIN 0x03

#define SHIFT_FUEL 6
#define SHIFT_LANG 2
#define SHIFT_COIN 0
// No defino FREE porque es un bit solo.


typedef enum {FUEL_900, FUEL_750, FUEL_600, FUEL_450} fuel_t;
typedef enum {LANG_GERMAN, LANG_SPANISH, LANG_FRENCH, LANG_ENGLISH} lang_t;
typedef enum {COIN_6, COIN_5, COIN_4, COIN_1} coin_t;


const char *str_fuel[] = {"900", "750", "600", "450"};
const char *str_lang[] = {"german", "spanish", "french", "english"};
const char *str_coin[] = {"6", "5", "4", "1"};


bool get_pay(const unsigned char *reg) {
	return *reg & MASK_PAY;
}

void set_pay(unsigned char *reg, bool pay) {
	// Lo hacemos condicional, la versión incondicional está en los otros
	if(pay)
		*reg |= MASK_PAY; // set
	else
		*reg &= ~MASK_PAY; // clear
}

fuel_t get_fuel(const unsigned char *reg) {
	return (*reg & MASK_FUEL) >> SHIFT_FUEL;
}

void set_fuel(unsigned char *reg, fuel_t fuel) {
	*reg &= ~MASK_FUEL; // clear
	*reg |= fuel << SHIFT_FUEL; // set
}

coin_t get_coin(const unsigned char *reg) {
	return (*reg & MASK_COIN) >> SHIFT_COIN;
}

void set_coin(unsigned char *reg, coin_t coin) {
	*reg &= ~MASK_COIN; // clear
	*reg |= coin << SHIFT_COIN; // set
}

lang_t get_lang(const unsigned char *reg) {
	return (*reg & MASK_LANG) >> SHIFT_LANG;
}

void set_lang(unsigned char *reg, lang_t lang) {
	*reg &= ~MASK_LANG; // clear
	*reg |= lang << SHIFT_LANG; // set
}


int main(void) {
	unsigned char *reg;

	// En la vida real esto se inicializaría así:
	// reg = REGISTER_ADDRESS
	// porque es una posición de memoria predefinida donde se mapea la
	// configuración.
	// Nosotros lo vamos a inicializar:
	unsigned char aux = 0;
	reg = &aux;

	// Seteamos los valores por default del manual del juego:
	set_pay(reg, true);
	set_fuel(reg, FUEL_750);
	set_lang(reg, LANG_ENGLISH);
	set_coin(reg, COIN_1);

	printf("El registro vale %02X\n", *reg);

	printf("Juego con fichas: %s\n", get_pay(reg) ? "verdadero" : "falso");
	printf("Combustible por ficha: %s\n", str_fuel[get_fuel(reg)]);
	printf("Idioma: %s\n", str_lang[get_lang(reg)]);
	printf("Creditos por ficha: %s\n", str_coin[get_coin(reg)]);

	return 0;
}


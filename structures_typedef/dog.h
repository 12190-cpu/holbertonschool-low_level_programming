#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure repre©sentant un chie
 * @name: nom
 * @age: a¢g
 * @owner: proprietaire
 *
 * Description: Cette structure stocke les informations principales
 * concernant un chien : son nom, son √¢ge et son propri√©tair
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - nouveau type
 */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

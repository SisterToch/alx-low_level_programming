#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	/*check if null*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocate space*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/*calc  name lenght*/
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	/*allocate memory4 name string*/
	dog->name = malloc(nl * sizeof(char));
	/*alloc fails? return null&free*/
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/*cpy name to dogt strct*/
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)/*OWN L*/
		;
	ol++;
	/*alloc mem for owner str*/
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

// set.h adapted from lab 8 with additional functions
// Credit to John Shephard

#ifndef SET_H
#define SET_H

typedef struct SetRep *Set;

// Function signatures

Set newSet();
void disposeSet(Set);
void insertInto(Set,char *);
void insertUnordered(Set s, char *str);
void dropFrom(Set,char *);
int  isElem(Set,char *);
int  nElems(Set);
void showSet(Set);
char *get_element(Set s, int index);
int get_index(Set s, char *url);


#endif


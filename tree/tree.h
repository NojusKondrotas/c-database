//definitions

#define GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <errno.h>

/*
Tree
    Node, Leaf
*/

typedef unsigned int int32;
typedef unsigned short int int16;
typedef unsigned char int8;

struct s_node{
    struct s_node *north;
    struct s_node *west;
    struct s_leaf *east;
    int8 path[256];
};
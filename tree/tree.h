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

struct s_node{
    struct s_node *north;
    struct s_node *west;
    struct s_leaf *east;
};
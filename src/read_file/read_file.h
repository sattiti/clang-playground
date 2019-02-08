#ifndef _READ_FILE_H
#define _READ_FILE_H
 
typedef struct p_tag{
    char name[1024];
    char gender;
    int  number;
} player;
 
void readme(const char filepath[]);

#endif /* _READ_FILE_H */
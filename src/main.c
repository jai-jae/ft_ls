#include <stdlib.h>
#include <stdint.h>
#include <pwd.h>
#include <dirent.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    DIR *pdir;
    struct dirent * dir;

    if (!(pdir = opendir("/Users/jai/42/42api")))
        return (-1);
    while((dir = readdir(pdir)) != NULL)
        printf("%s\n", dir->d_name);
    printf("%zu\n", sizeof(dir->d_name));
    
    // struct dirent {
    // ino_t d_ino; /* inode number */
    // off_t d_off; /* offset to the next dirent */
    // unsigned short d_reclen; /* length of this record */
    // unsigned char d_type; /* type of file; not supported by all file system types */
    // char d_name[256]; /* filename */ };

    return (0);
}

// write
// opendir
// readdir
// closedir
// stat
// lstat
// getpwuid
// getgrgid
// listxattr
// getxattr
//  time
// ctime
// readlink	

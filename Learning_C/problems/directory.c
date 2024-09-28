#include <stdio.h>
#include <dirent.h>
#include <string.h>


void listFilesAndDirectories(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (dir == NULL) {
        perror("Unable to open directory");
        return;
    }

    printf("Files and Directories in '%s':\n", path);

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR) {
            if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
                printf("Directory: %s\n", entry->d_name);
            }
        } else if (entry->d_type == DT_REG) {
            printf("File: %s\n", entry->d_name);
        }
    }

    closedir(dir);
}

int main() {
    const char *directoryPath = ".";  // Replace with the desired directory path
    listFilesAndDirectories(directoryPath);

    return 0;
}

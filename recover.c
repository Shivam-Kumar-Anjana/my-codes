#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define BLOCK_SIZE 512
#define filename_size 8
typedef uint8_t BYTE;

bool is_new_image(BYTE buffer[]);

//main program
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        //usage message
        printf("Usage: ./recover image\n");
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        //file not found
        printf("file not found\n");
        return 1;
    }
    
    //buffer dclared
    BYTE buffer[BLOCK_SIZE];
    
    //first image found
    bool have_found_first_jpeg = false;
    int file_index = 0;
    FILE *output;
    while (fread(buffer, BLOCK_SIZE, 1, file))
    {
        //check for new image
        if (is_new_image(buffer))
        {
            if (!have_found_first_jpeg)
            {
                have_found_first_jpeg = true;
            }
            else
            {
                fclose(output);
            }
            char FILENAME[filename_size];
            sprintf(FILENAME, "%0.3i.jpg", file_index++);
            output = fopen(FILENAME, "w");
            if (output == NULL)
            {
                return 1;
            }
            fwrite(buffer, BLOCK_SIZE, 1, output);
        }
        //first image found
        else if (have_found_first_jpeg)
        {
            fwrite(buffer, BLOCK_SIZE, 1, output);
        }    
            
    }

    //closing of files
    fclose(file);
    fclose(output);
}

bool is_new_image(BYTE buffer[BLOCK_SIZE])
{
    if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) && (buffer[3] & 0xf0) == 0xe0)
    {
        return true;
    }
       
    else
    {
        return false; 
    }
}

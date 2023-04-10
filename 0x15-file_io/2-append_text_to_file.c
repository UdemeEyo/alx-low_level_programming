#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: a pointer to the name of the file
  * @text_content: the string to add to the end of a file
  *
  * Return: if thr function fails or filename is NULL --1
  * if the file does not exist the user lacks write permission --1
  * otherwise -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int e, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	e = open(filename, O_WRONLY | O_APPEND);
	w = write(e, text_content, len);
	if (e == -1 || w == -1)
		return (-1);
	close(e);
	return (1);
}

/*
    Copyright 2022 Eduardo Antunes

    This file is part of todo.

    todo is free software: you can redistribute it and/or
    modify it under the terms of the GNU General Public 
    License as published by the Free Software Foundation, 
    either version 3 of the License, or (at your option) 
    any later version.

    todo is distributed in the hope that it will be useful, 
    but WITHOUT ANY WARRANTY; without even the implied 
    warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
    PURPOSE. See the GNU General Public License for more
    details.

    You should have received a copy of the GNU General 
    Public License along with todo. If not, see 
    <https://www.gnu.org/licenses/>. 
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "utils.h"

// A yes-or-no prompt
bool yorn(const char *prompt)
{
    char ch;
    printf("%s [y/n] ", prompt);
    fflush(stdin);
    ch = getchar();
    // Remove trailing newline
    getchar();
    return ch == 'y';
}

// Get a line of input from stdin
void get_line(char *buf, int buf_size)
{
    fgets(buf, buf_size, stdin);
    // Remove trailing newline
    buf[strcspn(buf, "\n")] = '\0';
}

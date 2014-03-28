#include<stdio.h>
#include"Header.h"


int main(int argc, char *argv[])
{
	dynarr_t *arr = mk_dynarr(2);
	for (int i = 0; i < 13; i++)
	{
		dynarr_push_back(arr, i);
	}

}
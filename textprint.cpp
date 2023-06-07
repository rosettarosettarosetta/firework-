#include"textprint.h"

Textprint::Textprint(wchar_t a[])
{
	setstr(a);
}

void Textprint::setstr(wchar_t a[])
{
	for (int i = 0; a[i]; i++)
		str[i] = a[i];
}

wchar_t Textprint::getstr(int i)
{
	return str[i];
}
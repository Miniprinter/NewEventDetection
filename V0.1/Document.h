#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "Utilities.h"

struct Document
{
public:
	vector<string> words_s; // the remaining words after stemming
	vector<int> words_i; // the index of each word of 'words_s', refer to the word table.
	int clusterId = -1; // -1 means unclustered

	Document();
	~Document();
};

#endif
